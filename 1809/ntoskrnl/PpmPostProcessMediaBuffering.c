/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x14087BA08
 * Callers:
 *     PpmApplyProfile @ 0x14087B730 (PpmApplyProfile.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1400A5E08 (PopExecuteOnTargetProcessors.c)
 *     PoCopyDeepIdleMask @ 0x1400DC8F0 (PoCopyDeepIdleMask.c)
 *     KeSubtractAffinityEx @ 0x1400ED8C0 (KeSubtractAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PpmCheckApplyResetNotification @ 0x1402E3060 (PpmCheckApplyResetNotification.c)
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
