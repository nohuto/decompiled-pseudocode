/*
 * XREFs of ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1C015E960
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C016F5B8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionAllocThreadPointerData @ 0x1C01990A8 (ApiSetEditionAllocThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::AddThreadPointerHookData(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        int a4,
        __int64 a5,
        int a6,
        struct tagINPUTDEST *a7)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int16 v14; // ax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  HWND WindowHandle; // rax
  __int64 v20; // rcx
  CInpLockGuard *v22; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v23[128]; // [rsp+30h] [rbp-B8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v22, (struct CInpLockGuard *)(a1 + 48));
  v13 = 0;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  v14 = 0;
  if ( a5 )
    v14 = *(_WORD *)(a5 + 16);
  if ( a3 != v14 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  CInputDest::CInputDest((CInputDest *)v23, a7);
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v17 = ApiSetEditionAllocThreadPointerData();
    v18 = v17;
    if ( v17 )
    {
      *(_WORD *)(v17 + 16) = a3;
      *(_DWORD *)(v17 + 20) = a4;
      *(_QWORD *)(v17 + 24) = a5;
      *(_DWORD *)(v17 + 32) = a6;
      WindowHandle = CInputDest::GetWindowHandle((CInputDest *)v23);
      *(_DWORD *)(v18 + 48) &= ~1u;
      *(_QWORD *)(v18 + 40) = WindowHandle;
      CTouchProcessor::ReferenceMsgData(v20, a5, 5LL);
      *(_QWORD *)(a2 + 24) = v18;
      v13 = 1;
    }
  }
  CInputDest::SetEmpty((CInputDest *)v23, v15, v16);
  CInpLockGuard::UnLock(v22);
  return v13;
}
