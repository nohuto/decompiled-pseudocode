/*
 * XREFs of ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1C0133490
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01428E0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z @ 0x1C01430A0 (-SetDelegateAction@CTouchProcessor@@AEAAX_KW4tagDCPACTION@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146784 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C0147CDC (IsPointerInputMessageWithState.c)
 *     ApiSetEditionAllocAndLinkThreadPointerData @ 0x1C0160FBC (ApiSetEditionAllocAndLinkThreadPointerData.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C0161B34 (ApiSetEditionFindThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall CTouchProcessor::AddThreadPointerData(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        int a4,
        void *a5,
        unsigned int a6,
        struct tagINPUTDEST *a7,
        int a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  BOOL v19; // edi
  int v20; // ecx
  __int64 ThreadPointerData; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  void *v25; // rdx
  int v26; // r9d
  int v27; // r9d
  __int16 v28; // r10
  int v29; // r9d
  CInpLockGuard *v31[6]; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v32[192]; // [rsp+60h] [rbp-108h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x6Cu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v31, (struct CInpLockGuard *)(a1 + 56), a5);
  CInputDest::CInputDest((CInputDest *)v32, a7);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  v15 = 0;
  if ( a5 )
    v15 = *((_WORD *)a5 + 8);
  if ( a3 != v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  if ( a6 != 528 && !(unsigned int)IsPointerInputMessageWithState(a6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
  if ( (*((_DWORD *)a5 + 9) & 2) != 0 )
    CTouchProcessor::SetDelegateAction(a1, a5);
  v19 = 1;
  if ( a6 - 578 <= 0xF )
  {
    v20 = 32785;
    if ( _bittest(&v20, a6 - 578) )
      CTouchProcessor::SetDelegateAction(a1, a5);
  }
  ThreadPointerData = ApiSetEditionFindThreadPointerData(a2, a3);
  v24 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v25 = *(void **)(ThreadPointerData + 24);
    if ( v25 == a5 )
    {
      if ( *(_DWORD *)(ThreadPointerData + 20) != a4 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v25, v23);
      v26 = *(_DWORD *)(v24 + 48);
      if ( (v26 & 1) == 0 && a8 )
        *(_DWORD *)(v24 + 48) = v26 | 1;
      *(_DWORD *)(v24 + 32) = a6;
      *(_QWORD *)(v24 + 40) = CInputDest::GetWindowHandle((CInputDest *)v32);
      *(_DWORD *)(v24 + 48) = v27 & 0xFFFFFFF5;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v28 )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x6Du,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      goto LABEL_33;
    }
    CTouchProcessor::UnreferenceMsgData(a1, v25, 4LL);
    *(_QWORD *)(v24 + 24) = 0LL;
  }
  else
  {
    v24 = ApiSetEditionAllocAndLinkThreadPointerData(a2);
  }
  if ( v24 )
  {
    *(_DWORD *)(v24 + 48) &= ~8u;
    *(_WORD *)(v24 + 16) = a3;
    *(_DWORD *)(v24 + 20) = a4;
    *(_QWORD *)(v24 + 24) = a5;
    *(_DWORD *)(v24 + 32) = a6;
    *(_QWORD *)(v24 + 40) = CInputDest::GetWindowHandle((CInputDest *)v32);
    *(_DWORD *)(v24 + 48) = a8 & 1 | v29 & 0xFFFFFFFC;
    CTouchProcessor::ReferenceMsgData(a1, a5, 4LL);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x6Eu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v19 = v24 != 0;
LABEL_33:
  CInputDest::SetEmpty((CInputDest *)v32);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v31);
  return v19;
}
