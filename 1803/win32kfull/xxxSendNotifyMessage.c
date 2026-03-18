/*
 * XREFs of xxxSendNotifyMessage @ 0x1C0060D20
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005B60 (xxxSetModernAppWindow.c)
 *     NtUserNavigateFocus @ 0x1C00061C0 (NtUserNavigateFocus.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSendFocusMessages @ 0x1C005EBC0 (xxxSendFocusMessages.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00603A0 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C0060914 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C0061534 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00B5B4C (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00B5D90 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C32A4 (xxxDWP_UpdateUIState.c)
 *     xxxFullScreenCleanup @ 0x1C00FC3E0 (xxxFullScreenCleanup.c)
 *     xxxSetDeskWallpaper @ 0x1C010CF94 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C010D0D8 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     _NotifyOverlayWindow @ 0x1C01A5250 (_NotifyOverlayWindow.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     xxxBroadcastPaletteChanged @ 0x1C01E3C9C (xxxBroadcastPaletteChanged.c)
 *     xxxSendMenuSelect @ 0x1C020A438 (xxxSendMenuSelect.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxSendMessageCallback @ 0x1C0060F68 (xxxSendMessageCallback.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C006357C (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C010F414 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
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
  _BYTE v10[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  _QWORD v12[4]; // [rsp+60h] [rbp-28h] BYREF

  v5 = a4;
  if ( a1 != (struct tagWND *)-1LL )
    return xxxSendMessageCallback(a1, a2, a3, (__int64)a4, 0LL, 0LL, 0, a5, 0);
  v9 = 0;
  if ( a2 < 0x1A )
    return xxxSendMessageCallback(a1, a2, a3, (__int64)a4, 0LL, 0LL, 0, a5, 0);
  if ( a2 > 0x1B )
  {
    if ( a2 == 42 )
      goto LABEL_8;
    return xxxSendMessageCallback(a1, a2, a3, (__int64)a4, 0LL, 0LL, 0, a5, 0);
  }
  if ( a4 )
  {
    if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)v10, a4) )
      return 0LL;
    PushW32ThreadLock(v11, v12, (__int64)Win32FreePool);
    v5 = (struct _LARGE_STRING *)v10;
    v9 = 1;
  }
LABEL_8:
  xxxSystemBroadcastMessage(a2, a3, (__int64)v5, 1u, 0LL, a5, 0);
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v12);
  return 1LL;
}
