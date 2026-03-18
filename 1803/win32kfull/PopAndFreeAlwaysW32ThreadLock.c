/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160
 * Callers:
 *     xxxClientCallDevCallbackCapture @ 0x1C0006FC8 (xxxClientCallDevCallbackCapture.c)
 *     NtUserQueryInformationThread @ 0x1C000B630 (NtUserQueryInformationThread.c)
 *     NtUserGetClassInfoEx @ 0x1C0018010 (NtUserGetClassInfoEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C001AAC0 (NtUserRegisterClassExWOW.c)
 *     SfnINLPCREATESTRUCT @ 0x1C00201D0 (SfnINLPCREATESTRUCT.c)
 *     NtUserCreateWindowEx @ 0x1C0022B90 (NtUserCreateWindowEx.c)
 *     SfnINSTRINGNULL @ 0x1C0023830 (SfnINSTRINGNULL.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C004ECB0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C004EE60 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C004EF98 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C004F0E0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     xxxClientAddFontResourceW @ 0x1C004F294 (xxxClientAddFontResourceW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C005202C (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientExpandStringW @ 0x1C0052778 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C0052BB4 (xxxClientLoadStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0052F70 (SfnGETDBCSTEXTLENGTHS.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00598F0 (NtUserRegisterRawInputDevices.c)
 *     xxxBroadcastMessageEx @ 0x1C0060914 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C00624D0 (NtUserfnPOWERBROADCAST.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C00627B0 (NtUserfnINDEVICECHANGE.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     xxxClientLoadImage @ 0x1C006BC38 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C006C1CC (xxxClientLoadMenu.c)
 *     NtUserCreateWindowStation @ 0x1C00B35A0 (NtUserCreateWindowStation.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00B5B4C (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     ClientLoadLibrary @ 0x1C00D8938 (ClientLoadLibrary.c)
 *     SfnINDEVICECHANGE @ 0x1C00EE530 (SfnINDEVICECHANGE.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00F3360 (EditionHandleAndPostKeyEvent.c)
 *     SfnPOWERBROADCAST @ 0x1C00F7D00 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C00FA200 (SfnCOPYDATA.c)
 *     SfnINSTRING @ 0x1C00FC540 (SfnINSTRING.c)
 *     EditionFreeIMEKeyboardLayouts @ 0x1C0108DD0 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxImmLoadLayout @ 0x1C010D42C (xxxImmLoadLayout.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     xxxAddShadow @ 0x1C0119F60 (xxxAddShadow.c)
 *     ClientGetListboxString @ 0x1C012CAF8 (ClientGetListboxString.c)
 *     xxxClientExtTextOutW @ 0x1C0132C8C (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0137D34 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01AA650 (xxxGetDeviceChangeInfo.c)
 *     xxxArrangeWindow @ 0x1C01C5D64 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 *     xxxPointerWindowHitTest @ 0x1C01CC520 (xxxPointerWindowHitTest.c)
 *     xxxDeferredDesktopRotation @ 0x1C01D2640 (xxxDeferredDesktopRotation.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01D32F4 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ClientEventCallback @ 0x1C01D8828 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01D8B90 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C01D9400 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C01D9F10 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01DA4C0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C01DB050 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C01DB440 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01DB820 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C01DBCF0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C01DD930 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C01DEB00 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C01DEF50 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C01DFF40 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C01E1818 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C01E1E54 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C01E2234 (xxxClientPSMTextOut.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01EC900 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01ED0F0 (NtUserDrawCaptionTemp.c)
 *     NtUserResolveDesktopForWOW @ 0x1C01F44B0 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C01F7970 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C01F8120 (NtUserfnINLPHLPSTRUCT.c)
 *     xxxCsEvent @ 0x1C0203878 (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C0203AA8 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C0206058 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0207FC0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C022E17C (xxxPSMGetTextExtent.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  *(_QWORD *)(v3 + 16) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
