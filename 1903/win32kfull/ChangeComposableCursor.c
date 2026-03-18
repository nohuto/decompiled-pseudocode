/*
 * XREFs of ChangeComposableCursor @ 0x1C01CC57C
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxDwmStopRedirection @ 0x1C015E1B0 (xxxDwmStopRedirection.c)
 *     MagContextThreadCallout @ 0x1C01CFDD0 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01D087C (MagSetLensContextInformation.c)
 *     xxxCancelTrackingForThread @ 0x1C0200870 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x1C022B7C0 (NtUserEnableSoftwareCursorForScreenCapture.c)
 * Callees:
 *     SetPointer @ 0x1C0082DE0 (SetPointer.c)
 */

__int64 __fastcall ChangeComposableCursor(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx

  result = (unsigned int)gSoftwareCursorCount;
  v2 = gSoftwareCursorCount + ((_DWORD)a1 != 0 ? 1 : -1);
  if ( gSoftwareCursorCount )
  {
    if ( gSoftwareCursorCount == 1 && !(_DWORD)a1 )
    {
      SetPointer(a1);
      HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
      goto LABEL_7;
    }
  }
  else if ( (_DWORD)a1 )
  {
    SetPointer(0LL);
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 1;
LABEL_7:
    result = SetPointer(1LL);
  }
  gSoftwareCursorCount = v2;
  return result;
}
