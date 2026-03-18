/*
 * XREFs of ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C014AB2C
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C014A844 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z @ 0x1C0145A10 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z.c)
 *     ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C014BB50 (-Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C0162B3C (ApiSetEditionPointerSpeedHitTest.c)
 */

void __fastcall CPTPProcessor::HitTestPrimaryContact(CPTPProcessor *this, const struct PTPEnginePointerNode *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v23[11]; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v25[9]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v26[192]; // [rsp+240h] [rbp+140h] BYREF

  v2 = *(_OWORD *)a2;
  v20 = 0;
  v3 = *((_OWORD *)a2 + 1);
  v21 = 0;
  v25[0] = v2;
  v6 = *((_OWORD *)a2 + 2);
  v25[1] = v3;
  v7 = *((_OWORD *)a2 + 3);
  v25[2] = v6;
  v8 = *((_OWORD *)a2 + 4);
  v25[3] = v7;
  v9 = *((_OWORD *)a2 + 5);
  v25[4] = v8;
  v25[5] = v9;
  v10 = (_OWORD *)ApiSetEditionPointerSpeedHitTest(
                    (unsigned int)&v24,
                    (unsigned int)v25,
                    0,
                    0,
                    (__int64)&v22,
                    (__int64)&v20,
                    (__int64)&v21);
  v11 = v10[1];
  v23[0] = *v10;
  v12 = v10[2];
  v23[1] = v11;
  v13 = v10[3];
  v23[2] = v12;
  v14 = v10[4];
  v23[3] = v13;
  v15 = v10[5];
  v23[4] = v14;
  v16 = v10[6];
  v23[5] = v15;
  v17 = v10[8];
  v23[6] = v16;
  v23[7] = v10[7];
  v18 = v10[9];
  v23[8] = v17;
  v19 = v10[10];
  v23[9] = v18;
  v23[10] = v19;
  CInputDest::CInputDest((CInputDest *)v26, (const struct tagINPUTDEST *)v23);
  InputTraceLogging::Pointer::SpeedHitTest(
    (const union POINTERINFOUNION *)v25,
    (const struct CInputDest *)v26,
    v22 != 0);
  CHitTestState::Set((CPTPProcessor *)((char *)this + 344), (const struct CInputDest *)v26, v20 != 0, v21);
  *((_QWORD *)this + 67) = *((_QWORD *)a2 + 10);
  *((_QWORD *)this + 68) = *((_QWORD *)a2 + 4);
  CInputDest::SetEmpty((CInputDest *)v26);
}
