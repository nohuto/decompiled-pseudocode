/*
 * XREFs of VidSchResumeSchedulerForSource @ 0x1C00C93D0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiResumeFlipQueues @ 0x1C00C71E0 (VidSchiResumeFlipQueues.c)
 */

void __fastcall VidSchResumeSchedulerForSource(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (_DWORD)a2 )
    VidSchiResumeFlipQueues(a1, a2, a3);
}
