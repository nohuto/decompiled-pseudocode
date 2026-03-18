/*
 * XREFs of PpmInfoReleaseLocks @ 0x1406A1B3C
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1406A0B54 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    PpmReleaseLock(&PpmPerfPolicyLock);
  else
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
