/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00702B8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C002F0E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C002F22C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003243C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x1C0070394 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0083640 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C008893C (ApiSetEditionPostEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CInputDest *__fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        CInputDest *a2,
        CInputDest *a3,
        _DWORD *a4)
{
  __int64 v6; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // eax
  bool v13; // zf
  char v15; // al
  struct tagTHREADINFO *PtiFromInputDest; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _OWORD v26[11]; // [rsp+30h] [rbp-C8h] BYREF

  v6 = 1LL;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2736), 1, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, a2, a3);
  if ( a4[4] != 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2, a3);
  CInputDest::CInputDest(a2, (const struct CInputDest *)(a1 + 2552));
  CInputDest::GetThreadInfo((CInputDest *)(a1 + 2552));
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v10 )
  {
    if ( v10 == ThreadInfo )
      goto LABEL_7;
    goto LABEL_12;
  }
  if ( ThreadInfo )
  {
LABEL_12:
    v15 = 0;
    goto LABEL_15;
  }
  v15 = CInputDest::operator==((unsigned int *)(a1 + 2552), (__int64)a3, v11);
LABEL_15:
  if ( !v15 )
  {
    PtiFromInputDest = (struct tagTHREADINFO *)anonymous_namespace_::GetPtiFromInputDest((__int64)a3, 2);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, PtiFromInputDest, 0);
  }
LABEL_7:
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 88LL) & 2) != 0 )
  {
    v17 = *((_OWORD *)a2 + 1);
    v26[0] = *(_OWORD *)a2;
    v18 = *((_OWORD *)a2 + 2);
    v26[1] = v17;
    v19 = *((_OWORD *)a2 + 3);
    v26[2] = v18;
    v20 = *((_OWORD *)a2 + 4);
    v26[3] = v19;
    v21 = *((_OWORD *)a2 + 5);
    v26[4] = v20;
    v22 = *((_OWORD *)a2 + 6);
    v26[5] = v21;
    v23 = *((_OWORD *)a2 + 8);
    v26[6] = v22;
    v26[7] = *((_OWORD *)a2 + 7);
    v24 = *((_OWORD *)a2 + 9);
    v26[8] = v23;
    v25 = *((_OWORD *)a2 + 10);
    v26[9] = v24;
    v26[10] = v25;
    ApiSetEditionPostEventMessage((unsigned int)v26, 2, 0, 0, 0LL);
  }
  v12 = ~(unsigned int)CMouseProcessor::CButtonEvent::GetHardwareButton(a4);
  v13 = (v12 & *(_DWORD *)(a1 + 2544)) == 0;
  *(_DWORD *)(a1 + 2544) &= v12;
  if ( v13 )
  {
    CInputDest::SetEmpty((CInputDest *)(a1 + 2552));
    _InterlockedExchange((volatile __int32 *)(a1 + 2736), 0);
  }
  return a2;
}
