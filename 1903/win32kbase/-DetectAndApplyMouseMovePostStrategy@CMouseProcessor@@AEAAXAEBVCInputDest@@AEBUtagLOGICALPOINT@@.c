/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0038EB8
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00312BC (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0030CE0 (INPUTDEST_FROM_PWND.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0030E4C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C003904C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     EtwTraceWakePump @ 0x1C0039120 (EtwTraceWakePump.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0039158 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0039248 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00392C0 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0039390 (ApiSetEditionUpdateRawMouseMode.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x1C0039428 (ApiSetEditionMouseMoveShellResilience.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C00394C0 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1C003952C (ApiSetEditionWakeThreadForInput.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0042244 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4)
{
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // edi
  struct tagQ *Queue; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct tagQ *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r15
  const struct tagLOGICALPOINT *v18; // r8
  __int64 v19; // r15
  __int64 PtiFromInputDest; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  const struct CMouseProcessor::CMoveEvent *v24; // rcx
  _DWORD *v25; // rax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  const struct CMouseProcessor::CMoveEvent *v36; // [rsp+30h] [rbp-D0h] BYREF
  struct tagQ *v37; // [rsp+38h] [rbp-C8h] BYREF
  int v38[32]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+E0h] [rbp-20h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  __int128 v43; // [rsp+100h] [rbp+0h]
  __int128 v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+30h]

  v36 = a4;
  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v8 = *((_QWORD *)a4 + 1);
  v9 = 4;
  if ( *(_DWORD *)(v8 + 140) != 1 )
    v9 = 0;
  v10 = v9 | 1;
  if ( (*(_DWORD *)(v8 + 104) & 4) == 0 )
    v10 = v9;
  Queue = (struct tagQ *)CInputDest::GetQueue(a2, 0LL);
  v15 = Queue;
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v8 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    goto LABEL_22;
  }
  CoalesceInputSourceMouseMoves(Queue);
  if ( *((_DWORD *)a2 + 23) == 2 )
    v16 = *((_QWORD *)a2 + 10);
  else
    v16 = 0LL;
  ApiSetEditionMouseMoveShellResilience(v16);
  v17 = CInputDest::GetQueue(a2, 0LL);
  if ( v17 )
    *(_QWORD *)(v17 + 96) = anonymous_namespace_::GetPtiFromInputDest(a2, 2LL);
  ApiSetEditionUpdateRawMouseMode(v15);
  QHelper::SetMouseMovePoint(a2, a3, v18);
  if ( dword_1C020FB50 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x40uLL) )
  {
    *((_QWORD *)&v41 + 1) = 8LL;
    v23 = *((_QWORD *)v36 + 1);
    v37 = v15;
    *((_QWORD *)&v42 + 1) = 8LL;
    v24 = *(const struct CMouseProcessor::CMoveEvent **)(v23 + 80);
    *(_QWORD *)&v41 = &v36;
    *(_QWORD *)&v42 = &v37;
    v36 = v24;
    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E81F4, 0LL, 0LL, 4u, &pData);
  }
  if ( *((_DWORD *)a2 + 23) == 2 )
    v19 = *((_QWORD *)a2 + 10);
  else
    v19 = 0LL;
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 0LL);
  EtwTraceWakePump(PtiFromInputDest, v19, 512LL);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v10 |= 2u;
    goto LABEL_22;
  }
  if ( (v10 & 1) != 0 )
  {
LABEL_22:
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, v8, a3, v10);
    return;
  }
  v21 = CInputDest::GetQueue(a2, 0LL);
  if ( v21 )
    *(_DWORD *)(v21 + 396) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v22 = *((_QWORD *)v15 + 18);
  if ( v22 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v22 + 16)) & 0x2000000000000LL) != 0 )
  {
    v25 = INPUTDEST_FROM_PWND(v38, *((_QWORD *)v15 + 18));
    v26 = *((_OWORD *)v25 + 1);
    pData = *(EVENT_DATA_DESCRIPTOR *)v25;
    v27 = *((_OWORD *)v25 + 2);
    v40 = v26;
    v28 = *((_OWORD *)v25 + 3);
    v41 = v27;
    v29 = *((_OWORD *)v25 + 4);
    v42 = v28;
    v30 = *((_OWORD *)v25 + 5);
    v43 = v29;
    v31 = *((_OWORD *)v25 + 6);
    v44 = v30;
    *(_QWORD *)&v30 = *((_QWORD *)v25 + 14);
    v45 = v31;
    v46 = v30;
    if ( !CInputDest::operator==((unsigned int *)a2, (__int64)&pData, v32) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, v8, a3, 0);
  }
}
