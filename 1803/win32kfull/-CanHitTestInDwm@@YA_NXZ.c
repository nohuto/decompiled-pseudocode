/*
 * XREFs of ?CanHitTestInDwm@@YA_NXZ @ 0x1C00741A0
 * Callers:
 *     xxxSpeedHitTest @ 0x1C0074020 (xxxSpeedHitTest.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01C9E20 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 *     xxxPointerSpeedHitTest @ 0x1C01CC154 (xxxPointerSpeedHitTest.c)
 *     xxxTouchTargetWindow @ 0x1C01CC944 (xxxTouchTargetWindow.c)
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
  if ( (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
    return 0;
  return v0;
}
