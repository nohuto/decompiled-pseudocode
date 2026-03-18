/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAI@Z @ 0x1C00316A0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00312BC (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0041208 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0192750 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x1C0034984 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z.c)
 *     ApiSetEditionMouseSpeedHitTest @ 0x1C0034BE0 (ApiSetEditionMouseSpeedHitTest.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00434E0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C009C62C (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C009EEAC (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        __int64 a2,
        const struct tagPOINT *a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        int a8,
        unsigned int *a9)
{
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  unsigned int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rdx
  __int64 v28; // r8
  CInputDest *v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  _DWORD v39[3]; // [rsp+44h] [rbp-BCh] BYREF
  _OWORD v40[7]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-40h]
  _BYTE v42[128]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v43[8]; // [rsp+150h] [rbp+50h] BYREF
  _OWORD v44[8]; // [rsp+1D0h] [rbp+D0h] BYREF

  *(struct tagPOINT *)&v39[1] = *a3;
  if ( a9 )
    *a9 = 0;
  if ( (a8 & 1) != 0 )
  {
    CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate((CSpatialProcessor *)a1, 4u, *a3, a5, 0, a7);
    CInputDest::CInputDest((CInputDest *)v43, (const struct CInputDest *)(a1 + 3312));
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3440), 1, 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, v31, v32);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint)(
      a3,
      *a3,
      a4,
      v43);
    v33 = v43[1];
    *(_OWORD *)a2 = v43[0];
    v34 = v43[2];
    *(_OWORD *)(a2 + 16) = v33;
    v35 = v43[3];
    *(_OWORD *)(a2 + 32) = v34;
    v36 = v43[4];
    *(_OWORD *)(a2 + 48) = v35;
    v37 = v43[5];
    *(_OWORD *)(a2 + 64) = v36;
    v38 = v43[6];
    *(_OWORD *)(a2 + 80) = v37;
    *(_QWORD *)&v37 = *(_QWORD *)&v43[7];
    *(_OWORD *)(a2 + 96) = v38;
    *(_QWORD *)(a2 + 112) = v37;
    *(_BYTE *)(a2 + 120) = 0;
    memset(v43, 0, sizeof(v43));
    v29 = (CInputDest *)v43;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = a5;
    *(_QWORD *)(a1 + 40) = 4LL;
    if ( a8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, 1LL, a3);
    v13 = ApiSetEditionMouseSpeedHitTest(v42, a6, a7, (__int64)v39, (__int64)a9);
    v14 = *(_OWORD *)(v13 + 16);
    v40[0] = *(_OWORD *)v13;
    v15 = *(_OWORD *)(v13 + 32);
    v40[1] = v14;
    v16 = *(_OWORD *)(v13 + 48);
    v40[2] = v15;
    v17 = *(_OWORD *)(v13 + 64);
    v40[3] = v16;
    v18 = *(_OWORD *)(v13 + 80);
    v40[4] = v17;
    v19 = *(_OWORD *)(v13 + 96);
    v40[5] = v18;
    *(_QWORD *)&v18 = *(_QWORD *)(v13 + 112);
    v40[6] = v19;
    v41 = v18;
    CInputDest::CInputDest((CInputDest *)v44, (const struct tagINPUTDEST *)v40);
    if ( a9 )
      v20 = *a9;
    else
      v20 = 0;
    InputTraceLogging::Mouse::SpeedHitTest(
      a5,
      (const struct tagPOINT *)&v39[1],
      a3,
      (const struct CInputDest *)v44,
      v20,
      v39[0] != 0);
    v21 = v44[1];
    *(_OWORD *)a2 = v44[0];
    v22 = v44[2];
    *(_OWORD *)(a2 + 16) = v21;
    v23 = v44[3];
    *(_OWORD *)(a2 + 32) = v22;
    v24 = v44[4];
    *(_OWORD *)(a2 + 48) = v23;
    v25 = v44[5];
    *(_OWORD *)(a2 + 64) = v24;
    v26 = v44[6];
    *(_OWORD *)(a2 + 80) = v25;
    *(_QWORD *)&v25 = *(_QWORD *)&v44[7];
    *(_OWORD *)(a2 + 96) = v26;
    *(_QWORD *)(a2 + 112) = v25;
    *(_BYTE *)(a2 + 120) = 0;
    memset(v44, 0, sizeof(v44));
    v29 = (CInputDest *)v44;
  }
  CInputDest::SetEmpty(v29, v27, v28);
  return a2;
}
