/*
 * XREFs of SepAdtClassifyObjectIntoSubCategory @ 0x1408A0E34
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140597850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1405BC7A8 (SepAdtAuditObjectAccessWithContext.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     SeAuditHandleCreation @ 0x1406BE010 (SeAuditHandleCreation.c)
 *     SeOperationAuditAlarm @ 0x14089EC94 (SeOperationAuditAlarm.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x1400131C0 (SepAuditingEnabledForSubcategory.c)
 *     RtlCompareUnicodeString @ 0x1405C0F20 (RtlCompareUnicodeString.c)
 *     SepIsRemovableStorageDevice @ 0x1408A4E44 (SepIsRemovableStorageDevice.c)
 */

__int64 __fastcall SepAdtClassifyObjectIntoSubCategory(__int64 a1, const UNICODE_STRING *a2, char a3, char a4)
{
  POBJECT_TYPE *v5; // rax
  __int64 v6; // r11
  unsigned __int16 v7; // r9
  __int64 v8; // r11

  if ( !a1 )
  {
    if ( !a2 )
      return 119LL;
    if ( !RtlCompareUnicodeString(a2, &SepFileTypeName, 0) )
      return 117LL;
    if ( RtlCompareUnicodeString(a2, &SepRegistryTypeName, 0) )
      return 119LL;
    return 118LL;
  }
  v5 = (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  if ( v5 == CmKeyObjectType )
    return 118LL;
  if ( v5 == IoFileObjectType )
  {
    if ( SepAuditingEnabledForSubcategory(129, a3, a4)
      && (unsigned __int8)SepIsRemovableStorageDevice(*(_QWORD *)(v6 + 8)) == 1 )
    {
      return v7;
    }
    return 117LL;
  }
  if ( v5 == (POBJECT_TYPE *)IoDeviceObjectType
    && SepAuditingEnabledForSubcategory(129, a3, a4)
    && (unsigned __int8)SepIsRemovableStorageDevice(v8) == 1 )
  {
    return v7;
  }
  return 119LL;
}
