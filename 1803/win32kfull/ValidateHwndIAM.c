/*
 * XREFs of ValidateHwndIAM @ 0x1C007039C
 * Callers:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0034C84 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01F4880 (NtUserSetBridgeWindowChild.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ValidateHwndIAM()
{
  _BYTE *v0; // r8
  __int64 v1; // r9

  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    *v0 = 0;
  return ValidateHwnd(v1);
}
