/*
 * XREFs of ChangeComposableCursor @ 0x1C01CC3EC
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxDwmStopRedirection @ 0x1C015F2D0 (xxxDwmStopRedirection.c)
 *     MagContextThreadCallout @ 0x1C01CFC40 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01D06EC (MagSetLensContextInformation.c)
 *     xxxCancelTrackingForThread @ 0x1C02005C0 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x1C022B1A0 (NtUserEnableSoftwareCursorForScreenCapture.c)
 * Callees:
 *     SetPointer @ 0x1C0138BE0 (SetPointer.c)
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
