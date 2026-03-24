/*
 * XREFs of ExpLicUpdateChecksum @ 0x1400077F0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056E0E0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1405A1820 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1408CE940 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1408CEB50 (ExSetLicenseTamperState.c)
 *     sub_1408CF4A0 @ 0x1408CF4A0 (sub_1408CF4A0.c)
 *     sub_1408CF610 @ 0x1408CF610 (sub_1408CF610.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLicUpdateChecksum(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  return result;
}
