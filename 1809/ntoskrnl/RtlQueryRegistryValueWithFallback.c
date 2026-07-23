/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1405C7290
 * Callers:
 *     EtwpGetGuidSecurityDescriptor @ 0x1405C7158 (EtwpGetGuidSecurityDescriptor.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValueWithFallback(
        HANDLE PrimaryHandle,
        HANDLE FallbackHandle,
        PUNICODE_STRING ValueName,
        ULONG ValueLength,
        PULONG ValueType,
        PVOID ValueData,
        PULONG ResultLength)
{
  ULONG Length; // esi
  signed int v11; // ebx
  ULONG *PoolWithTag; // rdi
  ULONG v14; // [rsp+50h] [rbp+8h] BYREF

  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  Length = -1;
  if ( ValueLength < 0xFFFFFFF0 )
    Length = ValueLength + 16;
  v11 = ValueLength >= 0xFFFFFFF0 ? 0xC0000095 : 0;
  if ( ValueLength + 16 >= 0x10 )
  {
    PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, Length, 0x6D6C7472u);
    if ( !PoolWithTag )
      return -1073741801;
    v11 = -1073741772;
    if ( !PrimaryHandle
      || (v11 = ZwQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &v14),
          v11 == -1073741772) )
    {
      if ( !FallbackHandle )
      {
LABEL_12:
        ExFreePoolWithTag(PoolWithTag, 0);
        return v11;
      }
      v11 = ZwQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &v14);
    }
    if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
    {
      *ResultLength = PoolWithTag[2];
      if ( ValueType )
        *ValueType = PoolWithTag[1];
      if ( v11 >= 0 )
        memmove(ValueData, PoolWithTag + 3, PoolWithTag[2]);
    }
    goto LABEL_12;
  }
  return v11;
}
