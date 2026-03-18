/*
 * XREFs of VidSchResumeAdapter @ 0x1C007CF00
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00CB190 (VidSchFlushAdapter.c)
 * Callees:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x1C00109BC (VidSchiSuspendResumeDevicesForPowerTransition.c)
 */

__int64 __fastcall VidSchResumeAdapter(__int64 a1, char a2)
{
  PsIsSystemThread(KeGetCurrentThread());
  if ( !a2 )
    VidSchiSuspendResumeDevicesForPowerTransition(a1, 0);
  return 0LL;
}
