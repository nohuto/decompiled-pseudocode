/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C0133740
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01428E0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1C0161070 (ApiSetEditionAllocThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::AddThreadPointerHookData(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        _WORD *a5,
        int a6,
        struct tagINPUTDEST *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rdi
  HWND WindowHandle; // rax
  CInpLockGuard *v20[6]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v21[192]; // [rsp+50h] [rbp-F8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v20, (struct CInpLockGuard *)(a1 + 56), a5);
  v14 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v15 = 0;
  if ( a5 )
    v15 = a5[8];
  if ( a3 != v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  CInputDest::CInputDest((CInputDest *)v21, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v16 = ApiSetEditionAllocThreadPointerData();
    v17 = v16;
    if ( v16 )
    {
      *(_WORD *)(v16 + 16) = a3;
      *(_DWORD *)(v16 + 20) = a4;
      *(_QWORD *)(v16 + 24) = a5;
      *(_DWORD *)(v16 + 32) = a6;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v21);
      *(_DWORD *)(v17 + 48) &= ~1u;
      *(_QWORD *)(v17 + 40) = WindowHandle;
      CTouchProcessor::ReferenceMsgData(a1, a5, 5LL);
      *(_QWORD *)(a2 + 24) = v17;
      v14 = 1;
    }
  }
  CInputDest::SetEmpty((CInputDest *)v21);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v20);
  return v14;
}
