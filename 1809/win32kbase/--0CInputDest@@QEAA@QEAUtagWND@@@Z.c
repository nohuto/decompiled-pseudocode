/*
 * XREFs of ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0130E94
 * Callers:
 *     ?DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagQ@@KHPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01378E0 (-DetermineTouchpadPointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEBUCPointerInput.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C013826C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00323F4 (INPUTDEST_FROM_PWND.c)
 */

CInputDest *__fastcall CInputDest::CInputDest(CInputDest *this, struct tagWND *const a2)
{
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD v14[11]; // [rsp+20h] [rbp-168h] BYREF
  _DWORD v15[46]; // [rsp+D0h] [rbp-B8h] BYREF

  v3 = INPUTDEST_FROM_PWND(v15, (__int64)a2);
  v4 = v3[1];
  v14[0] = *v3;
  v5 = v3[2];
  v14[1] = v4;
  v6 = v3[3];
  v14[2] = v5;
  v7 = v3[4];
  v14[3] = v6;
  v8 = v3[5];
  v14[4] = v7;
  v9 = v3[6];
  v14[5] = v8;
  v10 = v3[8];
  v14[6] = v9;
  v14[7] = v3[7];
  v11 = v3[9];
  v14[8] = v10;
  v12 = v3[10];
  v14[9] = v11;
  v14[10] = v12;
  CInputDest::CInputDest(this, (const struct tagINPUTDEST *)v14);
  return this;
}
