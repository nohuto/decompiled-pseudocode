/*
 * XREFs of memmove @ 0x1C013D380
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C000363C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     NtUserGetRawInputData @ 0x1C0005070 (NtUserGetRawInputData.c)
 *     xxxClientCallDevCallbackCapture @ 0x1C0006FC8 (xxxClientCallDevCallbackCapture.c)
 *     NtUserQueryInformationThread @ 0x1C000B630 (NtUserQueryInformationThread.c)
 *     NtUserSetInformationThread @ 0x1C000DF40 (NtUserSetInformationThread.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     NtUserConsoleControl @ 0x1C0011E60 (NtUserConsoleControl.c)
 *     xxxConsoleControl @ 0x1C0011F74 (xxxConsoleControl.c)
 *     _SetCursorIconData @ 0x1C0014A20 (_SetCursorIconData.c)
 *     bCaptureBitmapInfo @ 0x1C00169D0 (bCaptureBitmapInfo.c)
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 *     NtGdiExtGetObjectW @ 0x1C0017730 (NtGdiExtGetObjectW.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C0017DE4 (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     NtUserGetClassInfoEx @ 0x1C0018010 (NtUserGetClassInfoEx.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1C0018CD4 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0018DB4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     NtUserRegisterClassExWOW @ 0x1C001AAC0 (NtUserRegisterClassExWOW.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002133C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     NtUserCreateWindowEx @ 0x1C0022B90 (NtUserCreateWindowEx.c)
 *     xxxInsertMenuItem @ 0x1C0023244 (xxxInsertMenuItem.c)
 *     NtUserBuildHwndList @ 0x1C0029040 (NtUserBuildHwndList.c)
 *     DefSetText @ 0x1C002FFEC (DefSetText.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C003A190 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C003B2C0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0040BA0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     ?LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1C00509FC (-LoadCPUserPreferences@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C0055AEC (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x1C0055BBC (vIFIMetricsToEnumLogFontExDvW.c)
 *     vProcessEntry @ 0x1C0055E00 (vProcessEntry.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00598F0 (NtUserRegisterRawInputDevices.c)
 *     NtUserSendInput @ 0x1C005D460 (NtUserSendInput.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C005E128 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C00624D0 (NtUserfnPOWERBROADCAST.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C00627B0 (NtUserfnINDEVICECHANGE.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     DwmSyncGetCompositionAttribute @ 0x1C006D668 (DwmSyncGetCompositionAttribute.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C006EF3C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00703F0 (NtUserSetWindowCompositionAttribute.c)
 *     ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0076738 (-bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z.c)
 *     NtGdiGetGlyphOutline @ 0x1C0076D60 (NtGdiGetGlyphOutline.c)
 *     NtGdiHLSurfGetInformation @ 0x1C00782C0 (NtGdiHLSurfGetInformation.c)
 *     ?bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z @ 0x1C0078CC0 (-bSubtractComplex@RGNOBJ@@QEAAHPEAU_RECTL@@0H@Z.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C007D960 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C007E254 (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     NtGdiGetOutlineTextMetricsInternalW @ 0x1C007E920 (NtGdiGetOutlineTextMetricsInternalW.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C007EA60 (GreGetOutlineTextMetricsInternalW.c)
 *     NtGdiGetFontData @ 0x1C0080250 (NtGdiGetFontData.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z @ 0x1C0080590 (-CaptureUsermodeParameters@QueryTrueTypeTableRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1C00818A0 (-CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0081940 (-CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     NtGdiExtEscape @ 0x1C0081E90 (NtGdiExtEscape.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0082350 (-UmfdEscSendCompleteWaitReceive@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x1C0082A70 (-CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0082CA0 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     NtGdiGetTextFaceW @ 0x1C00833B0 (NtGdiGetTextFaceW.c)
 *     GreGetTextFaceW @ 0x1C00834B0 (GreGetTextFaceW.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0083A20 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     NtGdiGetTextExtentExW @ 0x1C0083FC0 (NtGdiGetTextExtentExW.c)
 *     NtGdiGetRealizationInfo @ 0x1C0084290 (NtGdiGetRealizationInfo.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0089030 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C0090900 (-vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     NtGdiExtTextOutW @ 0x1C009CFE0 (NtGdiExtTextOutW.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C009FF50 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiStretchDIBitsInternal @ 0x1C00A0450 (NtGdiStretchDIBitsInternal.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00A52A0 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiGetDIBitsInternal @ 0x1C00A57D0 (NtGdiGetDIBitsInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00A6594 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiDrawStream @ 0x1C00A6ED0 (NtGdiDrawStream.c)
 *     RenderNineGridInternal @ 0x1C00A9030 (RenderNineGridInternal.c)
 *     DNG_DrawRow @ 0x1C00A9DB0 (DNG_DrawRow.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00ABD9C (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     NtGdiDoPalette @ 0x1C00ACC70 (NtGdiDoPalette.c)
 *     ?vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C00AFA90 (-vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vRop2FunctionA@@YAXPEAK00K@Z @ 0x1C00AFB60 (-vRop2FunctionA@@YAXPEAK00K@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C00AFBE0 (-vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C00B0D00 (-vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vRop2FunctionC@@YAXPEAK00K@Z @ 0x1C00B1A40 (-vRop2FunctionC@@YAXPEAK00K@Z.c)
 *     NtUserCreateWindowStation @ 0x1C00B35A0 (NtUserCreateWindowStation.c)
 *     _ConvertMemHandle @ 0x1C00B6D3C (_ConvertMemHandle.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C00B8ECC (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BC5E8 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C00BE4A0 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C00BE7B8 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C00BE8C0 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C00BEE4C (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00BF054 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     SetAppCompatFlags @ 0x1C00C1A00 (SetAppCompatFlags.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C00C6A8C (--0PFFMEMOBJ@@QEAA@IPEAGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ??0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z @ 0x1C00C6EC8 (--0PFFMEMOBJ@@QEAA@PEAVPFF@@KKPEAVPFT@@@Z.c)
 *     NtGdiEnumFonts @ 0x1C00C8DC0 (NtGdiEnumFonts.c)
 *     NtGdiGradientFill @ 0x1C00C92F0 (NtGdiGradientFill.c)
 *     BuildAndLoadLinkedFontRoutine @ 0x1C00C9DE0 (BuildAndLoadLinkedFontRoutine.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00CA2F0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     hfontCreate @ 0x1C00CA860 (hfontCreate.c)
 *     ?bGrow@EFSOBJ@@QEAAHXZ @ 0x1C00CB960 (-bGrow@EFSOBJ@@QEAAHXZ.c)
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C00CBA48 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 *     cjCopyFontDataW @ 0x1C00CD24C (cjCopyFontDataW.c)
 *     GetCachedSMP @ 0x1C00D362C (GetCachedSMP.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00D3F58 (HT_CreateDeviceHalftoneInfo.c)
 *     ExpandHTPatX @ 0x1C00D50F0 (ExpandHTPatX.c)
 *     InputAABFDATAToAA24 @ 0x1C00D5310 (InputAABFDATAToAA24.c)
 *     NtGdiHfontCreate @ 0x1C00DA940 (NtGdiHfontCreate.c)
 *     NtGdiPolyTextOutW @ 0x1C00DB5B0 (NtGdiPolyTextOutW.c)
 *     NtUserInternalGetWindowText @ 0x1C00DDB90 (NtUserInternalGetWindowText.c)
 *     ConvertToAndFromWideChar @ 0x1C00DE960 (ConvertToAndFromWideChar.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00DEC38 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     NtUserProcessConnect @ 0x1C00DEEF0 (NtUserProcessConnect.c)
 *     NtGdiGetCharABCWidthsW @ 0x1C00DFA00 (NtGdiGetCharABCWidthsW.c)
 *     _GetUserObjectInformation @ 0x1C00E0044 (_GetUserObjectInformation.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C00E0730 (NtUserGetPointerDeviceProperties.c)
 *     NtGdiGetWidthTable @ 0x1C00E0EA0 (NtGdiGetWidthTable.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00E4D40 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     NtGdiTransformPoints @ 0x1C00E53E0 (NtGdiTransformPoints.c)
 *     ?bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z @ 0x1C00EF67C (-bEngFastFillEnum@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@KP6AX1KPEAX@ZP6AXJPEAU_ROW@@K2@Z2@Z.c)
 *     ReferenceClass @ 0x1C00F03B0 (ReferenceClass.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00F2518 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     NtUserSystemParametersInfoForDpi @ 0x1C00F4290 (NtUserSystemParametersInfoForDpi.c)
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00F4D68 (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     ?UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C00F65E0 (-UMPDDrvEscape@@YAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     NtGdiGetCharWidthW @ 0x1C00F85F0 (NtGdiGetCharWidthW.c)
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C00F8AD0 (NtGdiGetGlyphIndicesWInternal.c)
 *     _BuildNameList @ 0x1C00F9164 (_BuildNameList.c)
 *     ?CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z @ 0x1C00F9FB0 (-CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z.c)
 *     NtGdiGetFontUnicodeRanges @ 0x1C00FBCE0 (NtGdiGetFontUnicodeRanges.c)
 *     RemoveProcessFromJob @ 0x1C00FD350 (RemoveProcessFromJob.c)
 *     GreRealizePalette @ 0x1C00FD5B8 (GreRealizePalette.c)
 *     ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00FE65C (-pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z.c)
 *     ?LOADSTRING@@YAHPEAXIPEAGH@Z @ 0x1C0100BA0 (-LOADSTRING@@YAHPEAXIPEAGH@Z.c)
 *     _CreateAcceleratorTable @ 0x1C0101178 (_CreateAcceleratorTable.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0101650 (xxxProcessSetWindowPosEvent.c)
 *     AllocateUnicodeString @ 0x1C010321C (AllocateUnicodeString.c)
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C01034B0 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 *     NtUserSetGestureConfig @ 0x1C0109540 (NtUserSetGestureConfig.c)
 *     NtGdiGetProcessSessionFonts @ 0x1C010A140 (NtGdiGetProcessSessionFonts.c)
 *     _SetWindowStationUser @ 0x1C010C978 (_SetWindowStationUser.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C010F414 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 *     PREALLOCMEM2 @ 0x1C010FC94 (PREALLOCMEM2.c)
 *     FastExpAA_CY @ 0x1C0115180 (FastExpAA_CY.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0115FE0 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiGetETM @ 0x1C0118830 (NtGdiGetETM.c)
 *     NtGdiGetKerningPairs @ 0x1C0119290 (NtGdiGetKerningPairs.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C011E850 (NtGdiFONTOBJ_pifi.c)
 *     ?pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z @ 0x1C011FF2C (-pxlo@UMPDOBJ@@QEAAHPEAPEAU_XLATEOBJ@@@Z.c)
 *     NtGdiStartDoc @ 0x1C0122140 (NtGdiStartDoc.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1C01225BC (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C0123738 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C01237E0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0123F9C (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 *     ?CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z @ 0x1C0125CE0 (-CaptureUsermodeParameters@QueryTrueTypeOutlineRequest@@UEAAXPEAX@Z.c)
 *     ?pppUserModeCallback@@YAJKPEAXK0K@Z @ 0x1C0126534 (-pppUserModeCallback@@YAJKPEAXK0K@Z.c)
 *     InitializeFUDI @ 0x1C0126F3C (InitializeFUDI.c)
 *     FixupColorScan @ 0x1C012702C (FixupColorScan.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0127D40 (NtGdiGetLinkedUFIs.c)
 *     NtGdiGetUFI @ 0x1C0129010 (NtGdiGetUFI.c)
 *     GreGetUFI @ 0x1C012913C (GreGetUFI.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C012A498 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     CreateStandardMonoPattern @ 0x1C012A568 (CreateStandardMonoPattern.c)
 *     NtGdiQueryFonts @ 0x1C012D600 (NtGdiQueryFonts.c)
 *     ?vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C012E330 (-vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C012EDC0 (NtUserGetRawInputDeviceInfo.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C012FD00 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C012FD4C (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     NtGdiCreateDIBBrush @ 0x1C01318E0 (NtGdiCreateDIBBrush.c)
 *     GreCreateDIBBrush @ 0x1C01319DC (GreCreateDIBBrush.c)
 *     NtUserCreateLocalMemHandle @ 0x1C0134BA0 (NtUserCreateLocalMemHandle.c)
 *     xxxRemoteReconnect @ 0x1C0137320 (xxxRemoteReconnect.c)
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C019D300 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     ?RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z @ 0x1C019D450 (-RegQueryValueCal@@YAJPEAXU_UNICODE_STRING@@KPEAEKPEAK@Z.c)
 *     GetTaskName @ 0x1C01A1E78 (GetTaskName.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01A2BA4 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01A4354 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01A8354 (-AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z.c)
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01A9B30 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     ?DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z @ 0x1C01A9CF0 (-DeviceClassCDROMNotify@@YAJPEAU_DEVICE_INTERFACE_CHANGE_NOTIFICATION@@PEAX@Z.c)
 *     ProbeAndCaptureSoftKbdData @ 0x1C01ACD7C (ProbeAndCaptureSoftKbdData.c)
 *     ?_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z @ 0x1C01BE918 (-_GrowListeners@Edgy@@YAHAEAUtagEDGY_DATA@@@Z.c)
 *     ?_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z @ 0x1C01BEBC0 (-_InitializeData@Edgy@@YAPEAUtagEDGY_DATA@@PEAUtagDESKTOP@@@Z.c)
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1C01BEFF0 (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z @ 0x1C01D29E4 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUtagBITMAPINFOHEADER@@K@Z.c)
 *     RemoteShadowCleanup @ 0x1C01D6D50 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C01D6EC0 (RemoteShadowStart.c)
 *     AllocGestureInfo @ 0x1C01D7A1C (AllocGestureInfo.c)
 *     SfnIMECONTROL @ 0x1C01D9400 (SfnIMECONTROL.c)
 *     SfnPOUTLPINT @ 0x1C01DEF50 (SfnPOUTLPINT.c)
 *     xxxClientCopyDDEIn1 @ 0x1C01E1060 (xxxClientCopyDDEIn1.c)
 *     xxxClientCopyDDEOut1 @ 0x1C01E14B4 (xxxClientCopyDDEOut1.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01EC900 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01ED0F0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureConfig @ 0x1C01EE260 (NtUserGetGestureConfig.c)
 *     NtUserGetGestureExtArgs @ 0x1C01EE510 (NtUserGetGestureExtArgs.c)
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01EEDE0 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 *     NtUserGetRawInputBuffer @ 0x1C01EF8A0 (NtUserGetRawInputBuffer.c)
 *     NtUserGetTouchInputInfo @ 0x1C01EFEF0 (NtUserGetTouchInputInfo.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01F0C60 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserInjectTouchInput @ 0x1C01F17E0 (NtUserInjectTouchInput.c)
 *     NtUserMagGetContextInformation @ 0x1C01F21E0 (NtUserMagGetContextInformation.c)
 *     NtUserProcessInkFeedbackCommand @ 0x1C01F3920 (NtUserProcessInkFeedbackCommand.c)
 *     NtUserResolveDesktopForWOW @ 0x1C01F44B0 (NtUserResolveDesktopForWOW.c)
 *     NtUserSendInteractiveControlHapticsReport @ 0x1C01F4670 (NtUserSendInteractiveControlHapticsReport.c)
 *     NtUserSetCalibrationData @ 0x1C01F49C0 (NtUserSetCalibrationData.c)
 *     NtUserSlicerControl @ 0x1C01F6510 (NtUserSlicerControl.c)
 *     NtUserUserHandleGrantAccess @ 0x1C01F70F0 (NtUserUserHandleGrantAccess.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C01F8120 (NtUserfnINLPHLPSTRUCT.c)
 *     ?Grow@?$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C020303C (-Grow@-$CDynamicArray@PEAUtagWND@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     xxxCsEvent @ 0x1C0203878 (xxxCsEvent.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0212F2C (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 *     pgsetComputeSymbolCP @ 0x1C0217054 (pgsetComputeSymbolCP.c)
 *     bLoadFontFile @ 0x1C0219334 (bLoadFontFile.c)
 *     bLoadTTF @ 0x1C021995C (bLoadTTF.c)
 *     bLoadTTF_Cache @ 0x1C0219E58 (bLoadTTF_Cache.c)
 *     bReloadGlyphSet @ 0x1C021A0A4 (bReloadGlyphSet.c)
 *     vCopy_IFIV @ 0x1C021BB1C (vCopy_IFIV.c)
 *     vFontFileCache @ 0x1C021CF54 (vFontFileCache.c)
 *     bGeneratePath @ 0x1C021D344 (bGeneratePath.c)
 *     lGGOBitmap @ 0x1C021F1E4 (lGGOBitmap.c)
 *     ttfdQueryFontCaps @ 0x1C02205B0 (ttfdQueryFontCaps.c)
 *     ttfdQueryTrueTypeTable2 @ 0x1C0220BC4 (ttfdQueryTrueTypeTable2.c)
 *     vCopyAndZeroOutPaddingBits @ 0x1C0220CAC (vCopyAndZeroOutPaddingBits.c)
 *     BmfdQueryFontFile @ 0x1C0225250 (BmfdQueryFontFile.c)
 *     bDescStr @ 0x1C0226234 (bDescStr.c)
 *     vStretchGlyphBitmap @ 0x1C02280DC (vStretchGlyphBitmap.c)
 *     vtfdQueryFontFile @ 0x1C022A420 (vtfdQueryFontFile.c)
 *     TextCopy @ 0x1C022BAB8 (TextCopy.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C022BB50 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     AddBGRMapCache @ 0x1C022EF94 (AddBGRMapCache.c)
 *     CacheRGBToXYZ @ 0x1C022F0C4 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1C022F1B4 (ComputeBGRMappingTable.c)
 *     FindBGRMapCache @ 0x1C022FCF0 (FindBGRMapCache.c)
 *     TrimBGRMapCache @ 0x1C02301A0 (TrimBGRMapCache.c)
 *     CreateHalftoneBrushPat @ 0x1C0230298 (CreateHalftoneBrushPat.c)
 *     BltMask_CY @ 0x1C0233EE0 (BltMask_CY.c)
 *     FixupGrayScan @ 0x1C0234184 (FixupGrayScan.c)
 *     ShrinkMask_CY @ 0x1C0234B60 (ShrinkMask_CY.c)
 *     ExpandDIB_CY @ 0x1C0236110 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0236AC0 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x1C0237770 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0237F20 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0238C40 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C02396D0 (ShrinkDIB_CY.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ @ 0x1C023DA48 (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AEAAJXZ.c)
 *     EngHangNotification @ 0x1C0240470 (EngHangNotification.c)
 *     NtGdiGetMonitorID @ 0x1C02406B0 (NtGdiGetMonitorID.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02475B8 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0247998 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreGetUFIPathname @ 0x1C02486EC (GreGetUFIPathname.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0248A30 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiSetLinkedUFIs @ 0x1C0248EB0 (NtGdiSetLinkedUFIs.c)
 *     ?bCopySection@@YAHPEAX0_K@Z @ 0x1C025A868 (-bCopySection@@YAHPEAX0_K@Z.c)
 *     cMapRemoteFonts @ 0x1C025B3FC (cMapRemoteFonts.c)
 *     NtGdiPlgBlt @ 0x1C025EB20 (NtGdiPlgBlt.c)
 *     FONTOBJ_vGetInfo @ 0x1C0263F70 (FONTOBJ_vGetInfo.c)
 *     ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C0264130 (-CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z.c)
 *     GreGetCannonicalName @ 0x1C0264B94 (GreGetCannonicalName.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C0268DE0 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0268F90 (NtGdiGetEudcTimeStampEx.c)
 *     NtGdiGetStringBitmapW @ 0x1C02690D0 (NtGdiGetStringBitmapW.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C026B01C (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C026B380 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C026D8E0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0270720 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z @ 0x1C0278BA0 (-ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_J@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z @ 0x1C0278E1C (-ProbeAndReadFD_KERNINGPAIR@@YAPEAU_FD_KERNINGPAIR@@PEBU1@H_K@Z.c)
 *     ?ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z @ 0x1C0278F48 (-ProbeAndReadIFIMETRICS@@YAPEAU_IFIMETRICS@@PEAU1@H_K@Z.c)
 *     ?UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C0279920 (-UMPDDrvDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0279F30 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C027B210 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z @ 0x1C027B3D0 (-UMPDDrvQueryDeviceSupport@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_XFORMOBJ@@KKPEAXK3@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C027B970 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C027CCD8 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 *     ?bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z @ 0x1C027D404 (-bSetLinkedUFIs@XDCOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@I@Z.c)
 *     NtGdiAddFontMemResourceEx @ 0x1C027E360 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiDescribePixelFormat @ 0x1C027E6A0 (NtGdiDescribePixelFormat.c)
 *     NtGdiDrawEscape @ 0x1C027E740 (NtGdiDrawEscape.c)
 *     NtGdiExtCreatePen @ 0x1C027E8C0 (NtGdiExtCreatePen.c)
 *     NtGdiGetCharacterPlacementW @ 0x1C027EB30 (NtGdiGetCharacterPlacementW.c)
 *     NtGdiGetEmbUFI @ 0x1C027F170 (NtGdiGetEmbUFI.c)
 *     NtGdiGetFontResourceInfoInternalW @ 0x1C027F310 (NtGdiGetFontResourceInfoInternalW.c)
 *     NtGdiGetRasterizerCaps @ 0x1C027F600 (NtGdiGetRasterizerCaps.c)
 *     NtGdiGetTextExtent @ 0x1C027F690 (NtGdiGetTextExtent.c)
 *     NtGdiGetUFIPathname @ 0x1C027F830 (NtGdiGetUFIPathname.c)
 *     NtGdiMakeFontDir @ 0x1C027FC50 (NtGdiMakeFontDir.c)
 *     NtGdiScaleValues @ 0x1C0280240 (NtGdiScaleValues.c)
 *     ProbeAndReadDesignVector @ 0x1C028059C (ProbeAndReadDesignVector.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C0281F90 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C0282164 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     NtGdiEngGradientFill @ 0x1C02834D0 (NtGdiEngGradientFill.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0284B80 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C0285130 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02852A0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02857B0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiResizePalette @ 0x1C0287F00 (NtGdiResizePalette.c)
 *     NtGdiCreateServerMetaFile @ 0x1C02884B0 (NtGdiCreateServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02885E0 (NtGdiGetServerMetaFileBits.c)
 *     ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C0288CD0 (-bExpand@STACKOBJ@@QEAAHK@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C0289570 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     NtGdiGetFontFileData @ 0x1C0289C20 (NtGdiGetFontFileData.c)
 *     GreGetCharacterPlacementW @ 0x1C028A030 (GreGetCharacterPlacementW.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z @ 0x1C028B33C (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEAKKK@Z.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0291C90 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0292180 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02924A0 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C0294108 (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02973D0 (-vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1C0298710 (-vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z @ 0x1C02987A0 (-vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1C0298AA0 (-vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?WriteAbsolute8@@YAHPEAE0H0@Z @ 0x1C0299E8C (-WriteAbsolute8@@YAHPEAE0H0@Z.c)
 *     ?WriteAbsolute4@@YAHPEAE0H0@Z @ 0x1C029B490 (-WriteAbsolute4@@YAHPEAE0H0@Z.c)
 *     ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C029F028 (-bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C029F11C (-bAddPreComputedFastStrokeRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z.c)
 *     ?vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A0D90 (-vFillGRectDIB24BGR@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A0FA0 (-vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A12A0 (-vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A14B0 (-vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A17D0 (-vFillGRectDIB32RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z.c)
 *     ?BltLnkReadPat4@@YAXPEAEK0KKKK@Z @ 0x1C02AC740 (-BltLnkReadPat4@@YAXPEAEK0KKKK@Z.c)
 *     ?vSrcAlignCopyMemory@@YAXPEAE0K@Z @ 0x1C02AD650 (-vSrcAlignCopyMemory@@YAXPEAE0K@Z.c)
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1C02AE32C (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C02AE448 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02AEE70 (-ReAllocate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z @ 0x1C02AF320 (-CaptureUsermodeParameters@EscapeRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1C02AF390 (-CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1C02AF490 (-CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z.c)
 *     ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02AF5B0 (-CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02AF6D0 (-CreateUsermodeParameters@FontManagementRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02AF9E4 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 *     scl_CopyCurrentCharPoints @ 0x1C02B44B8 (scl_CopyCurrentCharPoints.c)
 *     ScaleVertical @ 0x1C02B88E4 (ScaleVertical.c)
 *     sbit_GetBitmap @ 0x1C02B9DC0 (sbit_GetBitmap.c)
 *     fsg_CompositeInnerGridFit @ 0x1C02BC6FC (fsg_CompositeInnerGridFit.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C02BF548 (sfac_CopyFontAndPrePrograms.c)
 *     WppTraceCallback @ 0x1C0367680 (WppTraceCallback.c)
 *     bInitStockFontsInternal @ 0x1C037E0BC (bInitStockFontsInternal.c)
 *     bInitOneStockFont @ 0x1C037E5A0 (bInitOneStockFont.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto LABEL_38;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_38:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto LABEL_13;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_13:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
