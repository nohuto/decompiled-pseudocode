/*
 * XREFs of sub_18005BEE0 @ 0x18005BEE0
 * Callers:
 *     sub_180012E38 @ 0x180012E38 (sub_180012E38.c)
 *     sub_18005BCFC @ 0x18005BCFC (sub_18005BCFC.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_18005BEE0(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, _DWORD *a5)
{
  ULONG Length; // ebx
  _DWORD *Heap; // rdi
  NTSTATUS ValueKey; // ebx
  size_t v13; // rax
  ULONG ResultLength[10]; // [rsp+30h] [rbp-28h] BYREF

  ResultLength[0] = 0;
  if ( !a5 )
    return 3221225485LL;
  Length = *a5 + 12;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
  if ( Heap )
  {
    ValueKey = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Heap, Length, ResultLength);
    if ( ValueKey >= 0 )
    {
      v13 = (unsigned int)Heap[2];
      if ( !(_DWORD)v13 )
      {
        ValueKey = -1073741811;
        goto LABEL_6;
      }
      if ( (unsigned int)v13 > *a5 )
      {
LABEL_7:
        ValueKey = -1073741789;
        *a5 = Heap[2];
LABEL_6:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return (unsigned int)ValueKey;
      }
      *a5 = v13;
      if ( a4 )
        memmove(a4, Heap + 3, v13);
      if ( a3 )
        *a3 = Heap[1];
    }
    if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
      goto LABEL_6;
    goto LABEL_7;
  }
  return 3221225626LL;
}
