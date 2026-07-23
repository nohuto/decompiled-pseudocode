/*
 * XREFs of ExpLicUpdateChecksum @ 0x1400077F0
 * Callers:
 *     ExpTimeRefreshWork @ 0x14056F0E0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1405A2820 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x1408CFC00 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x1408CFE10 (ExSetLicenseTamperState.c)
 *     sub_1408D0760 @ 0x1408D0760 (sub_1408D0760.c)
 *     sub_1408D08D0 @ 0x1408D08D0 (sub_1408D08D0.c)
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
