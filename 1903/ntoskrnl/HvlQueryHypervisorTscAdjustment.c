/*
 * XREFs of HvlQueryHypervisorTscAdjustment @ 0x14015DF64
 * Callers:
 *     PopDiagComputeEarlyHiberStats @ 0x140596040 (PopDiagComputeEarlyHiberStats.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlQueryHypervisorTscAdjustment()
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  __int64 *v3; // rsi
  _QWORD v4[4]; // [rsp+20h] [rbp-878h] BYREF
  _QWORD v5[4]; // [rsp+40h] [rbp-858h] BYREF
  _BYTE v6[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v7[2064]; // [rsp+70h] [rbp-828h] BYREF

  memset(v5, 0, sizeof(v5));
  memset(v4, 0, sizeof(v4));
  if ( (HvlpRootFlags & 1) == 0 )
    return 0LL;
  v1 = 0LL;
  v2 = (_DWORD *)HvlpAcquireHypercallPage(v5, 1LL, v6, 8LL);
  v3 = (__int64 *)HvlpAcquireHypercallPage(v4, 2LL, v7, 1032LL);
  *v2 = 9;
  if ( !(unsigned __int16)HvcallCodeVa() )
    v1 = *v3;
  HvlpReleaseHypercallPage(v4);
  HvlpReleaseHypercallPage(v5);
  return v1;
}
