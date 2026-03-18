/*
 * XREFs of ApiSetEditionSpeedHitTest @ 0x1C0163820
 * Callers:
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C014BBC4 (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionSpeedHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _BYTE v22[176]; // [rsp+50h] [rbp-B8h] BYREF

  memset(a1, 0, 0xB0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x60u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionSpeedHitTestSupported() >= 0 )
  {
    v11 = (_OWORD *)EditionSpeedHitTest(v22, 5LL, 0LL, a4, a5, 0LL, 0LL, a8, a9);
    v12 = v11[1];
    *a1 = *v11;
    v13 = v11[2];
    a1[1] = v12;
    v14 = v11[3];
    a1[2] = v13;
    v15 = v11[4];
    a1[3] = v14;
    v16 = v11[5];
    a1[4] = v15;
    v17 = v11[6];
    a1[5] = v16;
    v18 = v11[8];
    a1[6] = v17;
    a1[7] = v11[7];
    v19 = v11[9];
    a1[8] = v18;
    v20 = v11[10];
    a1[9] = v19;
    a1[10] = v20;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x61u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return a1;
}
