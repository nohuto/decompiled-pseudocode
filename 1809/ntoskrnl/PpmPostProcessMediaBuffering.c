/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x14087A7C8
 * Callers:
 *     PpmApplyProfile @ 0x14087A4F0 (PpmApplyProfile.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1400A5EA8 (PopExecuteOnTargetProcessors.c)
 *     PoCopyDeepIdleMask @ 0x1400DC850 (PoCopyDeepIdleMask.c)
 *     KeSubtractAffinityEx @ 0x1400ED820 (KeSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     PpmCheckApplyResetNotification @ 0x1402E2D70 (PpmCheckApplyResetNotification.c)
 */

__int64 PpmPostProcessMediaBuffering()
{
  __int64 result; // rax
  unsigned __int16 v1[88]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v2[176]; // [rsp+D0h] [rbp-C8h] BYREF

  result = PpmCheckApplyResetNotification();
  if ( PpmPlatformStates )
  {
    PoCopyDeepIdleMask(v1);
    result = KeSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, v1, v2);
    if ( (_DWORD)result )
      return PopExecuteOnTargetProcessors((__int64)v2, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
  return result;
}
