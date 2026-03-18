/*
 * XREFs of RtlQueryPackageIdentity @ 0x140084310
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     PfSnCheckModernApp @ 0x1406198E8 (PfSnCheckModernApp.c)
 *     EtwpQueryTokenPackageInfo @ 0x140690FC0 (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069331C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspIdentityBasedJobBreakaway @ 0x1408C72A0 (PspIdentityBasedJobBreakaway.c)
 *     EtwpApplyPackageIdFilter @ 0x1408FEE9C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140084370 (RtlQueryPackageClaims.c)
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
