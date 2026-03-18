/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50
 * Callers:
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0009DA4 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     NtUserQueryInformationThread @ 0x1C000D2D0 (NtUserQueryInformationThread.c)
 *     xxxBroadcastMessageEx @ 0x1C001C9D0 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     NtUserGetClassInfoEx @ 0x1C001E9B0 (NtUserGetClassInfoEx.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001F240 (EditionHandleAndPostKeyEvent.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0076C54 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     NtUserCreateWindowEx @ 0x1C0094570 (NtUserCreateWindowEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C00962A0 (NtUserRegisterClassExWOW.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     SfnINSTRINGNULL @ 0x1C00AF910 (SfnINSTRINGNULL.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00B0A90 (SfnGETDBCSTEXTLENGTHS.c)
 *     ClientLoadLibrary @ 0x1C00B1B60 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C00B1DA0 (SfnINLPCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C00B2DC0 (SfnINDEVICECHANGE.c)
 *     xxxClientAddFontResourceW @ 0x1C00B4708 (xxxClientAddFontResourceW.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00B4984 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C00B4E80 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C00B5A14 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C00B5E80 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C00B62F0 (SfnCOPYDATA.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     NtUserCreateWindowStation @ 0x1C00DF4E0 (NtUserCreateWindowStation.c)
 *     xxxClientExpandStringW @ 0x1C00E331C (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C00E36DC (xxxClientLoadStringW.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00E8AD0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00E8C78 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00E8DD8 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     NtUserRegisterRawInputDevices @ 0x1C010CD00 (NtUserRegisterRawInputDevices.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C0123EF0 (NtUserfnPOWERBROADCAST.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0125940 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     SfnINSTRING @ 0x1C01288C0 (SfnINSTRING.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0129DF0 (NtUserfnINDEVICECHANGE.c)
 *     EditionFreeIMEKeyboardLayouts @ 0x1C0135050 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     xxxImmLoadLayout @ 0x1C013AD9C (xxxImmLoadLayout.c)
 *     xxxAddShadow @ 0x1C01456C4 (xxxAddShadow.c)
 *     ClientGetListboxString @ 0x1C0155C6C (ClientGetListboxString.c)
 *     xxxClientExtTextOutW @ 0x1C0157790 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0157AB4 (xxxClientGetTextExtentPointW.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C015FEC4 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01E1230 (xxxGetDeviceChangeInfo.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FCA7C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD388 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C0206BD0 (xxxPointerWindowHitTest.c)
 *     xxxDeferredDesktopRotation @ 0x1C020D2D0 (xxxDeferredDesktopRotation.c)
 *     ClientEventCallback @ 0x1C0214EF4 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02152C0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0215C00 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C02167D0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C0216DF0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0217A50 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0217EC0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0218320 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0218860 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C021A6A0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C021BE40 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C021C300 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C021D010 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C021ED04 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021F3C4 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F828 (xxxClientPSMTextOut.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C022A950 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C022B300 (NtUserDrawCaptionTemp.c)
 *     NtUserResolveDesktopForWOW @ 0x1C0233D20 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C0237930 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C02381D0 (NtUserfnINLPHLPSTRUCT.c)
 *     xxxCsEvent @ 0x1C0243880 (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C0243B1C (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C0247A14 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0249E08 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C025CF40 (xxxPSMGetTextExtent.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  *(_QWORD *)(v6 + 16) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
