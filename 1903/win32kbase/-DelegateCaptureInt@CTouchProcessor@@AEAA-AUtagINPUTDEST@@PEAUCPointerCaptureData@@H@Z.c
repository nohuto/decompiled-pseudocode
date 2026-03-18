/*
 * XREFs of ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0165214
 * Callers:
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0164EC4 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C01650D0 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C0171F2C (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCaptureInt(__int64 a1, _OWORD *a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0

  memset(a2, 0, 0x78uLL);
  if ( *(struct _KTHREAD **)(a1 + 80) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  v11 = *(unsigned int *)(a3 + 320);
  if ( (v11 & 4) != 0 || (v11 & 8) != 0 )
  {
    if ( a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v11, v10);
  }
  else
  {
    v12 = (-(__int64)(*(_DWORD *)(a3 + 40) != 0) & 0xFFFFFFFFFFFFFF70uLL) + 184;
    v13 = *(_OWORD *)(v12 + a3 + 16);
    *a2 = *(_OWORD *)(v12 + a3);
    v14 = *(_OWORD *)(v12 + a3 + 32);
    a2[1] = v13;
    v15 = *(_OWORD *)(v12 + a3 + 48);
    a2[2] = v14;
    v16 = *(_OWORD *)(v12 + a3 + 64);
    a2[3] = v15;
    v17 = *(_OWORD *)(v12 + a3 + 80);
    a2[4] = v16;
    v18 = *(_OWORD *)(v12 + a3 + 96);
    a2[5] = v17;
    *(_QWORD *)&v17 = *(_QWORD *)(v12 + a3 + 112);
    a2[6] = v18;
    *((_QWORD *)a2 + 14) = v17;
    if ( a4 )
      CTouchProcessor::SetDelegateActionInt(v12, a3, 4LL);
    else
      *(_DWORD *)(a3 + 320) = v11 | 4;
  }
  return a2;
}
