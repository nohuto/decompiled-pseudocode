/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1800EE2B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  ULONG Length; // esi
  signed int v12; // ebx
  ULONG *Heap; // rdi
  ULONG v14; // [rsp+50h] [rbp+8h] BYREF

  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  Length = -1;
  if ( ValueLength < 0xFFFFFFF0 )
    Length = ValueLength + 16;
  v12 = ValueLength >= 0xFFFFFFF0 ? 0xC0000095 : 0;
  if ( ValueLength + 16 >= 0x10 )
  {
    Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
    if ( !Heap )
      return -1073741801;
    v12 = -1073741772;
    if ( !PrimaryHandle
      || (v12 = NtQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v14),
          v12 == -1073741772) )
    {
      if ( !FallbackHandle )
      {
LABEL_18:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v12;
      }
      v12 = NtQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, Heap, Length, &v14);
    }
    if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
    {
      *ResultLength = Heap[2];
      if ( ValueType )
        *ValueType = Heap[1];
      if ( v12 >= 0 )
        memmove(ValueData, Heap + 3, Heap[2]);
    }
    goto LABEL_18;
  }
  return v12;
}
