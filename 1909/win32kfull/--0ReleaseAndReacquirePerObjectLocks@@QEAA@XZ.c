/*
 * XREFs of ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434
 * Callers:
 *     fnHkINLPNOTIFYSTRUCT @ 0x1C00071AC (fnHkINLPNOTIFYSTRUCT.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C004BDB4 (xxxClientAllocWindowClassExtraBytes.c)
 *     fnHkINDWORD @ 0x1C004BF20 (fnHkINDWORD.c)
 *     xxxClientCallWinEventProc @ 0x1C004EBB8 (xxxClientCallWinEventProc.c)
 *     SfnINLPWINDOWPOS @ 0x1C004EE40 (SfnINLPWINDOWPOS.c)
 *     ClientWaitMessageExMPH @ 0x1C004F270 (ClientWaitMessageExMPH.c)
 *     SfnNCDESTROY @ 0x1C004FBE0 (SfnNCDESTROY.c)
 *     xxxClientCallDitThread @ 0x1C004FECC (xxxClientCallDitThread.c)
 *     SfnOUTLPCOMBOBOXINFO @ 0x1C0050300 (SfnOUTLPCOMBOBOXINFO.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C0050668 (xxxClientFreeWindowClassExtraBytes.c)
 *     SfnINSTRINGNULL @ 0x1C0050770 (SfnINSTRINGNULL.c)
 *     SfnEMPTY @ 0x1C00514E0 (SfnEMPTY.c)
 *     xxxClientWOWGetProcModule @ 0x1C0051758 (xxxClientWOWGetProcModule.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00518F0 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnINOUTLPPOINT5 @ 0x1C0052080 (SfnINOUTLPPOINT5.c)
 *     ClientImmProcessKey @ 0x1C00525B4 (ClientImmProcessKey.c)
 *     ClientLoadLibrary @ 0x1C00529C0 (ClientLoadLibrary.c)
 *     SfnINDEVICECHANGE @ 0x1C0053C20 (SfnINDEVICECHANGE.c)
 *     xxxClientAddFontResourceW @ 0x1C0055478 (xxxClientAddFontResourceW.c)
 *     xxxClientCopyImage @ 0x1C0055B04 (xxxClientCopyImage.c)
 *     SfnPOWERBROADCAST @ 0x1C0055C30 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C00567C4 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C0056C30 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C00570A0 (SfnCOPYDATA.c)
 *     xxxClientLoadStringW @ 0x1C0057480 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C005AC40 (xxxClientExpandStringW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0094764 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00E5EB0 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C00E62A0 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C00E6580 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C00E6860 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1C00EE810 (SfnINOUTLPSCROLLINFO.c)
 *     SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C00F73C0 (SfnSHELLWINDOWMANAGEMENTNOTIFY.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00FAEA4 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     xxxClientMonitorEnumProc @ 0x1C00FBDE0 (xxxClientMonitorEnumProc.c)
 *     SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1C00FDA30 (SfnSHELLWINDOWMANAGEMENTCALLOUT.c)
 *     SfnINOUTLPRECT @ 0x1C00FE220 (SfnINOUTLPRECT.c)
 *     ClientFreeLibrary @ 0x1C0102438 (ClientFreeLibrary.c)
 *     SfnINSTRING @ 0x1C0103970 (SfnINSTRING.c)
 *     SfnOUTLPTITLEBARINFOEX @ 0x1C0104C00 (SfnOUTLPTITLEBARINFOEX.c)
 *     SfnINDESTROYCLIPBRD @ 0x1C0110D50 (SfnINDESTROYCLIPBRD.c)
 *     xxxClientBroadcastThemeChange @ 0x1C011234C (xxxClientBroadcastThemeChange.c)
 *     ClientImmLoadLayout @ 0x1C0114E44 (ClientImmLoadLayout.c)
 *     xxxClientGetCharsetInfo @ 0x1C01153D0 (xxxClientGetCharsetInfo.c)
 *     SfnOUTLPRECT @ 0x1C014BA00 (SfnOUTLPRECT.c)
 *     SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C0153BC0 (SfnOPTOUTLPDWORDOPTOUTLPDWORD.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C0154070 (SfnINLPDRAWITEMSTRUCT.c)
 *     ClientGetListboxString @ 0x1C0156A2C (ClientGetListboxString.c)
 *     SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C0157100 (SfnINOUTLPMEASUREITEMSTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C0158550 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C015A020 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1C015CD80 (SfnINWPARAMDBCSCHAR.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C02146C4 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C0214830 (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 *     ClientEventCallback @ 0x1C02149B4 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0214D80 (SfnCOPYGLOBALDATA.c)
 *     SfnGESTURE @ 0x1C02151C0 (SfnGESTURE.c)
 *     SfnGETWINDOWDATA @ 0x1C0215510 (SfnGETWINDOWDATA.c)
 *     SfnIMECONTROL @ 0x1C02156C0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C0216290 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C02168B0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPCOMPAREITEMSTRUCT @ 0x1C0216E60 (SfnINLPCOMPAREITEMSTRUCT.c)
 *     SfnINLPDELETEITEMSTRUCT @ 0x1C02171D0 (SfnINLPDELETEITEMSTRUCT.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0217510 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0217980 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0217DE0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0218320 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C02189A0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnINOUTDRAG @ 0x1C0218D60 (SfnINOUTDRAG.c)
 *     SfnINOUTLPSIZE @ 0x1C0219160 (SfnINOUTLPSIZE.c)
 *     SfnINOUTMENUGETOBJECT @ 0x1C0219530 (SfnINOUTMENUGETOBJECT.c)
 *     SfnINOUTNEXTMENU @ 0x1C0219970 (SfnINOUTNEXTMENU.c)
 *     SfnINPAINTCLIPBRD @ 0x1C0219D60 (SfnINPAINTCLIPBRD.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C021A160 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSIZECLIPBRD @ 0x1C021A5C0 (SfnINSIZECLIPBRD.c)
 *     SfnINWPARAMCHAR @ 0x1C021A950 (SfnINWPARAMCHAR.c)
 *     SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C021ACF0 (SfnKEYBOARDCORRECTIONCALLOUT.c)
 *     SfnOUTDWORDINDWORD @ 0x1C021B0E0 (SfnOUTDWORDINDWORD.c)
 *     SfnOUTLPSCROLLBARINFO @ 0x1C021B4B0 (SfnOUTLPSCROLLBARINFO.c)
 *     SfnPOPTINLPUINT @ 0x1C021B900 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C021BDC0 (SfnPOUTLPINT.c)
 *     SfnSENTDDEMSG @ 0x1C021C380 (SfnSENTDDEMSG.c)
 *     SfnTOUCH @ 0x1C021C780 (SfnTOUCH.c)
 *     SfnTOUCHHITTESTING @ 0x1C021CAD0 (SfnTOUCHHITTESTING.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C021CF30 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C021D104 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C021D270 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C021D3E4 (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C021D5D0 (fnHkOPTINLPEVENTMSG.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C021D838 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDelegateThread @ 0x1C021D9A8 (xxxClientCallDelegateThread.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C021DCE0 (xxxClientCallLocalMouseHooks.c)
 *     xxxClientCharToWchar @ 0x1C021DE3C (xxxClientCharToWchar.c)
 *     xxxClientCopyDDEIn1 @ 0x1C021DF5C (xxxClientCopyDDEIn1.c)
 *     xxxClientCopyDDEOut1 @ 0x1C021E414 (xxxClientCopyDDEOut1.c)
 *     xxxClientFindMnemChar @ 0x1C021E7C4 (xxxClientFindMnemChar.c)
 *     xxxClientFreeDDEHandle @ 0x1C021EA4C (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEFlags @ 0x1C021EB6C (xxxClientGetDDEFlags.c)
 *     xxxClientGetDDEHookData @ 0x1C021EC8C (xxxClientGetDDEHookData.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021EE84 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F2E8 (xxxClientPSMTextOut.c)
 *     xxxClientRimDevCallback @ 0x1C021F670 (xxxClientRimDevCallback.c)
 *     xxxClientUpdateDpi @ 0x1C021F7FC (xxxClientUpdateDpi.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

ReleaseAndReacquirePerObjectLocks *__fastcall ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
        ReleaseAndReacquirePerObjectLocks *this,
        __int64 a2,
        __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax

  *(_BYTE *)this = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  *(_BYTE *)this = *(_BYTE *)(v5 + 1480);
  *(_BYTE *)(v5 + 1480) = 0;
  if ( (*(_BYTE *)this & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v5 + 384));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  return this;
}
