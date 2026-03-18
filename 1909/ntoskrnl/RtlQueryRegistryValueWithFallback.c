/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x1405C5DA0
 * Callers:
 *     EtwpGetGuidSecurityDescriptor @ 0x1405C5C6C (EtwpGetGuidSecurityDescriptor.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
  ULONG *PoolWithTag; // rdi
  int v12; // ebx
  ULONG v14; // [rsp+50h] [rbp+8h] BYREF

  if ( __PAIR128__((unsigned __int64)PrimaryHandle, (unsigned __int64)FallbackHandle) == 0 )
    return -1073741811;
  Length = ValueLength + 16;
  if ( ValueLength >= 0xFFFFFFF0 )
    return -1073741675;
  PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, Length, 0x6D6C7472u);
  if ( !PoolWithTag )
    return -1073741801;
  v12 = -1073741772;
  if ( PrimaryHandle )
  {
    v12 = ZwQueryValueKey(PrimaryHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &v14);
    if ( v12 != -1073741772 )
      goto LABEL_8;
  }
  if ( FallbackHandle )
  {
    v12 = ZwQueryValueKey(FallbackHandle, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &v14);
LABEL_8:
    if ( (int)(v12 + 0x80000000) < 0 || v12 == -2147483643 )
    {
      *ResultLength = PoolWithTag[2];
      if ( ValueType )
        *ValueType = PoolWithTag[1];
      if ( v12 >= 0 )
        memmove(ValueData, PoolWithTag + 3, PoolWithTag[2]);
    }
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
