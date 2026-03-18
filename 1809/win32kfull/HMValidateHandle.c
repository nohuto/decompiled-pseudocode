/*
 * XREFs of HMValidateHandle @ 0x1C006CDAC
 * Callers:
 *     NtUserGetRawInputData @ 0x1C0002D70 (NtUserGetRawInputData.c)
 *     fnHkINLPMSG @ 0x1C0016960 (fnHkINLPMSG.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0029C40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserFindExistingCursorIcon @ 0x1C006AEE0 (NtUserFindExistingCursorIcon.c)
 *     NtUserSetCursor @ 0x1C006C810 (NtUserSetCursor.c)
 *     NtUserSetCursorIconData @ 0x1C006C880 (NtUserSetCursorIconData.c)
 *     NtUserGetIconInfo @ 0x1C006CB50 (NtUserGetIconInfo.c)
 *     NtUserDestroyCursor @ 0x1C006D410 (NtUserDestroyCursor.c)
 *     NtUserDrawIconEx @ 0x1C006D5B0 (NtUserDrawIconEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C006DF00 (NtUserDeferWindowPosAndBand.c)
 *     _MapDesktopObject @ 0x1C00B1DC0 (_MapDesktopObject.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C00B5210 (NtUserUnhookWindowsHookEx.c)
 *     NtUserUnhookWinEvent @ 0x1C00B6960 (NtUserUnhookWinEvent.c)
 *     NtUserCopyAcceleratorTable @ 0x1C0106FB0 (NtUserCopyAcceleratorTable.c)
 *     NtUserTranslateAccelerator @ 0x1C01072C0 (NtUserTranslateAccelerator.c)
 *     NtUserGetIconSize @ 0x1C010ABD0 (NtUserGetIconSize.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C0111960 (NtUserEndDeferWindowPosEx.c)
 *     NtUserUpdateInputContext @ 0x1C0116570 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x1C0117EC0 (NtUserQueryInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C011A220 (NtUserAssociateInputContext.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C011B9D0 (NtUserGetRequiredCursorSizes.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0122D00 (NtUserGetCursorFrameInfo.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C01257E0 (NtUserDestroyAcceleratorTable.c)
 *     NtUserCreateLocalMemHandle @ 0x1C0129E10 (NtUserCreateLocalMemHandle.c)
 *     NtUserDestroyInputContext @ 0x1C014FD40 (NtUserDestroyInputContext.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01D4CB8 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01D699C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F7B30 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C01FE160 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C02054B0 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C02063B0 (fnHkOPTINLPEVENTMSG.c)
 *     NtUserDragObject @ 0x1C0213060 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C0213480 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C0214A60 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C0214BC0 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C02165D0 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0216950 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C0217180 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C02172E0 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C02192B0 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C021B490 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C021C140 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C021C530 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C021C7D0 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C021D300 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C021EC60 (NtUserUserHandleGrantAccess.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022EFE0 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall HMValidateHandle(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  char v4; // di
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r14
  char v10; // al
  struct _KTHREAD *v11; // r14
  __int64 v12; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
    PsGetThreadWin32Thread(CurrentThread);
  v7 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v6 = *((_QWORD *)&gSharedInfo + 1);
    v8 = v6 + (unsigned int)(unsigned __int16)a1 * *((_DWORD *)&gSharedInfo + 4);
    v9 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * *((_DWORD *)&gSharedInfo + 4)) >> 5);
    if ( WORD1(a1) == *(_WORD *)(v8 + 26)
      || (v7 = 0xFFFFLL, WORD1(a1) == 0xFFFF)
      || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL) )
    {
      if ( (*(_BYTE *)(v8 + 25) & 1) == 0 )
      {
        v10 = *(_BYTE *)(v8 + 24);
        if ( v10 == v4 || v4 == -1 && v10 )
          v3 = *(_QWORD *)(gpKernelHandleTable + 8 * v9);
      }
    }
  }
  v11 = KeGetCurrentThread();
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v11);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v12 + 488) & 0x20000000) != 0 )
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
  switch ( v4 )
  {
    case 1:
      v15 = 1400LL;
      break;
    case 2:
      v15 = 1401LL;
      break;
    case 3:
      v15 = 1402LL;
      break;
    case 4:
      v15 = 1405LL;
      break;
    case 5:
      v15 = 1404LL;
      break;
    case 8:
      v15 = 1403LL;
      break;
    default:
      v15 = 6LL;
      break;
  }
  UserSetLastError(v15);
  return 0LL;
}
