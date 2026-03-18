/*
 * XREFs of HvlGetCoverageInfo @ 0x140284A6C
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x14091495C (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

char __fastcall HvlGetCoverageInfo(_OWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  char v7; // bp
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  _QWORD v11[4]; // [rsp+20h] [rbp-918h] BYREF
  _QWORD v12[4]; // [rsp+40h] [rbp-8F8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-8D8h] BYREF
  _BYTE v14[2064]; // [rsp+F0h] [rbp-848h] BYREF

  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  v7 = 0;
  v8 = (_QWORD *)HvlpAcquireHypercallPage(v12, 1LL, v14, 1032LL);
  v9 = HvlpAcquireHypercallPage(v11, 2LL, v13, 72LL);
  *v8 = 0LL;
  if ( !(unsigned __int16)HvcallCodeVa() )
  {
    v7 = 1;
    *a1 = *(_OWORD *)(v9 + 8);
    a1[1] = *(_OWORD *)(v9 + 24);
    a1[2] = *(_OWORD *)(v9 + 40);
    a1[3] = *(_OWORD *)(v9 + 56);
    *a4 = *(_DWORD *)(v9 + 4);
    *a3 = *(_DWORD *)v9;
  }
  HvlpReleaseHypercallPage(v11);
  HvlpReleaseHypercallPage(v12);
  return v7;
}
