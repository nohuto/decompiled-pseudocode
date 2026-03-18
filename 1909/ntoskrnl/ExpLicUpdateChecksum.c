/*
 * XREFs of ExpLicUpdateChecksum @ 0x1400F2CBC
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9D0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1406A3340 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x14090B980 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x14090BBC0 (ExSetLicenseTamperState.c)
 *     sub_14090C670 @ 0x14090C670 (sub_14090C670.c)
 *     sub_14090C800 @ 0x14090C800 (sub_14090C800.c)
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
