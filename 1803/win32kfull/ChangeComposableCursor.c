/*
 * XREFs of ChangeComposableCursor @ 0x1C01976E4
 * Callers:
 *     xxxDwmStopRedirection @ 0x1C0008660 (xxxDwmStopRedirection.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C019B120 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C019BB40 (MagSetLensContextInformation.c)
 *     xxxCancelTrackingForThread @ 0x1C01C5F20 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01ED540 (NtUserEnableSoftwareCursorForScreenCapture.c)
 * Callees:
 *     SetPointer @ 0x1C00C09D0 (SetPointer.c)
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
