/*
 * XREFs of ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C017AAF4
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C017A438 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C017499C (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C017BC08 (-Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C019D508 (ApiSetEditionPointerSpeedHitTest.c)
 */

void __fastcall CPTPProcessor::HitTestPrimaryContact(CPTPProcessor *this, const struct PTPEnginePointerNode *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  bool v16; // bl
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v20[3]; // [rsp+34h] [rbp-CCh] BYREF
  _OWORD v21[7]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-50h]
  char v23; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v24[9]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v25[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v26; // [rsp+1D4h] [rbp+D4h]

  v19 = 0;
  memset(v24, 0, sizeof(v24));
  v4 = *((_OWORD *)a2 + 1);
  v24[0] = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 2);
  v24[1] = v4;
  v6 = *((_OWORD *)a2 + 3);
  v24[2] = v5;
  v7 = *((_OWORD *)a2 + 4);
  v24[3] = v6;
  v8 = *((_OWORD *)a2 + 5);
  v24[4] = v7;
  v24[5] = v8;
  v9 = ApiSetEditionPointerSpeedHitTest((unsigned int)&v23, (unsigned int)v24, 0, 0, (__int64)v20, (__int64)&v19);
  v10 = *(_OWORD *)(v9 + 16);
  v21[0] = *(_OWORD *)v9;
  v11 = *(_OWORD *)(v9 + 32);
  v21[1] = v10;
  v12 = *(_OWORD *)(v9 + 48);
  v21[2] = v11;
  v13 = *(_OWORD *)(v9 + 64);
  v21[3] = v12;
  v14 = *(_OWORD *)(v9 + 80);
  v21[4] = v13;
  v15 = *(_OWORD *)(v9 + 96);
  v21[5] = v14;
  *(_QWORD *)&v14 = *(_QWORD *)(v9 + 112);
  v21[6] = v15;
  v22 = v14;
  CInputDest::CInputDest((CInputDest *)v25, (const struct tagINPUTDEST *)v21);
  v16 = (unsigned int)(v26 - 2) <= 1;
  InputTraceLogging::Pointer::SpeedHitTest(
    (const union POINTERINFOUNION *)v24,
    (const struct CInputDest *)v25,
    v19,
    v20[0] != 0);
  CHitTestState::Set((CPTPProcessor *)((char *)this + 424), (const struct CInputDest *)v25, v16, v19);
  *((_QWORD *)this + 70) = *((_QWORD *)a2 + 10);
  *((_QWORD *)this + 71) = *((_QWORD *)a2 + 4);
  CInputDest::SetEmpty((CInputDest *)v25, v17, v18);
}
