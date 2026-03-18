/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C002EE8C
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C002EFF8 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     EtwTraceWakePump @ 0x1C002F0B0 (EtwTraceWakePump.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C002F0E8 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C002F248 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0031DA0 (ApiSetEditionUpdateRawMouseMode.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x1C0031DD4 (ApiSetEditionMouseMoveShellResilience.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0031E50 (CoalesceInputSourceMouseMoves.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00323F4 (INPUTDEST_FROM_PWND.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003243C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1C00324D4 (ApiSetEditionWakeThreadForInput.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C00705AC (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4)
{
  __int64 v8; // rsi
  int v9; // edx
  int v10; // edi
  struct tagQ *Queue; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct tagQ *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r13
  const struct tagLOGICALPOINT *v18; // r8
  __int64 v19; // r12
  __int64 PtiFromInputDest; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _OWORD *v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _OWORD v36[11]; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v37[176]; // [rsp+E0h] [rbp-D8h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v8 = *(_QWORD *)a4;
  v9 = 4;
  if ( *(_DWORD *)(v8 + 124) != 1 )
    v9 = 0;
  v10 = v9 | 1;
  if ( (*(_DWORD *)(v8 + 88) & 4) == 0 )
    v10 = v9;
  Queue = (struct tagQ *)CInputDest::GetQueue(a2, 0LL);
  v15 = Queue;
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v8 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    goto LABEL_21;
  }
  CoalesceInputSourceMouseMoves(Queue);
  if ( *((_DWORD *)a2 + 21) == 2 )
    v16 = *((_QWORD *)a2 + 9);
  else
    v16 = 0LL;
  ApiSetEditionMouseMoveShellResilience(v16);
  v17 = CInputDest::GetQueue(a2, 0LL);
  if ( v17 )
    *(_QWORD *)(v17 + 88) = anonymous_namespace_::GetPtiFromInputDest(a2, 2LL);
  ApiSetEditionUpdateRawMouseMode(v15);
  QHelper::SetMouseMovePoint(a2, a3, v18);
  if ( *((_DWORD *)a2 + 21) == 2 )
    v19 = *((_QWORD *)a2 + 9);
  else
    v19 = 0LL;
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 0LL);
  EtwTraceWakePump(PtiFromInputDest, v19, 512LL);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v10 |= 2u;
    goto LABEL_21;
  }
  if ( (v10 & 1) != 0 )
  {
LABEL_21:
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, v8, a3, v10);
    return;
  }
  v21 = CInputDest::GetQueue(a2, 0LL);
  if ( v21 )
    *(_DWORD *)(v21 + 388) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v22 = *((_QWORD *)v15 + 17);
  if ( v22 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v22 + 16)) & 0x2000000000000LL) != 0 )
  {
    v23 = (_OWORD *)INPUTDEST_FROM_PWND(v37, *((_QWORD *)v15 + 17));
    v24 = v23[1];
    v36[0] = *v23;
    v25 = v23[2];
    v36[1] = v24;
    v26 = v23[3];
    v36[2] = v25;
    v27 = v23[4];
    v36[3] = v26;
    v28 = v23[5];
    v36[4] = v27;
    v29 = v23[6];
    v36[5] = v28;
    v30 = v23[8];
    v36[6] = v29;
    v36[7] = v23[7];
    v31 = v23[9];
    v36[8] = v30;
    v32 = v23[10];
    v36[9] = v31;
    v36[10] = v32;
    if ( !(unsigned __int8)CInputDest::operator==(a2, v36) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v35);
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, v8, a3, 0);
  }
}
