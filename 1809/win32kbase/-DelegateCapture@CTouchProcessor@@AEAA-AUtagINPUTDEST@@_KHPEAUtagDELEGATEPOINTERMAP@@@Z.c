/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C0136B10
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C0137018 (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0136EF4 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KTHREAD *v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  const struct tagINPUTDEST *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  bool v30; // zf
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  _OWORD v45[11]; // [rsp+20h] [rbp-E0h] BYREF
  char v46; // [rsp+D0h] [rbp-30h]
  _BYTE v47[176]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v48[24]; // [rsp+190h] [rbp+90h] BYREF

  memset(v45, 0, sizeof(v45));
  v10 = *(struct _KTHREAD **)(a1 + 64);
  v11 = 0;
  v46 = 0;
  if ( v10 != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, v9);
    v10 = *(struct _KTHREAD **)(a1 + 64);
  }
  if ( v10 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, v9);
  v12 = *(_QWORD *)(a3 + 40);
  if ( v12 )
  {
    *(_WORD *)a5 = *(_WORD *)(v12 + 20);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(v12 + 24);
    v22 = (const struct tagINPUTDEST *)CTouchProcessor::DelegateCaptureInt(a1, v47, v12, 1LL);
    CInputDest::CInputDest((CInputDest *)v48, v22);
    CInputDest::operator=((__int64)v45, v48);
    CInputDest::SetEmpty((CInputDest *)v48);
    v23 = v45[1];
    *(_OWORD *)(a5 + 8) = v45[0];
    v24 = v45[2];
    *(_OWORD *)(a5 + 24) = v23;
    v25 = v45[3];
    *(_OWORD *)(a5 + 40) = v24;
    v26 = v45[4];
    *(_OWORD *)(a5 + 56) = v25;
    v27 = v45[5];
    *(_OWORD *)(a5 + 72) = v26;
    v28 = v45[6];
    *(_OWORD *)(a5 + 88) = v27;
    v29 = v45[8];
    *(_OWORD *)(a5 + 104) = v28;
    v30 = DWORD1(v45[5]) == 0;
    *(_OWORD *)(a5 + 120) = v45[7];
    LOBYTE(v11) = !v30;
    v31 = v45[9];
    *(_DWORD *)(a5 + 184) = v11;
    *(_OWORD *)(a5 + 136) = v29;
    v32 = v45[10];
    *(_OWORD *)(a5 + 152) = v31;
    v33 = v45[0];
    *(_OWORD *)(a5 + 168) = v32;
    v34 = v45[1];
    *a2 = v33;
    v35 = v45[2];
    a2[1] = v34;
    v36 = v45[3];
    a2[2] = v35;
    v37 = v45[4];
    a2[3] = v36;
    v38 = v45[5];
    a2[4] = v37;
    v39 = v45[6];
    a2[5] = v38;
    v40 = v45[7];
    a2[6] = v39;
    v41 = v45[8];
    a2[7] = v40;
    v42 = v45[9];
    a2[8] = v41;
    v43 = v45[10];
    a2[9] = v42;
    a2[10] = v43;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v8, 0LL);
    v13 = v45[1];
    *a2 = v45[0];
    v14 = v45[2];
    a2[1] = v13;
    v15 = v45[3];
    a2[2] = v14;
    v16 = v45[4];
    a2[3] = v15;
    v17 = v45[5];
    a2[4] = v16;
    v18 = v45[6];
    a2[5] = v17;
    v19 = v45[8];
    a2[6] = v18;
    a2[7] = v45[7];
    v20 = v45[9];
    a2[8] = v19;
    v21 = v45[10];
    a2[9] = v20;
    a2[10] = v21;
  }
  CInputDest::SetEmpty((CInputDest *)v45);
  return a2;
}
