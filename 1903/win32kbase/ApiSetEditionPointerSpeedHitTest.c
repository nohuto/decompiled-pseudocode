/*
 * XREFs of ApiSetEditionPointerSpeedHitTest @ 0x1C019D508
 * Callers:
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C016CC38 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0172D00 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0175FC8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C017AAF4 (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionPointerSpeedHitTest(
        _OWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6)
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
  _BYTE v20[128]; // [rsp+30h] [rbp-98h] BYREF

  memset(a1, 0, 0x78uLL);
  if ( a5 )
    *a5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      10,
      218,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsEditionPointerSpeedHitTestSupported() >= 0 )
  {
    v12 = EditionPointerSpeedHitTest(v20, a2, a3, a4, a5, a6);
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
      219,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return a1;
}
