/*
 * XREFs of PpmInitPolicyConfiguration @ 0x1409D7234
 * Callers:
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 *     qsort @ 0x1401962E0 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x1406D0D9C (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x140756E1C (PpmEnableProfile.c)
 */

void PpmInitPolicyConfiguration()
{
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD *v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v0 = (char *)&unk_140540A50;
  v1 = 52LL;
  do
  {
    v2 = 1LL << v0[4];
    if ( (v0[5] & 4) != 0 )
      *(_DWORD *)v0 >>= 1;
    v3 = &unk_14040E7E8;
    do
    {
      *v3 |= v2;
      v3 += 341;
    }
    while ( (__int64)v3 < (__int64)qword_14040FD38 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_14040FD50 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_14040E7CC = (__int128)NullGuid;
  dword_14040E7DC = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile, (__int64)v0);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x34uLL, 0x28uLL, (int (__cdecl *)(const void *, const void *))PpmInfoConfigComparer);
  PpmReleaseLock(&PpmPerfPolicyLock);
}
