/*
 * XREFs of HMValidateHandle @ 0x1C002F96C
 * Callers:
 *     NtUserGetRawInputData @ 0x1C0005480 (NtUserGetRawInputData.c)
 *     _MapDesktopObject @ 0x1C0019980 (_MapDesktopObject.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C002C7E0 (NtUserEndDeferWindowPosEx.c)
 *     NtUserGetIconSize @ 0x1C002CA60 (NtUserGetIconSize.c)
 *     NtUserDrawIconEx @ 0x1C002D7D0 (NtUserDrawIconEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C002DB30 (NtUserDeferWindowPosAndBand.c)
 *     NtUserDestroyCursor @ 0x1C002DD90 (NtUserDestroyCursor.c)
 *     NtUserSetCursor @ 0x1C002DE30 (NtUserSetCursor.c)
 *     NtUserSetCursorIconData @ 0x1C002EDB0 (NtUserSetCursorIconData.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002F08C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     NtUserGetIconInfo @ 0x1C002F700 (NtUserGetIconInfo.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0031660 (NtUserFindExistingCursorIcon.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C00A0510 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00A4400 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     fnHkINLPMSG @ 0x1C00A6380 (fnHkINLPMSG.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C00B4150 (NtUserUnhookWindowsHookEx.c)
 *     NtUserUnhookWinEvent @ 0x1C00B6240 (NtUserUnhookWinEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserCopyAcceleratorTable @ 0x1C010FDE0 (NtUserCopyAcceleratorTable.c)
 *     NtUserTranslateAccelerator @ 0x1C01107E0 (NtUserTranslateAccelerator.c)
 *     NtUserUpdateInputContext @ 0x1C011F540 (NtUserUpdateInputContext.c)
 *     NtUserQueryInputContext @ 0x1C011F640 (NtUserQueryInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C011F6F0 (NtUserAssociateInputContext.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C01238D0 (NtUserGetRequiredCursorSizes.c)
 *     NtUserGetCursorFrameInfo @ 0x1C012B190 (NtUserGetCursorFrameInfo.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C0130470 (NtUserDestroyAcceleratorTable.c)
 *     NtUserCreateLocalMemHandle @ 0x1C0130D40 (NtUserCreateLocalMemHandle.c)
 *     NtUserDestroyInputContext @ 0x1C01561C0 (NtUserDestroyInputContext.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015B8AC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01EA49C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DECC (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C0215700 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C021CCC0 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C021DB10 (fnHkOPTINLPEVENTMSG.c)
 *     NtUserDragObject @ 0x1C022AE40 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C022B300 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C022C830 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C022C990 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C022E470 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C022E7F0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C022F030 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C022F190 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C0231110 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C0233580 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C02342F0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C0234630 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C02348C0 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C02354F0 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C0236FC0 (NtUserUserHandleGrantAccess.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247848 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall HMValidateHandle(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  char v6; // si
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 *v13; // r14
  char v14; // al
  struct _KTHREAD *v15; // r14
  __int64 v16; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
    PsGetThreadWin32Thread(CurrentThread);
  v10 = (unsigned __int16)a1;
  v11 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v12 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)a1 * *((_DWORD *)&gSharedInfo + 4);
    v13 = (__int64 *)HMPkheFromPhe(v12);
    v11 = a1 >> 16;
    if ( (WORD1(a1) == *(_WORD *)(v12 + 26) || WORD1(a1) == 0xFFFF || !WORD1(a1) && PsGetCurrentProcessWow64Process(v11))
      && (*(_BYTE *)(v12 + 25) & 1) == 0 )
    {
      v14 = *(_BYTE *)(v12 + 24);
      if ( v14 == v6 || v6 == -1 && v14 )
        v5 = *v13;
    }
  }
  v15 = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v10, v8, v9) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v15);
    if ( ThreadWin32Thread )
      v16 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v16 + 480) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v5 = 0LL;
  }
  else
  {
    v5 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( v5 )
    return v5;
  switch ( v6 )
  {
    case 1:
      v19 = 1400LL;
      break;
    case 2:
      v19 = 1401LL;
      break;
    case 3:
      v19 = 1402LL;
      break;
    case 4:
      v19 = 1405LL;
      break;
    case 5:
      v19 = 1404LL;
      break;
    case 8:
      v19 = 1403LL;
      break;
    default:
      v19 = 6LL;
      break;
  }
  UserSetLastError(v19);
  return 0LL;
}
