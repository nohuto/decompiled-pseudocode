/*
 * XREFs of ApiSetEditionMouseSpeedHitTest @ 0x1C0034BE0
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAI@Z @ 0x1C00316A0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionMouseSpeedHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v10; // r14
  int v12; // edx
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _BYTE v21[128]; // [rsp+40h] [rbp-98h] BYREF

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      326,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  memset(a1, 0, 0x78uLL);
  if ( a7 )
    *a7 = 0;
  if ( (int)IsEditionMouseSpeedHitTestSupported() >= 0 )
  {
    v13 = EditionMouseSpeedHitTest(v21, v10, a3, a4, a5, a6, a7, a8);
    v14 = *(_OWORD *)(v13 + 16);
    *a1 = *(_OWORD *)v13;
    v15 = *(_OWORD *)(v13 + 32);
    a1[1] = v14;
    v16 = *(_OWORD *)(v13 + 48);
    a1[2] = v15;
    v17 = *(_OWORD *)(v13 + 64);
    a1[3] = v16;
    v18 = *(_OWORD *)(v13 + 80);
    a1[4] = v17;
    v19 = *(_OWORD *)(v13 + 96);
    a1[5] = v18;
    *(_QWORD *)&v18 = *(_QWORD *)(v13 + 112);
    a1[6] = v19;
    *((_QWORD *)a1 + 14) = v18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      10,
      327,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return a1;
}
