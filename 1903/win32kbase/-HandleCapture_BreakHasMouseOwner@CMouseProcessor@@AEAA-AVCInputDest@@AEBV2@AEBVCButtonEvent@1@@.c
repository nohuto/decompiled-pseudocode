/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0043400
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0041208 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0030E4C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0039158 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00392A4 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00434E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C0083FA0 (ApiSetEditionPostEventMessage.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0096590 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        __int64 a2,
        CInputDest *a3,
        __int64 a4)
{
  __int64 v6; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  char v17; // al
  struct tagTHREADINFO *PtiFromInputDest; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  _OWORD v25[7]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-28h]

  v6 = 1LL;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3440), 1, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, a2, a3);
  if ( *(_DWORD *)(a4 + 32) != 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3);
  CInputDest::CInputDest((CInputDest *)a2, (const struct CInputDest *)(a1 + 3312));
  CInputDest::GetThreadInfo((CInputDest *)(a1 + 3312));
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v10 )
  {
    if ( (struct tagTHREADINFO *)v10 == ThreadInfo )
      goto LABEL_7;
    goto LABEL_14;
  }
  if ( ThreadInfo )
  {
LABEL_14:
    v17 = 0;
    goto LABEL_17;
  }
  v17 = CInputDest::operator==((unsigned int *)(a1 + 3312), (__int64)a3, v11);
LABEL_17:
  if ( !v17 )
  {
    PtiFromInputDest = (struct tagTHREADINFO *)anonymous_namespace_::GetPtiFromInputDest((__int64)a3, 2LL, v11);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, PtiFromInputDest, 0);
  }
LABEL_7:
  v12 = *(unsigned int *)(*(_QWORD *)(a4 + 8) + 104LL);
  if ( (v12 & 2) != 0 )
  {
    v19 = *(_OWORD *)(a2 + 16);
    v25[0] = *(_OWORD *)a2;
    v20 = *(_OWORD *)(a2 + 32);
    v25[1] = v19;
    v21 = *(_OWORD *)(a2 + 48);
    v25[2] = v20;
    v22 = *(_OWORD *)(a2 + 64);
    v25[3] = v21;
    v23 = *(_OWORD *)(a2 + 80);
    v25[4] = v22;
    v24 = *(_OWORD *)(a2 + 96);
    v25[5] = v23;
    *(_QWORD *)&v23 = *(_QWORD *)(a2 + 112);
    v25[6] = v24;
    v26 = v23;
    ApiSetEditionPostEventMessage((unsigned int)v25, 2, 0, 0, 0LL);
  }
  v13 = *(_DWORD *)(a4 + 28);
  if ( !v13 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v10, v11);
    v13 = *(_DWORD *)(a4 + 28);
  }
  v14 = ~v13;
  v15 = (v14 & *(_DWORD *)(a1 + 3308)) == 0;
  *(_DWORD *)(a1 + 3308) &= v14;
  if ( v15 )
  {
    CInputDest::SetEmpty((CInputDest *)(a1 + 3312), v10, v11);
    _InterlockedExchange((volatile __int32 *)(a1 + 3440), 0);
  }
  return a2;
}
