/*
 * XREFs of ?CanHitTestInDwm@@YA_NXZ @ 0x1C006E870
 * Callers:
 *     xxxSpeedHitTest @ 0x1C006E608 (xxxSpeedHitTest.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01EE124 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 *     xxxPointerSpeedHitTest @ 0x1C01F0534 (xxxPointerSpeedHitTest.c)
 *     xxxTouchTargetWindow @ 0x1C01F0D9C (xxxTouchTargetWindow.c)
 * Callees:
 *     <none>
 */

char CanHitTestInDwm(void)
{
  char v0; // cl

  if ( gbNoMoreDITHitTest )
    return 0;
  if ( !(unsigned __int8)IsInputThread() )
    return 0;
  if ( !(unsigned __int8)IsInputProcessingActivated() )
    return 0;
  v0 = 1;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
    return 0;
  return v0;
}
