/*
 * XREFs of HvlpQueryHypervisorSchedulerType @ 0x1401BE9C0
 * Callers:
 *     HvlPhase2Initialize @ 0x14019DD6C (HvlPhase2Initialize.c)
 *     HvlpDetermineEnlightenments @ 0x14028CCE8 (HvlpDetermineEnlightenments.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x140343A90 (HvcallInitiateHypercall.c)
 */

__int64 HvlpQueryHypervisorSchedulerType()
{
  unsigned int v0; // edi
  _DWORD *v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int *v5; // rsi
  _QWORD v7[4]; // [rsp+20h] [rbp-878h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-858h] BYREF
  _BYTE v9[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v10[2064]; // [rsp+70h] [rbp-828h] BYREF

  memset(v8, 0, sizeof(v8));
  memset(v7, 0, sizeof(v7));
  v0 = 0;
  v1 = (_DWORD *)HvlpAcquireHypercallPage(v8, 1LL, v9, 8LL);
  v2 = HvlpAcquireHypercallPage(v7, 2LL, v10, 1032LL);
  v3 = v7[3];
  v4 = v8[3];
  v5 = (unsigned int *)v2;
  *v1 = 15;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123LL, v4, v3) )
    v0 = *v5;
  HvlpReleaseHypercallPage(v7);
  HvlpReleaseHypercallPage(v8);
  return v0;
}
