/*
 * XREFs of xxxSendNotifyMessage @ 0x1C001CE70
 * Callers:
 *     NtUserNavigateFocus @ 0x1C00096B0 (NtUserNavigateFocus.c)
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0011998 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0013EE4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C001BA9C (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C001CDA0 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008712C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00915B4 (xxxDWP_UpdateUIState.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxFullScreenCleanup @ 0x1C0123E60 (xxxFullScreenCleanup.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0125940 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C013A660 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C013A7D8 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     _NotifyOverlayWindow @ 0x1C01DA7F0 (_NotifyOverlayWindow.c)
 *     xxxNextWindow @ 0x1C01F5198 (xxxNextWindow.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     xxxBroadcastPaletteChanged @ 0x1C02215D8 (xxxBroadcastPaletteChanged.c)
 *     xxxSendMenuSelect @ 0x1C024C394 (xxxSendMenuSelect.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00839E4 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C013D248 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxSendNotifyMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        int a5)
{
  struct _LARGE_STRING *v5; // r10
  char v9; // di
  __int64 v10; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  _QWORD v12[4]; // [rsp+60h] [rbp-28h] BYREF

  v5 = a4;
  if ( a1 != (struct tagWND *)-1LL )
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  v9 = 0;
  memset(v12, 0, 24);
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 < 0x1A )
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  if ( a2 > 0x1B )
  {
    if ( a2 == 42 )
      goto LABEL_8;
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  }
  if ( a4 )
  {
    if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v10, a4) )
      return 0LL;
    PushW32ThreadLock(v11, v12, Win32FreePool);
    v5 = (struct _LARGE_STRING *)&v10;
    v9 = 1;
  }
LABEL_8:
  xxxSystemBroadcastMessage(a2, a3, (__int64)v5, 1u, 0LL, a5, 0);
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock(v12);
  return 1LL;
}
