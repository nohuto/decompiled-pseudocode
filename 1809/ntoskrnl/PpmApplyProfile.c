/*
 * XREFs of PpmApplyProfile @ 0x14087B730
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x14086FF30 (PdcPoPpmApplyProfile.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140876994 (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x140879CD4 (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x14087B9A4 (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x14087BA08 (PpmPostProcessMediaBuffering.c)
 */

void __fastcall PpmApplyProfile(__int64 *a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v2 = dword_14041918C;
  v3 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v4 = PpmCurrentProfile;
  v5 = PpmDefaultProfile;
  if ( a1 )
    v5 = a1;
  if ( v5 == (__int64 *)PpmLowPowerProfile )
  {
    v6 = v5;
    v5 = PpmDefaultProfile;
    if ( !PpmPerfMultimediaQosSupported )
      v5 = v6;
  }
  if ( PpmCurrentProfile == v5 )
  {
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
  else
  {
    v7 = PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008]);
    v9 = 2LL;
    *((_DWORD *)v5 + 7) |= 2u;
    *((_DWORD *)v4 + 7) &= ~2u;
    PpmCurrentProfile = v5;
    v10 = 0LL;
    v5[687] = v7;
    do
    {
      if ( v5 != v8 )
        v3 |= v5[341 * v2 + 5 + v10];
      if ( v4 != v8 )
        v3 |= v4[341 * v2 + 5 + v10];
      ++v10;
      --v9;
    }
    while ( v9 );
    v11 = v3 & 0xCFFBFD8030FC0LL;
    PpmCompareAndApplyPolicySettings(&v11, (__int64)&v4[341 * v2 + 5], (__int64)&v5[341 * v2 + 5]);
    PpmEventTraceProfileChange((__int64)v4, (__int64)v5);
    if ( PpmLowPowerProfile )
    {
      if ( v4 == (__int64 *)PpmLowPowerProfile )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        PpmPostProcessMediaBuffering();
      }
    }
  }
}
