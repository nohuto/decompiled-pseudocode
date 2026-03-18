/*
 * XREFs of EtwpQueueStackWalkDpc @ 0x14032D0DC
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x14032CF00 (EtwpQueueStackWalkApc.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 */

__int64 __fastcall EtwpQueueStackWalkDpc(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int Number; // r8d

  if ( _interlockedbittestandset((volatile signed __int32 *)a2 + 239, 1u) )
    return 259LL;
  if ( !ExAcquireRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 139) + 448LL) + 8LL * *a2),
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
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 139) + 448LL) + 8LL * *a2),
    1u);
  return 3221225626LL;
}
