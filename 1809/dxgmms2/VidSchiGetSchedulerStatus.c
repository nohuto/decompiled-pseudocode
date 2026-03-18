/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C0015B84
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C0083DE8 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00C80E0 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 296);
}
