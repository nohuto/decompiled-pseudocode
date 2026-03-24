/*
 * XREFs of SepIsLockedDown @ 0x14089B6DC
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14060A60C (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x1401BAB10 (ZwQueryLicenseValue.c)
 *     ExQueryFastCacheDevLicense @ 0x1406C3080 (ExQueryFastCacheDevLicense.c)
 *     KIsSideloadingEnabled @ 0x1408DDB94 (KIsSideloadingEnabled.c)
 */

__int64 __fastcall SepIsLockedDown(unsigned __int8 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  int LicenseValue; // eax
  unsigned __int8 v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  char v8; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v6 = 0;
  *a2 = 1;
  if ( a1 < 2u )
  {
    *a2 = 0;
    return v2;
  }
  v2 = KIsSideloadingEnabled(&v6);
  if ( (v2 & 0x80000000) != 0 )
    return v2;
  v7 = v6;
  if ( v6 )
    goto LABEL_9;
  LicenseValue = ZwQueryLicenseValue((__int64)aTv_1, (__int64)&v8, (__int64)&v7);
  v2 = LicenseValue;
  if ( LicenseValue != -1073741772 )
  {
    if ( LicenseValue < 0 )
      return v2;
    if ( !v7 )
      goto LABEL_8;
LABEL_9:
    *a2 = 0;
    return v2;
  }
  v7 = 0;
  v2 = 0;
LABEL_8:
  if ( ExQueryFastCacheDevLicense() )
    goto LABEL_9;
  return v2;
}
