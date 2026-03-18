/*
 * XREFs of HMValidateHandle @ 0x1C0024F2C
 * Callers:
 *     NtUserGetRawInputData @ 0x1C0005480 (NtUserGetRawInputData.c)
 *     NtUserCopyAcceleratorTable @ 0x1C0021320 (NtUserCopyAcceleratorTable.c)
 *     NtUserQueryInputContext @ 0x1C0021770 (NtUserQueryInputContext.c)
 *     _MapDesktopObject @ 0x1C0021FD0 (_MapDesktopObject.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00224F0 (NtUserEndDeferWindowPosEx.c)
 *     NtUserGetIconSize @ 0x1C00225E0 (NtUserGetIconSize.c)
 *     NtUserDrawIconEx @ 0x1C0022EF0 (NtUserDrawIconEx.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0023250 (NtUserDeferWindowPosAndBand.c)
 *     NtUserDestroyCursor @ 0x1C00234B0 (NtUserDestroyCursor.c)
 *     NtUserSetCursor @ 0x1C0023550 (NtUserSetCursor.c)
 *     NtUserSetCursorIconData @ 0x1C0024370 (NtUserSetCursorIconData.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002464C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     NtUserGetIconInfo @ 0x1C0024CC0 (NtUserGetIconInfo.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0026C20 (NtUserFindExistingCursorIcon.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     xxxInterSendMsgEx @ 0x1C00412E0 (xxxInterSendMsgEx.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00451E0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     fnHkINLPMSG @ 0x1C0047160 (fnHkINLPMSG.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C0054EC0 (NtUserUnhookWindowsHookEx.c)
 *     NtUserUnhookWinEvent @ 0x1C0056FF0 (NtUserUnhookWinEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserTranslateAccelerator @ 0x1C00EB720 (NtUserTranslateAccelerator.c)
 *     NtUserUpdateInputContext @ 0x1C00FA220 (NtUserUpdateInputContext.c)
 *     NtUserAssociateInputContext @ 0x1C00FA320 (NtUserAssociateInputContext.c)
 *     NtUserGetRequiredCursorSizes @ 0x1C00FDFD0 (NtUserGetRequiredCursorSizes.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0106160 (NtUserGetCursorFrameInfo.c)
 *     NtUserDestroyAcceleratorTable @ 0x1C010AFC0 (NtUserDestroyAcceleratorTable.c)
 *     NtUserCreateLocalMemHandle @ 0x1C010B630 (NtUserCreateLocalMemHandle.c)
 *     NtUserDestroyInputContext @ 0x1C0156F80 (NtUserDestroyInputContext.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015C85C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01EA31C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C020DC1C (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     SfnGESTURE @ 0x1C02151C0 (SfnGESTURE.c)
 *     SfnTOUCH @ 0x1C021C780 (SfnTOUCH.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C021D5D0 (fnHkOPTINLPEVENTMSG.c)
 *     NtUserDragObject @ 0x1C022A820 (NtUserDragObject.c)
 *     NtUserDrawCaptionTemp @ 0x1C022ACE0 (NtUserDrawCaptionTemp.c)
 *     NtUserGetGestureExtArgs @ 0x1C022C210 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C022C370 (NtUserGetGestureInfo.c)
 *     NtUserGetRawInputBuffer @ 0x1C022DE50 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C022E1D0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserGetTouchInputInfo @ 0x1C022EA10 (NtUserGetTouchInputInfo.c)
 *     NtUserGetTouchValidationStatus @ 0x1C022EB70 (NtUserGetTouchValidationStatus.c)
 *     NtUserLinkDpiCursor @ 0x1C0230AF0 (NtUserLinkDpiCursor.c)
 *     NtUserRegisterEdgy @ 0x1C0232F60 (NtUserRegisterEdgy.c)
 *     NtUserSetCalibrationData @ 0x1C0233CD0 (NtUserSetCalibrationData.c)
 *     NtUserSetCursorContents @ 0x1C0234010 (NtUserSetCursorContents.c)
 *     NtUserSetDisplayMapping @ 0x1C02342A0 (NtUserSetDisplayMapping.c)
 *     NtUserSetSystemCursor @ 0x1C0234ED0 (NtUserSetSystemCursor.c)
 *     NtUserUserHandleGrantAccess @ 0x1C02369A0 (NtUserUserHandleGrantAccess.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247108 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall HMValidateHandle(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbx
  __int64 v6; // rdi
  __int64 *v7; // r14
  char v8; // al
  struct _KTHREAD *v9; // r14
  __int64 v10; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetThreadWin32Thread(CurrentThread);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v6 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v7 = (__int64 *)HMPkheFromPhe(v6);
    if ( (WORD1(a1) == *(_WORD *)(v6 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(a1 >> 16))
      && (*(_BYTE *)(v6 + 25) & 1) == 0 )
    {
      v8 = *(_BYTE *)(v6 + 24);
      if ( v8 == a2 || a2 == -1 && v8 )
        v3 = *v7;
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
