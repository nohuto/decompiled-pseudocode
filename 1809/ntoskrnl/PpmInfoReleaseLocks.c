/*
 * XREFs of PpmInfoReleaseLocks @ 0x14058BB8C
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14058ABB4 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
