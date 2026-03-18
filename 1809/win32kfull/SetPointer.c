/*
 * XREFs of SetPointer @ 0x1C00BD490
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     SetMouseTrails @ 0x1C00BD258 (SetMouseTrails.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00BD2C0 (zzzEnableDwmPointerSupport.c)
 *     UserResetPointer @ 0x1C00BD440 (UserResetPointer.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     xxxRemoteReconnect @ 0x1C01577E0 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0159020 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01B871C (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C01FBA10 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01FBBB0 (RemoteShadowStart.c)
 * Callees:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0017C5C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     GreSetPointer @ 0x1C0018BB8 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0018F24 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00BD5C8 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01B84F0 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall SetPointer(int a1)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  struct tagCURSOR *CurrentCursorFrame; // rax
  struct tagCURSOR *v4; // rcx
  struct tagCURSOR *v5; // rax
  unsigned int v6; // edx
  struct _CURSINFO *v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // rax
  struct tagTHREADINFO *v10; // rdx

  if ( !a1 )
  {
    v1 = 0;
    v2 = 1;
    if ( gbForceSoftwareCursor == 1 )
      v1 = 32;
    LOBYTE(CurrentCursorFrame) = GreSetPointer(0LL, v1, 0, 0);
LABEL_5:
    if ( v2 )
      LOBYTE(CurrentCursorFrame) = NotifySetPointerGraphicDevice(v2);
    return (char)CurrentCursorFrame;
  }
  if ( !gpqForeground
    || ((v9 = *(_QWORD *)(gpqForeground + 104LL)) != 0
      ? (v10 = *(struct tagTHREADINFO **)(v9 + 16))
      : (v10 = *(struct tagTHREADINFO **)(gpqForeground + 88LL)),
        *(int *)(gpqForeground + 384LL) >= 0
     || (LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v10), !(_BYTE)CurrentCursorFrame)) )
  {
    CurrentCursorFrame = (struct tagCURSOR *)-gpqCursor;
    v2 = gpqCursor == 0LL ? 3 : 0;
    if ( gpqCursor )
    {
      if ( *(int *)(gpqCursor + 384LL) >= 0 )
      {
        v4 = *(struct tagCURSOR **)(gpqCursor + 376LL);
        if ( v4 )
        {
          LOBYTE(CurrentCursorFrame) = gpsi;
          if ( *(_DWORD *)(gpsi + 1972LL) )
          {
            v5 = FixupCursorForMonitor(v4);
            CurrentCursorFrame = GetCurrentCursorFrame(v5);
            if ( CurrentCursorFrame )
            {
              v6 = (unsigned int)FCursorShadowed((struct tagCURSOR *)((char *)CurrentCursorFrame + 80)) != 0 ? 0x10 : 0;
              if ( gbForceSoftwareCursor == 1 )
                v6 |= 0x20u;
              v8 = gMouseTrails;
              if ( gProtocolType )
                v8 = 0;
              LOBYTE(CurrentCursorFrame) = GreSetPointer(v7, v6, v8, 0x32u);
              v2 = 2;
            }
          }
        }
      }
    }
    goto LABEL_5;
  }
  return (char)CurrentCursorFrame;
}
