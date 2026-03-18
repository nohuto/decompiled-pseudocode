/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0083CC4
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00312BC (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     UpdateGlobalCursorOwner @ 0x1C0184CA0 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0030CE0 (INPUTDEST_FROM_PWND.c)
 *     EtwTraceWakePump @ 0x1C0039120 (EtwTraceWakePump.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C00394C0 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionUpdateCursorOnMouseMove @ 0x1C0083E94 (ApiSetEditionUpdateCursorOnMouseMove.c)
 *     ?OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ @ 0x1C0083F40 (-OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ.c)
 *     ApiSetEditionPostEventMessage @ 0x1C0083FA0 (ApiSetEditionPostEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  _QWORD *v8; // rbx
  _QWORD *updated; // rdi
  struct tagQ *v10; // rsi
  __int64 v11; // rbx
  int v12; // edi
  _DWORD *v13; // rax
  int v14; // r9d
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _OWORD v21[7]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-98h]
  _DWORD v23[32]; // [rsp+B0h] [rbp-88h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 23) == 2 )
    v8 = (_QWORD *)*((_QWORD *)a2 + 10);
  else
    v8 = 0LL;
  if ( v8 )
  {
    updated = (_QWORD *)ApiSetEditionUpdateCursorOnMouseMove(v8, *a3);
    v10 = *(struct tagQ **)(v8[2] + 424LL);
    if ( v10 != gpqCursor )
    {
      if ( gpqCursor )
      {
        if ( *((_QWORD *)gpqCursor + 14) )
        {
          CoalesceInputSourceMouseMoves(gpqCursor, a4);
          EtwTraceWakePump(*(_QWORD *)(*((_QWORD *)gpqCursor + 14) + 16LL), 0LL, 0);
          *((_DWORD *)gpqCursor + 99) |= 0x20u;
          SetWakeBit(*(_QWORD *)(*((_QWORD *)gpqCursor + 14) + 16LL), 2LL);
        }
        if ( updated && *updated != *v8 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
            PostIAMShellHookMessageEx(v8[3], 39LL, *v8);
          v11 = updated[3];
          v12 = *(_DWORD *)(v11 + 48);
          if ( (v12 & 0x5C0) != 0 )
          {
            v13 = INPUTDEST_FROM_PWND(v23, *(_QWORD *)(v11 + 184));
            v14 = *(_DWORD *)(v11 + 192);
            v15 = *((_OWORD *)v13 + 1);
            v21[0] = *(_OWORD *)v13;
            v16 = *((_OWORD *)v13 + 2);
            v21[1] = v15;
            v17 = *((_OWORD *)v13 + 3);
            v21[2] = v16;
            v18 = *((_OWORD *)v13 + 4);
            v21[3] = v17;
            v19 = *((_OWORD *)v13 + 5);
            v21[4] = v18;
            v20 = *((_OWORD *)v13 + 6);
            v21[5] = v19;
            *(_QWORD *)&v19 = *((_QWORD *)v13 + 14);
            v21[6] = v20;
            v22 = v19;
            ApiSetEditionPostEventMessage((unsigned int)v21, 11, v12, v14, 1472LL);
            *(_DWORD *)(v11 + 48) &= 0xFFFFFA3F;
          }
        }
      }
      gpqCursor = v10;
      zzzUpdateCursorImage();
      if ( CMouseProcessor::UpdatePointerGraphicDevice::OnGlobalCursorOwnerComputed((CMouseProcessor *)((char *)this + 3568))
        && (int)IsSetPointerSupported() >= 0 )
      {
        SetPointer(1LL);
      }
    }
  }
}
