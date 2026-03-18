/*
 * XREFs of ValidateHwndIAM @ 0x1C00FE740
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006AB10 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetBridgeWindowChild @ 0x1C0233B30 (NtUserSetBridgeWindowChild.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ValidateHwndIAM()
{
  __int64 v0; // r8

  if ( IAMThreadAccessGranted(gptiCurrent) )
    gbValidateHandleForIL = 0;
  return ValidateHwnd(v0);
}
