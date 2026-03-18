/*
 * XREFs of ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0136EF4
 * Callers:
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0136B10 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C0136D80 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C01430F8 (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCaptureInt(__int64 a1, _OWORD *a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1

  memset(a2, 0, 0xB0uLL);
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = *(_DWORD *)(a3 + 432);
  if ( (v11 & 4) != 0 || (v11 & 8) != 0 )
  {
    if ( a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  }
  else
  {
    v12 = (_OWORD *)((-(__int64)(*(_DWORD *)(a3 + 40) != 0) & 0xFFFFFFFFFFFFFF38uLL) + a3 + 240);
    v13 = v12[1];
    *a2 = *v12;
    v14 = v12[2];
    a2[1] = v13;
    v15 = v12[3];
    a2[2] = v14;
    v16 = v12[4];
    a2[3] = v15;
    v17 = v12[5];
    a2[4] = v16;
    v18 = v12[6];
    a2[5] = v17;
    v19 = v12[8];
    a2[6] = v18;
    a2[7] = v12[7];
    v20 = v12[9];
    a2[8] = v19;
    v21 = v12[10];
    a2[9] = v20;
    a2[10] = v21;
    if ( a4 )
      CTouchProcessor::SetDelegateActionInt(a1, a3, 4LL);
    else
      *(_DWORD *)(a3 + 432) = v11 | 4;
  }
  return a2;
}
