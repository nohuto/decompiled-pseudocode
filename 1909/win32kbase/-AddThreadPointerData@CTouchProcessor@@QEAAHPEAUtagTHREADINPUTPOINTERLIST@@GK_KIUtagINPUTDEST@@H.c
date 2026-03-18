/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C015E650
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C016F5B8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0173520 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0174AEC (IsPointerInputMessageWithState.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C0198FD0 (ApiSetEditionAllocAndLinkThreadPointerData.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C0199DD8 (ApiSetEditionFindThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::AddThreadPointerData(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        struct tagINPUTDEST *a7,
        int a8)
{
  __int64 v10; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int16 v15; // ax
  __int64 v16; // rax
  BOOL v17; // edi
  int v18; // ecx
  __int64 v19; // rax
  __int64 ThreadPointerData; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rdx
  int v25; // r9d
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int16 v29; // r10
  int v30; // r9d
  __int64 v31; // rcx
  CInpLockGuard *v33; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v34[128]; // [rsp+40h] [rbp-C8h] BYREF

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      112,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v33, (struct CInpLockGuard *)(a1 + 48));
  CInputDest::CInputDest((CInputDest *)v34, a7);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  v15 = 0;
  if ( a5 )
    v15 = *(_WORD *)(a5 + 16);
  if ( a3 != v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  if ( (*(_DWORD *)(a5 + 36) & 2) != 0 )
  {
    if ( *(struct _KTHREAD **)(a1 + 80) != KeGetCurrentThread() )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    v16 = *(_QWORD *)(a5 + 40);
    if ( v16 )
      *(_DWORD *)(v16 + 320) |= 2u;
  }
  v17 = 1;
  if ( a6 - 578 <= 0xF )
  {
    v18 = 32785;
    if ( _bittest(&v18, a6 - 578) )
    {
      if ( *(struct _KTHREAD **)(a1 + 80) != KeGetCurrentThread() )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(32785LL, v12, v14);
      v19 = *(_QWORD *)(a5 + 40);
      if ( v19 )
        *(_DWORD *)(v19 + 320) |= 1u;
    }
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(v10, a3, v14);
  v23 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v24 = *(_QWORD *)(ThreadPointerData + 24);
    if ( v24 == a5 )
    {
      if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v24, v22);
      v25 = *(_DWORD *)(v23 + 48);
      if ( (v25 & 1) == 0 && a8 )
        *(_DWORD *)(v23 + 48) = v25 | 1;
      *(_DWORD *)(v23 + 32) = a6;
      *(_QWORD *)(v23 + 40) = CInputDest::GetWindowHandle((CInputDest *)v34);
      *(_DWORD *)(v23 + 48) = v26 & 0xFFFFFFF5;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != v29 )
      {
        LOBYTE(v27) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v27,
          7,
          113,
          (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      }
      goto LABEL_42;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v24, 4LL);
    *(_QWORD *)(v23 + 24) = 0LL;
  }
  else
  {
    v23 = ApiSetEditionAllocAndLinkThreadPointerData(v10);
  }
  if ( v23 )
  {
    *(_DWORD *)(v23 + 48) &= ~8u;
    *(_WORD *)(v23 + 16) = a3;
    *(_DWORD *)(v23 + 20) = a4;
    *(_QWORD *)(v23 + 24) = a5;
    *(_DWORD *)(v23 + 32) = a6;
    *(_QWORD *)(v23 + 40) = CInputDest::GetWindowHandle((CInputDest *)v34);
    *(_DWORD *)(v23 + 48) = a8 & 1 | v30 & 0xFFFFFFFC;
    CTouchProcessor::ReferenceMsgData(v31, a5, 4LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v27) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v27,
      7,
      114,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  v17 = v23 != 0;
LABEL_42:
  CInputDest::SetEmpty((CInputDest *)v34, v27, v28);
  CInpLockGuard::UnLock(v33);
  return v17;
}
