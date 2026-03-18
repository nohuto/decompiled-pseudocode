/*
 * XREFs of xxxSendNotifyMessage @ 0x1C00D14F0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     NtUserNavigateFocus @ 0x1C00055F0 (NtUserNavigateFocus.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     xxxDWP_UpdateUIState @ 0x1C00ABB00 (xxxDWP_UpdateUIState.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C00B0288 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B4ADC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00CE3B4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CFCF4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00D1440 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00DC2C8 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00DF170 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxFullScreenCleanup @ 0x1C011A6E0 (xxxFullScreenCleanup.c)
 *     xxxSetDeskWallpaper @ 0x1C012E4C4 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C012E638 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     _NotifyOverlayWindow @ 0x1C01C7430 (_NotifyOverlayWindow.c)
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0209B64 (xxxBroadcastPaletteChanged.c)
 *     xxxSendMenuSelect @ 0x1C0233710 (xxxSendMenuSelect.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00CC948 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageCallback @ 0x1C00D1744 (xxxSendMessageCallback.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0133194 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxSendNotifyMessage(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        struct _LARGE_STRING *a4,
        int a5)
{
  char v8; // di
  __int64 v9; // rdx
  _BYTE v10[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  _QWORD v12[4]; // [rsp+60h] [rbp-28h] BYREF

  if ( a1 != (struct tagWND *)-1LL )
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  v8 = 0;
  if ( a2 < 0x1A )
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  if ( a2 > 0x1B )
  {
    if ( a2 == 42 )
      goto LABEL_10;
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  }
  if ( a4 )
  {
    if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)v10, a4) )
      return 0LL;
    PushW32ThreadLock(v11, v12, (__int64)Win32FreePool);
    v8 = 1;
  }
LABEL_10:
  xxxSystemBroadcastMessage(a2, a3);
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v12, v9);
  return 1LL;
}
