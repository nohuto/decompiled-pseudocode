/*
 * XREFs of ExpLicUpdateChecksum @ 0x1400FA64C
 * Callers:
 *     ExpTimeRefreshWork @ 0x14059D9F0 (ExpTimeRefreshWork.c)
 *     ExUpdateLicenseDataInternal @ 0x1406ABBE0 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x1406AC990 (ExpGenuinePolicyCacheProvider.c)
 *     ExGetLicenseTamperState @ 0x14090BF20 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x14090C160 (ExSetLicenseTamperState.c)
 *     sub_14090CC10 @ 0x14090CC10 (sub_14090CC10.c)
 *     sub_14090CDA0 @ 0x14090CDA0 (sub_14090CDA0.c)
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
