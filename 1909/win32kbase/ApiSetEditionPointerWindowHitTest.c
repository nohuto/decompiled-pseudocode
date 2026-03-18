/*
 * XREFs of ApiSetEditionPointerWindowHitTest @ 0x1C019B3C4
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01635DC (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionPointerWindowHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v17; // edx
  int v18; // edx
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  _BYTE v27[128]; // [rsp+70h] [rbp-98h] BYREF

  memset(a1, 0, 0x78uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      10,
      222,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsEditionPointerWindowHitTestSupported() >= 0 )
  {
    v19 = EditionPointerWindowHitTest(v27, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    v20 = *(_OWORD *)(v19 + 16);
    *a1 = *(_OWORD *)v19;
    v21 = *(_OWORD *)(v19 + 32);
    a1[1] = v20;
    v22 = *(_OWORD *)(v19 + 48);
    a1[2] = v21;
    v23 = *(_OWORD *)(v19 + 64);
    a1[3] = v22;
    v24 = *(_OWORD *)(v19 + 80);
    a1[4] = v23;
    v25 = *(_OWORD *)(v19 + 96);
    a1[5] = v24;
    *(_QWORD *)&v24 = *(_QWORD *)(v19 + 112);
    a1[6] = v25;
    *((_QWORD *)a1 + 14) = v24;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v18) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      10,
      223,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return a1;
}
