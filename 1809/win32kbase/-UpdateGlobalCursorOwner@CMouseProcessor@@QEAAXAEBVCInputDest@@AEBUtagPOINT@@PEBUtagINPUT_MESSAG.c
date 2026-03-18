/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0031EC0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     UpdateGlobalCursorOwner @ 0x1C01518F0 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     EtwTraceWakePump @ 0x1C002F0B0 (EtwTraceWakePump.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0031E50 (CoalesceInputSourceMouseMoves.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00323F4 (INPUTDEST_FROM_PWND.c)
 *     ?OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ @ 0x1C0087D60 (-OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ.c)
 *     ApiSetEditionPostEventMessage @ 0x1C008893C (ApiSetEditionPostEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  _QWORD *v8; // rdi
  struct tagPOINT v9; // rbx
  _QWORD *v10; // rbx
  struct tagQ *v11; // rsi
  __int64 v12; // rbx
  int v13; // edi
  _OWORD *v14; // rax
  int v15; // r9d
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _OWORD v25[11]; // [rsp+30h] [rbp-168h] BYREF
  _BYTE v26[176]; // [rsp+E0h] [rbp-B8h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 21) == 2 )
    v8 = (_QWORD *)*((_QWORD *)a2 + 9);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = *a3;
    v10 = (int)IsEditionUpdateCursorOnMouseMoveSupported() < 0
        ? 0LL
        : (_QWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD))EditionUpdateCursorOnMouseMove)(v8, v9);
    v11 = *(struct tagQ **)(v8[2] + 432LL);
    if ( v11 != gpqCursor )
    {
      if ( gpqCursor )
      {
        if ( *((_QWORD *)gpqCursor + 13) )
        {
          CoalesceInputSourceMouseMoves(gpqCursor, a4);
          EtwTraceWakePump(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 0LL, 0);
          *((_DWORD *)gpqCursor + 97) |= 0x20u;
          SetWakeBit(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 2LL);
        }
        if ( v10 && *v10 != *v8 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
            PostIAMShellHookMessageEx(v8[3], 39LL, *v8);
          v12 = v10[3];
          v13 = *(_DWORD *)(v12 + 48);
          if ( (v13 & 0x5C0) != 0 )
          {
            v14 = (_OWORD *)INPUTDEST_FROM_PWND(v26, *(_QWORD *)(v12 + 184));
            v15 = *(_DWORD *)(v12 + 192);
            v16 = v14[1];
            v25[0] = *v14;
            v17 = v14[2];
            v25[1] = v16;
            v18 = v14[3];
            v25[2] = v17;
            v19 = v14[4];
            v25[3] = v18;
            v20 = v14[5];
            v25[4] = v19;
            v21 = v14[6];
            v25[5] = v20;
            v22 = v14[8];
            v25[6] = v21;
            v25[7] = v14[7];
            v23 = v14[9];
            v25[8] = v22;
            v24 = v14[10];
            v25[9] = v23;
            v25[10] = v24;
            ApiSetEditionPostEventMessage((unsigned int)v25, 11, v13, v15, 1472LL);
            *(_DWORD *)(v12 + 48) &= 0xFFFFFA3F;
          }
        }
      }
      gpqCursor = v11;
      zzzUpdateCursorImage();
      if ( CMouseProcessor::UpdatePointerGraphicDevice::OnGlobalCursorOwnerComputed((CMouseProcessor *)((char *)this + 2864))
        && (int)IsSetPointerSupported() >= 0 )
      {
        SetPointer(1LL);
      }
    }
  }
}
