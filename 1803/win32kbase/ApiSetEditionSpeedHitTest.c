/*
 * XREFs of ApiSetEditionSpeedHitTest @ 0x1C01400F4
 * Callers:
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01261EC (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionSpeedHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
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
  _BYTE v21[176]; // [rsp+40h] [rbp-B8h] BYREF

  memset(a1, 0, 0xB0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x5Eu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionSpeedHitTestSupported() >= 0 )
  {
    v10 = (_OWORD *)EditionSpeedHitTest(v21, 5LL, 0LL, a4, a5, 0LL, a7, a8);
    v11 = v10[1];
    *a1 = *v10;
    v12 = v10[2];
    a1[1] = v11;
    v13 = v10[3];
    a1[2] = v12;
    v14 = v10[4];
    a1[3] = v13;
    v15 = v10[5];
    a1[4] = v14;
    v16 = v10[6];
    a1[5] = v15;
    v17 = v10[8];
    a1[6] = v16;
    a1[7] = v10[7];
    v18 = v10[9];
    a1[8] = v17;
    v19 = v10[10];
    a1[9] = v18;
    a1[10] = v19;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x5Fu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return a1;
}
