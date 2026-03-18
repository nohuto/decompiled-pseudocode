/*
 * XREFs of ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C015B794
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01639E8 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01643BC (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C002FED0 (INPUTDEST_FROM_PWND.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 */

CInputDest *__fastcall CInputDest::CInputDest(CInputDest *this, struct tagWND *const a2)
{
  _DWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  _OWORD v11[7]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v12; // [rsp+90h] [rbp-98h]
  _DWORD v13[34]; // [rsp+A0h] [rbp-88h] BYREF

  v3 = INPUTDEST_FROM_PWND(v13, (__int64)a2);
  v4 = *((_OWORD *)v3 + 1);
  v11[0] = *(_OWORD *)v3;
  v5 = *((_OWORD *)v3 + 2);
  v11[1] = v4;
  v6 = *((_OWORD *)v3 + 3);
  v11[2] = v5;
  v7 = *((_OWORD *)v3 + 4);
  v11[3] = v6;
  v8 = *((_OWORD *)v3 + 5);
  v11[4] = v7;
  v9 = *((_OWORD *)v3 + 6);
  v11[5] = v8;
  *(_QWORD *)&v8 = *((_QWORD *)v3 + 14);
  v11[6] = v9;
  v12 = v8;
  CInputDest::CInputDest(this, (const struct tagINPUTDEST *)v11);
  return this;
}
