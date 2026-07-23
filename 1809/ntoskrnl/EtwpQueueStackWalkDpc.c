/*
 * XREFs of EtwpQueueStackWalkDpc @ 0x14030F62C
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x14030F450 (EtwpQueueStackWalkApc.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D78F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F9890 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

__int64 __fastcall EtwpQueueStackWalkDpc(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int Number; // r8d

  if ( _interlockedbittestandset((volatile signed __int32 *)a2 + 239, 1u) )
    return 259LL;
  if ( !ExAcquireRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 135) + 448LL) + 8LL * *a2),
          1u) )
    return 3221225473LL;
  *((_QWORD *)a2 + 106) = *a3;
  *((_QWORD *)a2 + 107) = a1;
  Number = KeGetCurrentPrcb()->Number;
  if ( !*((_QWORD *)a2 + 115) )
    *((_WORD *)a2 + 433) = Number + 1280;
  if ( KeInsertQueueDpc((PRKDPC)(a2 + 216), a2, 0LL) )
    return 0LL;
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 135) + 448LL) + 8LL * *a2),
    1u);
  return 3221225626LL;
}
