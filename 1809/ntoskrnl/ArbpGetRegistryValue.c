/*
 * XREFs of ArbpGetRegistryValue @ 0x1407399E4
 * Callers:
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140737C00 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddInaccessibleAllocationRange @ 0x140738F60 (ArbAddInaccessibleAllocationRange.c)
 *     ArbBuildAssignmentOrdering @ 0x140739458 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x1401B8450 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS v5; // eax
  PVOID PoolWithTag; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  v5 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformationAlign64, 0LL, 0, &ResultLength);
  if ( v5 != -1073741789 && v5 != -2147483643 )
    return 3221225473LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4D627241u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v8 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValueFullInformationAlign64,
         PoolWithTag,
         ResultLength,
         &ResultLength);
  if ( v8 < 0 )
  {
    ExFreePoolWithTag(v7, 0);
    return (unsigned int)v8;
  }
  else
  {
    *a3 = v7;
    return 0LL;
  }
}
