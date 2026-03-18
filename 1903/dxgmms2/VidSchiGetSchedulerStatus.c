/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C0014F58
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C008762C (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00CB190 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 296);
}
