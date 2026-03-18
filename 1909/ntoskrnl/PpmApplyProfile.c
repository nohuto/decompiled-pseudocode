/*
 * XREFs of PpmApplyProfile @ 0x1408B6354
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x1408AB080 (PdcPoPpmApplyProfile.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408B1D10 (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x1408B55CC (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x1408B65C8 (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x1408B662C (PpmPostProcessMediaBuffering.c)
 */

LONG __fastcall PpmApplyProfile(__int64 *a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 *v6; // rax
  LONG result; // eax
  __int64 v8; // rax
  __int64 *v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = dword_140443A2C;
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
    return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  else
  {
    v8 = PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008]);
    v10 = 2LL;
    *((_DWORD *)v5 + 7) |= 2u;
    *((_DWORD *)v4 + 7) &= ~2u;
    PpmCurrentProfile = v5;
    v11 = 0LL;
    v5[687] = v8;
    do
    {
      if ( v5 != v9 )
        v3 |= v5[341 * v2 + 5 + v11];
      if ( v4 != v9 )
        v3 |= v4[341 * v2 + 5 + v11];
      ++v11;
      --v10;
    }
    while ( v10 );
    v12 = v3 & 0xCFFBFD8030FC0LL;
    PpmCompareAndApplyPolicySettings(&v12, (__int64)&v4[341 * v2 + 5], (__int64)&v5[341 * v2 + 5]);
    PpmEventTraceProfileChange((__int64)v4, (__int64)v5);
    result = PpmLowPowerProfile;
    if ( PpmLowPowerProfile )
    {
      if ( v4 == (__int64 *)PpmLowPowerProfile )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        return PpmPostProcessMediaBuffering();
      }
    }
  }
  return result;
}
