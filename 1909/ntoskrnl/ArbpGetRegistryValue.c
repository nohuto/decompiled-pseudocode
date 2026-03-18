/*
 * XREFs of ArbpGetRegistryValue @ 0x1407679C0
 * Callers:
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140765B8C (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddInaccessibleAllocationRange @ 0x140766F10 (ArbAddInaccessibleAllocationRange.c)
 *     ArbBuildAssignmentOrdering @ 0x140767418 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS v5; // eax
  PVOID PoolWithTag; // rax
  void *v7; // rbx
  NTSTATUS v8; // edi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformationAlign64, 0LL, 0, &ResultLength);
  if ( v5 != -1073741789 && v5 != -2147483643 )
    return 3221225473LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x4D627241u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformationAlign64, PoolWithTag, ResultLength, &ResultLength);
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
