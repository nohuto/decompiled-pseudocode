/*
 * XREFs of RtlQueryPackageIdentity @ 0x1400A5010
 * Callers:
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     PfSnCheckModernApp @ 0x140667720 (PfSnCheckModernApp.c)
 *     EtwpQueryTokenPackageInfo @ 0x14066CD6C (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069F4EC (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspIdentityBasedJobBreakaway @ 0x140889380 (PspIdentityBasedJobBreakaway.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C1CDC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1400A5570 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  __int64 result; // rax

  result = RtlQueryPackageClaims(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = 0;
  }
  return result;
}
