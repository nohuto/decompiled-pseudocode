/*
 * XREFs of PpmProfileAcDcUpdate @ 0x1408B684C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408B1D10 (PpmCompareAndApplyPolicySettings.c)
 */

LONG PpmProfileAcDcUpdate()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140443A2C;
  v1 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 2LL;
  v3 = PpmCurrentProfile + 5;
  do
  {
    v4 = *v3 | v3[341];
    ++v3;
    v1 |= v4;
    --v2;
  }
  while ( v2 );
  v6 = v1 & 0xCFFBFD8030FC0LL;
  return PpmCompareAndApplyPolicySettings(
           &v6,
           (__int64)PpmCurrentProfile + (-(__int64)((_DWORD)v0 != 0) & 0xFFFFFFFFFFFFF558uLL) + 2768,
           (__int64)&PpmCurrentProfile[341 * v0 + 5]);
}
