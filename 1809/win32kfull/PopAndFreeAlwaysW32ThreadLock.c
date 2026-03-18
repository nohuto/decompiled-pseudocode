/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060
 * Callers:
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0006E3C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxClientCallDevCallbackCapture @ 0x1C00070E8 (xxxClientCallDevCallbackCapture.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C000A004 (xxxDrawMenuBarUnderlines.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0019E00 (SfnINLPCREATESTRUCT.c)
 *     NtUserRegisterClassExWOW @ 0x1C00229A0 (NtUserRegisterClassExWOW.c)
 *     SfnINSTRINGNULL @ 0x1C0068130 (SfnINSTRINGNULL.c)
 *     NtUserCreateWindowEx @ 0x1C00685B0 (NtUserCreateWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     NtUserGetClassInfoEx @ 0x1C00AEA20 (NtUserGetClassInfoEx.c)
 *     SfnOUTSTRING @ 0x1C00AF100 (SfnOUTSTRING.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C00B0CD0 (NtUserfnPOWERBROADCAST.c)
 *     xxxClientLoadMenu @ 0x1C00B3DE8 (xxxClientLoadMenu.c)
 *     ClientLoadLibrary @ 0x1C00B622C (ClientLoadLibrary.c)
 *     xxxClientLoadImage @ 0x1C00B7340 (xxxClientLoadImage.c)
 *     NtUserQueryInformationThread @ 0x1C00BAE80 (NtUserQueryInformationThread.c)
 *     xxxClientLoadStringW @ 0x1C00BEB60 (xxxClientLoadStringW.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00C2DC0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00C2F90 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00C30E0 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00C324C (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     xxxClientAddFontResourceW @ 0x1C00C3414 (xxxClientAddFontResourceW.c)
 *     xxxBroadcastMessageEx @ 0x1C00D103C (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00D21B0 (EditionHandleAndPostKeyEvent.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     xxxClientExpandStringW @ 0x1C00DAF0C (xxxClientExpandStringW.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00DF170 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     NtUserCreateWindowStation @ 0x1C00EBFE0 (NtUserCreateWindowStation.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C01022C0 (SfnGETDBCSTEXTLENGTHS.c)
 *     NtUserRegisterRawInputDevices @ 0x1C0102F70 (NtUserRegisterRawInputDevices.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0107828 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0109F00 (SfnINDEVICECHANGE.c)
 *     SfnPOWERBROADCAST @ 0x1C010EBF0 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C01191C0 (SfnCOPYDATA.c)
 *     SfnINSTRING @ 0x1C011BCC0 (SfnINSTRING.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0121540 (NtUserfnINDEVICECHANGE.c)
 *     EditionFreeIMEKeyboardLayouts @ 0x1C0129A20 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxImmLoadLayout @ 0x1C012EA4C (xxxImmLoadLayout.c)
 *     xxxAddShadow @ 0x1C0139D34 (xxxAddShadow.c)
 *     ClientGetListboxString @ 0x1C014F55C (ClientGetListboxString.c)
 *     xxxClientExtTextOutW @ 0x1C0151824 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0151B08 (xxxClientGetTextExtentPointW.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0158634 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxValidateClassAndSize @ 0x1C015D924 (xxxValidateClassAndSize.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01CCD50 (xxxGetDeviceChangeInfo.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01E7130 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01E79E4 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C01F0930 (xxxPointerWindowHitTest.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F6FC0 (xxxDeferredDesktopRotation.c)
 *     ClientEventCallback @ 0x1C01FD9BC (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01FDD60 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C01FE660 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C01FF1F0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FF7E0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0200420 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0200850 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0200C70 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0201180 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C0202F80 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C0204280 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C0204710 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0205800 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C02073A0 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0207A40 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0207E64 (xxxClientPSMTextOut.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C0212BC0 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C0213480 (NtUserDrawCaptionTemp.c)
 *     NtUserResolveDesktopForWOW @ 0x1C021BBD0 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C021F5A0 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C021FD60 (NtUserfnINLPHLPSTRUCT.c)
 *     xxxCsEvent @ 0x1C022C7CC (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C022CA28 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C022F198 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02311D0 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C02440EC (xxxPSMGetTextExtent.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  *(_QWORD *)(v4 + 16) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
