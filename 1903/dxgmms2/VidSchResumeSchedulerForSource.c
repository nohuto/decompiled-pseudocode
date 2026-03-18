/*
 * XREFs of VidSchResumeSchedulerForSource @ 0x1C00CC320
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiResumeFlipQueues @ 0x1C00CA258 (VidSchiResumeFlipQueues.c)
 */

void __fastcall VidSchResumeSchedulerForSource(__int64 a1, int a2)
{
  if ( a2 )
    VidSchiResumeFlipQueues(a1, a2);
}
