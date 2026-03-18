/*
 * XREFs of VidSchResumeAdapter @ 0x1C00828F0
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00CAE30 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C001077C (VidSchiSuspendResumeDevicesForPowerTransition.c)
 */

__int64 __fastcall VidSchResumeAdapter(__int64 a1, char a2)
{
  PsIsSystemThread(KeGetCurrentThread());
  if ( !a2 )
    VidSchiSuspendResumeDevicesForPowerTransition(a1, 0);
  return 0LL;
}
