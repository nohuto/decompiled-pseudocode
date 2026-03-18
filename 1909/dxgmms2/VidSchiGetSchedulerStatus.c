/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C0014F48
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C00889EC (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00CAE30 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 296);
}
