/*
 * XREFs of ValidateHwndIAM @ 0x1C011CA10
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0071C20 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetBridgeWindowChild @ 0x1C021BFE0 (NtUserSetBridgeWindowChild.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ValidateHwndIAM()
{
  _BYTE *v0; // r8
  __int64 v1; // r9

  if ( IAMThreadAccessGranted(gptiCurrent) )
    *v0 = 0;
  return ValidateHwnd(v1);
}
