/*
 * XREFs of PpmPostProcessMediaBuffering @ 0x1408B6D5C
 * Callers:
 *     PpmApplyProfile @ 0x1408B6A84 (PpmApplyProfile.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x1400B9068 (PopExecuteOnTargetProcessors.c)
 *     KeSubtractAffinityEx @ 0x1400BEDF0 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1400F8FD0 (PoCopyDeepIdleMask.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PpmCheckApplyResetNotification @ 0x1402FFB78 (PpmCheckApplyResetNotification.c)
 */

__int64 PpmPostProcessMediaBuffering()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 result; // rax
  unsigned __int16 v4[88]; // [rsp+20h] [rbp-178h] BYREF
  _BYTE v5[176]; // [rsp+D0h] [rbp-C8h] BYREF

  memset(v5, 0, 0xA8uLL);
  memset(v4, 0, 0xA8uLL);
  result = PpmCheckApplyResetNotification(v1, v0, v2);
  if ( PpmPlatformStates )
  {
    PoCopyDeepIdleMask(v4);
    result = KeSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, v4, v5);
    if ( (_DWORD)result )
      return PopExecuteOnTargetProcessors((__int64)v5, (__int64)PpmResetInterruptRate, 0LL, 0LL);
  }
  return result;
}
