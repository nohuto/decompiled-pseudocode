/*
 * XREFs of RtlQueryPackageIdentity @ 0x140084710
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     PfSnCheckModernApp @ 0x14061B3F8 (PfSnCheckModernApp.c)
 *     EtwpQueryTokenPackageInfo @ 0x140684530 (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14068688C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspIdentityBasedJobBreakaway @ 0x1408C6B80 (PspIdentityBasedJobBreakaway.c)
 *     EtwpApplyPackageIdFilter @ 0x1408FE7F0 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140084770 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, bool *a6)
{
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  v7[0] = 0LL;
  result = RtlQueryPackageClaims(a1, a2, a3, a4, a5, 0LL, v7, 0LL);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = LOWORD(v7[0]) != 0LL;
  }
  return result;
}
