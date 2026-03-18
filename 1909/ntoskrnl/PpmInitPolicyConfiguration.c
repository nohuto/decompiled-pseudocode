/*
 * XREFs of PpmInitPolicyConfiguration @ 0x140A1A484
 * Callers:
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x1406F1E48 (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x14077FF38 (PpmEnableProfile.c)
 */

LONG PpmInitPolicyConfiguration()
{
  char *v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  _QWORD *v3; // rcx

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v0 = (char *)&unk_140571B20;
  v1 = 52LL;
  do
  {
    v2 = 1LL << v0[4];
    if ( (v0[5] & 4) != 0 )
      *(_DWORD *)v0 >>= 1;
    v3 = &unk_140437088;
    do
    {
      *v3 |= v2;
      v3 += 341;
    }
    while ( (__int64)v3 < (__int64)qword_1404385D8 );
    v0 += 40;
    --v1;
  }
  while ( v1 );
  qword_1404385F0 = -1LL;
  PpmDefaultProfile[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_14043706C = (__int128)NullGuid;
  dword_14043707C = 2;
  PpmEnableProfile((__int64)PpmDefaultProfile, (__int64)v0);
  PpmBeginProfileAccumulation((__int64)PpmDefaultProfile, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x34uLL, 0x28uLL, (int (__cdecl *)(const void *, const void *))PpmInfoConfigComparer);
  return PpmReleaseLock(&PpmPerfPolicyLock);
}
