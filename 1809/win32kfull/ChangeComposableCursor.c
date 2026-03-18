/*
 * XREFs of ChangeComposableCursor @ 0x1C01B871C
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxDwmStopRedirection @ 0x1C00C6C60 (xxxDwmStopRedirection.c)
 *     MagContextThreadCallout @ 0x1C01BC190 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01BCC24 (MagSetLensContextInformation.c)
 *     xxxCancelTrackingForThread @ 0x1C01EAB00 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x1C0213930 (NtUserEnableSoftwareCursorForScreenCapture.c)
 * Callees:
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 */

char __fastcall ChangeComposableCursor(int a1)
{
  char result; // al
  int v2; // ebx

  result = gSoftwareCursorCount;
  v2 = gSoftwareCursorCount + (a1 != 0 ? 1 : -1);
  if ( gSoftwareCursorCount )
  {
    if ( gSoftwareCursorCount == 1 && !a1 )
    {
      SetPointer(0);
      gbForceSoftwareCursor = 0;
      goto LABEL_7;
    }
  }
  else if ( a1 )
  {
    SetPointer(0);
    gbForceSoftwareCursor = 1;
LABEL_7:
    result = SetPointer(1);
  }
  gSoftwareCursorCount = v2;
  return result;
}
