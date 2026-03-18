/*
 * XREFs of HMValidateHandle @ 0x1C0015A84
 * Callers:
 *     NtUserGetRawInputData @ 0x1C0005070 (NtUserGetRawInputData.c)
 *     _MapDesktopObject @ 0x1C0012750 (_MapDesktopObject.c)
 *     NtUserQueryInputContext @ 0x1C00127C0 (NtUserQueryInputContext.c)
 *     NtUserGetIconSize @ 0x1C0012860 (NtUserGetIconSize.c)
 *     NtUserDrawIconEx @ 0x1C00134C0 (NtUserDrawIconEx.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00140D0 (NtUserEndDeferWindowPosEx.c)
 *     NtUserDestroyCursor @ 0x1C0014430 (NtUserDestroyCursor.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00144C0 (NtUserDeferWindowPosAndBand.c)
 *     NtUserSetCursorIconData @ 0x1C0014770 (NtUserSetCursorIconData.c)
 *     _SetCursorIconData @ 0x1C0014A20 (_SetCursorIconData.c)
 *     NtUserSetCursor @ 0x1C0015220 (NtUserSetCursor.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0015280 (NtUserFindExistingCursorIcon.c)
 *     NtUserGetIconInfo @ 0x1C0015860 (NtUserGetIconInfo.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0041530 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     fnHkINLPMSG @ 0x1C00439D0 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserUnhookWinEvent @ 0x1C00D7580 (NtUserUnhookWinEvent.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C00D7AC0 (NtUserUnhookWindowsHookEx.c)
 *     NtUserTranslateAccelerator @ 0x1C00EC5A0 (NtUserTranslateAccelerator.c)
 *     NtUserCopyAcceleratorTable @ 0x1C00EE8E0 (NtUserCopyAcceleratorTable.c)
 *     NtUserUpdateInputContext @ 0x1C00F9A20 (NtUserUpdateInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C00FD6D0 (NtUserAssociateInputContext.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C0109CA0 (NtUserDestroyAcceleratorTable.c)
 *     _DuplicateCursor @ 0x1C0109EE8 (_DuplicateCursor.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C012EDC0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0130310 (NtUserGetCursorFrameInfo.c)
 *     NtUserDestroyInputContext @ 0x1C01303E0 (NtUserDestroyInputContext.c)
 *     NtUserCreateLocalMemHandle @ 0x1C0134BA0 (NtUserCreateLocalMemHandle.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01B25B4 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01D3110 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C01D8F50 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C01DFC30 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C01E0A58 (fnHkOPTINLPEVENTMSG.c)
 *     NtUserDragObject @ 0x1C01ECD30 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C01ED0F0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C01EE510 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C01EE650 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C01EF8A0 (NtUserGetRawInputBuffer.c)
 *     NtUserGetTouchInputInfo @ 0x1C01EFEF0 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C01F0030 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C01F1D30 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C01F3D60 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C01F49C0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C01F4D50 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C01F4FA0 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C01F59B0 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C01F70F0 (NtUserUserHandleGrantAccess.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0205EA8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 v6; // rsi
  __int64 v7; // r14
  char v8; // al
  struct _KTHREAD *v9; // r14
  __int64 v10; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetThreadWin32Thread(CurrentThread);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v6 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v7 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2])) >> 5);
    if ( (WORD1(a1) == *(_WORD *)(v6 + 26) || WORD1(a1) == 0xFFFF || !WORD1(a1) && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v6 + 25) & 1) == 0 )
    {
      v8 = *(_BYTE *)(v6 + 24);
      if ( v8 == a2 || a2 == -1 && v8 )
        v3 = *(_QWORD *)(gpKernelHandleTable + 8 * v7);
    }
  }
  v9 = KeGetCurrentThread();
  v10 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v9);
    if ( ThreadWin32Thread )
      v10 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v10 + 480) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v3 = 0LL;
  }
  else
  {
    v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( v3 )
    return v3;
  switch ( a2 )
  {
    case 1:
      v13 = 1400LL;
      break;
    case 2:
      v13 = 1401LL;
      break;
    case 3:
      v13 = 1402LL;
      break;
    case 4:
      v13 = 1405LL;
      break;
    case 5:
      v13 = 1404LL;
      break;
    case 8:
      v13 = 1403LL;
      break;
    default:
      v13 = 6LL;
      break;
  }
  UserSetLastError(v13);
  return 0LL;
}
