/*
 * XREFs of HMValidateHandleNoSecure @ 0x1C0031BAC
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C002F4CC (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z @ 0x1C00AD460 (-GetInputProcessContext@CTouchProcessor@@AEAAKPEAX@Z.c)
 *     GetWorkspaceId @ 0x1C00EB990 (GetWorkspaceId.c)
 *     GetPreparsedData @ 0x1C011485C (GetPreparsedData.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0130CE0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0131014 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0131148 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01363BC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01378E0 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C013DEA8 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C013F5AC (-IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C013F628 (-IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C0140C70 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInfoNode@@_KIKHH@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0141C10 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0146F48 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C014B060 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C014B724 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAXHHEGGGPEAX@Z @ 0x1C014C2F0 (-ForwardInputToISM@CKeyboardProcessor@@SAXHHEGGGPEAX@Z.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C014CD70 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     GetHMonitorFromPointerInfo @ 0x1C01510D0 (GetHMonitorFromPointerInfo.c)
 *     _GetDeviceRects @ 0x1C0151940 (_GetDeviceRects.c)
 *     _IsPseudoDevice @ 0x1C01519B0 (_IsPseudoDevice.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0152E34 (UserDeactivateMITInputProcessing.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x1C015611C (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 *     SynthesizeMitTouchInput @ 0x1C0156248 (SynthesizeMitTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoSecure(unsigned __int64 a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // r15
  unsigned __int64 v7; // rdi
  char *v8; // rsi
  __int64 v9; // r14

  v4 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v6 = gpKernelHandleTable;
    v7 = a1 >> 16;
    v8 = (char *)qword_1C01CBA58 + (unsigned int)(v5 * dword_1C01CBA60);
    v9 = 3 * ((__int64)(unsigned int)(v5 * dword_1C01CBA60) >> 5);
    if ( ((_WORD)v7 == *((_WORD *)v8 + 13) || (_WORD)v7 == 0xFFFF || !(_WORD)v7 && PsGetCurrentProcessWow64Process(v5))
      && (v8[25] & 1) == 0
      && v8[24] == a2 )
    {
      return v6[v9];
    }
  }
  return v4;
}
