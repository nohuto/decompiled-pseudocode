/*
 * XREFs of SetPointer @ 0x1C00C09D0
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C000A9EC (zzzEnableDwmPointerSupport.c)
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     SetMouseTrails @ 0x1C00BFDA4 (SetMouseTrails.c)
 *     UserResetPointer @ 0x1C00BFE90 (UserResetPointer.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     xxxRemoteReconnect @ 0x1C0137320 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0138980 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01976E4 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C01D6D50 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01D6EC0 (RemoteShadowStart.c)
 * Callees:
 *     FixupCursorForMonitor @ 0x1C001E29C (FixupCursorForMonitor.c)
 *     GreSetPointer @ 0x1C0020CE4 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0021038 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00C0B10 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0139DB8 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall SetPointer(int a1)
{
  __int64 v1; // rax
  struct tagTHREADINFO *v2; // rdx
  struct tagCURSOR *CurrentCursorFrame; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  struct tagCURSOR *v6; // rax
  __int64 v7; // rdx
  struct _CURSINFO *v8; // rcx
  unsigned int v9; // r8d
  __int64 v10; // rdx

  if ( !a1 )
  {
    v10 = 0LL;
    v4 = 1;
    if ( gbForceSoftwareCursor == 1 )
      v10 = 32LL;
    LOBYTE(CurrentCursorFrame) = GreSetPointer(0LL, v10, 0, 0);
    goto LABEL_21;
  }
  if ( !gpqForeground
    || ((v1 = *(_QWORD *)(gpqForeground + 104LL)) == 0
      ? (v2 = *(struct tagTHREADINFO **)(gpqForeground + 88LL))
      : (v2 = *(struct tagTHREADINFO **)(v1 + 16)),
        *(int *)(gpqForeground + 384LL) >= 0
     || (LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v2), !(_BYTE)CurrentCursorFrame)) )
  {
    CurrentCursorFrame = (struct tagCURSOR *)-gpqCursor;
    v4 = gpqCursor == 0LL ? 3 : 0;
    if ( gpqCursor )
    {
      if ( *(int *)(gpqCursor + 384LL) >= 0 )
      {
        v5 = *(_QWORD *)(gpqCursor + 376LL);
        if ( v5 )
        {
          LOBYTE(CurrentCursorFrame) = gpsi;
          if ( *(_DWORD *)(gpsi + 1972LL) )
          {
            v6 = (struct tagCURSOR *)FixupCursorForMonitor(v5);
            CurrentCursorFrame = GetCurrentCursorFrame(v6);
            if ( CurrentCursorFrame )
            {
              v7 = (unsigned int)FCursorShadowed((struct tagCURSOR *)((char *)CurrentCursorFrame + 80)) != 0 ? 0x10 : 0;
              if ( gbForceSoftwareCursor == 1 )
                v7 = (unsigned int)v7 | 0x20;
              v9 = gMouseTrails;
              if ( gProtocolType )
                v9 = 0;
              LOBYTE(CurrentCursorFrame) = GreSetPointer(v8, v7, v9, 0x32u);
              v4 = 2;
            }
          }
        }
      }
    }
LABEL_21:
    if ( v4 )
      LOBYTE(CurrentCursorFrame) = NotifySetPointerGraphicDevice(v4);
  }
  return (char)CurrentCursorFrame;
}
