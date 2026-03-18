/*
 * XREFs of ApiSetEditionSpeedHitTest @ 0x1C019E4E8
 * Callers:
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C017BC7C (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00C1440 (memset.c)
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
  int v10; // edx
  int v11; // edx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _BYTE v20[128]; // [rsp+40h] [rbp-88h] BYREF

  memset(a1, 0, 0x78uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      10,
      220,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsEditionSpeedHitTestSupported() >= 0 )
  {
    v12 = EditionSpeedHitTest(v20, 5LL, 0LL, a4, a5, 0LL, 0LL, a8);
    v13 = *(_OWORD *)(v12 + 16);
    *a1 = *(_OWORD *)v12;
    v14 = *(_OWORD *)(v12 + 32);
    a1[1] = v13;
    v15 = *(_OWORD *)(v12 + 48);
    a1[2] = v14;
    v16 = *(_OWORD *)(v12 + 64);
    a1[3] = v15;
    v17 = *(_OWORD *)(v12 + 80);
    a1[4] = v16;
    v18 = *(_OWORD *)(v12 + 96);
    a1[5] = v17;
    *(_QWORD *)&v17 = *(_QWORD *)(v12 + 112);
    a1[6] = v18;
    *((_QWORD *)a1 + 14) = v17;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      10,
      221,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return a1;
}
