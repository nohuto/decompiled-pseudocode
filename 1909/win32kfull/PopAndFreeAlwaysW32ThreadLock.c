/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780
 * Callers:
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0009D94 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     NtUserQueryInformationThread @ 0x1C000C740 (NtUserQueryInformationThread.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001D320 (EditionHandleAndPostKeyEvent.c)
 *     NtUserGetClassInfoEx @ 0x1C001E840 (NtUserGetClassInfoEx.c)
 *     xxxBroadcastMessageEx @ 0x1C001F5D4 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     NtUserCreateWindowEx @ 0x1C00352A0 (NtUserCreateWindowEx.c)
 *     NtUserRegisterClassExWOW @ 0x1C0036FD0 (NtUserRegisterClassExWOW.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C0042AD0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     SfnINSTRINGNULL @ 0x1C0050770 (SfnINSTRINGNULL.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00518F0 (SfnGETDBCSTEXTLENGTHS.c)
 *     ClientLoadLibrary @ 0x1C00529C0 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0052C00 (SfnINLPCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0053C20 (SfnINDEVICECHANGE.c)
 *     xxxClientAddFontResourceW @ 0x1C0055478 (xxxClientAddFontResourceW.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00556F4 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C0055C30 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C00567C4 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C0056C30 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C00570A0 (SfnCOPYDATA.c)
 *     xxxClientLoadStringW @ 0x1C0057480 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C005AC40 (xxxClientExpandStringW.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     NtUserCreateWindowStation @ 0x1C007F1D0 (NtUserCreateWindowStation.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0094764 (fnHkINLPCBTCREATESTRUCT.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00E7080 (NtUserRegisterRawInputDevices.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C00FE820 (NtUserfnPOWERBROADCAST.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C00FF830 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     SfnINSTRING @ 0x1C0103970 (SfnINSTRING.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0105050 (NtUserfnINDEVICECHANGE.c)
 *     EditionFreeIMEKeyboardLayouts @ 0x1C010FCE0 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     xxxImmLoadLayout @ 0x1C0114D9C (xxxImmLoadLayout.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C011D440 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C011D5E8 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C011D748 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     xxxAddShadow @ 0x1C0146474 (xxxAddShadow.c)
 *     ClientGetListboxString @ 0x1C0156A2C (ClientGetListboxString.c)
 *     xxxClientExtTextOutW @ 0x1C0158550 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0160E84 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     xxxValidateClassAndSize @ 0x1C0165268 (xxxValidateClassAndSize.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01E10B0 (xxxGetDeviceChangeInfo.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01FC7CC (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C01FD0D8 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C0206920 (xxxPointerWindowHitTest.c)
 *     xxxDeferredDesktopRotation @ 0x1C020D020 (xxxDeferredDesktopRotation.c)
 *     ClientEventCallback @ 0x1C02149B4 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0214D80 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C02156C0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C0216290 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C02168B0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0217510 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0217980 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0217DE0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0218320 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C021A160 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C021B900 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C021BDC0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C021CAD0 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C021E7C4 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021EE84 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F2E8 (xxxClientPSMTextOut.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C022A330 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C022ACE0 (NtUserDrawCaptionTemp.c)
 *     NtUserResolveDesktopForWOW @ 0x1C0233700 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C0237310 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C0237BB0 (NtUserfnINLPHLPSTRUCT.c)
 *     xxxCsEvent @ 0x1C0243140 (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C02433DC (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C02472D4 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02496C8 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C025C810 (xxxPSMGetTextExtent.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  *(_QWORD *)(v5 + 16) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
