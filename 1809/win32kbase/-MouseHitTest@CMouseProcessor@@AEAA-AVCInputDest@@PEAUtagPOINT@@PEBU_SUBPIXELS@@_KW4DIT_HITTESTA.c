/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C002F9CC
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@_N@Z @ 0x1C002FE14 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@_N@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionMouseSpeedHitTest @ 0x1C00318A8 (ApiSetEditionMouseSpeedHitTest.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00887D8 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C008B35C (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

_OWORD *__fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        _OWORD *a2,
        const struct tagPOINT *a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        _DWORD *a10)
{
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  CInputDest *v33; // rcx
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  int v44; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  struct tagPOINT v46; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v47[11]; // [rsp+70h] [rbp-90h] BYREF
  char v48; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v49[12]; // [rsp+1D0h] [rbp+D0h] BYREF
  _OWORD v50[12]; // [rsp+290h] [rbp+190h] BYREF

  v46 = *a3;
  v45 = a4;
  if ( a9 )
    *a9 = 0;
  if ( a10 )
    *a10 = 0;
  if ( (a8 & 1) != 0 )
  {
    CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate((CSpatialProcessor *)a1, 4u, *a3, a5, 0, a7);
    CInputDest::CInputDest((CInputDest *)v49, (const struct CInputDest *)(a1 + 2552));
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2736), 1, 1) )
      MicrosoftTelemetryAssertTriggeredMsgKM("Skipping hit-test per caller request, but there is no capture");
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint)(
      a3,
      *a3,
      v45,
      v49);
    memset(a2, 0, 0xB0uLL);
    *((_BYTE *)a2 + 176) = 0;
    v35 = v49[1];
    *a2 = v49[0];
    v36 = v49[2];
    a2[1] = v35;
    v37 = v49[3];
    a2[2] = v36;
    v38 = v49[4];
    a2[3] = v37;
    v39 = v49[5];
    a2[4] = v38;
    v40 = v49[6];
    a2[5] = v39;
    v41 = v49[8];
    a2[6] = v40;
    a2[7] = v49[7];
    v42 = v49[9];
    a2[8] = v41;
    v43 = v49[10];
    a2[9] = v42;
    a2[10] = v43;
    memset(v49, 0, 0xB8uLL);
    v33 = (CInputDest *)v49;
  }
  else
  {
    *(_QWORD *)(a1 + 40) = a5;
    *(_QWORD *)(a1 + 48) = 4LL;
    if ( a8 )
      MicrosoftTelemetryAssertTriggeredMsgKM("MouseHitTestOptions - new option added but missing handling code?");
    v13 = (_OWORD *)ApiSetEditionMouseSpeedHitTest(
                      (unsigned int)&v48,
                      (_DWORD)a3,
                      v45,
                      a5,
                      a6,
                      a7,
                      (__int64)&v44,
                      (__int64)a9,
                      (__int64)a10);
    v14 = v13[1];
    v47[0] = *v13;
    v15 = v13[2];
    v47[1] = v14;
    v16 = v13[3];
    v47[2] = v15;
    v17 = v13[4];
    v47[3] = v16;
    v18 = v13[5];
    v47[4] = v17;
    v19 = v13[6];
    v47[5] = v18;
    v20 = v13[8];
    v47[6] = v19;
    v47[7] = v13[7];
    v21 = v13[9];
    v47[8] = v20;
    v22 = v13[10];
    v47[9] = v21;
    v47[10] = v22;
    CInputDest::CInputDest((CInputDest *)v50, (const struct tagINPUTDEST *)v47);
    InputTraceLogging::Mouse::SpeedHitTest(a5, &v46, a3, (const struct CInputDest *)v50, v44 != 0);
    memset(a2, 0, 0xB0uLL);
    *((_BYTE *)a2 + 176) = 0;
    v23 = v50[1];
    *a2 = v50[0];
    v24 = v50[2];
    a2[1] = v23;
    v25 = v50[3];
    a2[2] = v24;
    v26 = v50[4];
    a2[3] = v25;
    v27 = v50[5];
    a2[4] = v26;
    v28 = v50[6];
    a2[5] = v27;
    v29 = v50[7];
    a2[6] = v28;
    v30 = v50[8];
    a2[7] = v29;
    v31 = v50[9];
    a2[8] = v30;
    v32 = v50[10];
    a2[9] = v31;
    a2[10] = v32;
    memset(v50, 0, 0xB8uLL);
    v33 = (CInputDest *)v50;
  }
  CInputDest::SetEmpty(v33);
  return a2;
}
