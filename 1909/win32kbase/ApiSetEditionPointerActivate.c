/*
 * XREFs of ApiSetEditionPointerActivate @ 0x1C019AFD8
 * Callers:
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C01640B0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C016AFD8 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0170B10 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPointerActivate(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v6; // bp
  __int64 result; // rax
  __int16 v9; // dx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  _OWORD v16[7]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-28h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      142,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  result = IsEditionPointerActivateSupported();
  if ( (int)result >= 0 )
  {
    v10 = *(_OWORD *)(a1 + 16);
    v16[0] = *(_OWORD *)a1;
    v11 = *(_OWORD *)(a1 + 32);
    v16[1] = v10;
    v12 = *(_OWORD *)(a1 + 48);
    v16[2] = v11;
    v13 = *(_OWORD *)(a1 + 64);
    v16[3] = v12;
    v14 = *(_OWORD *)(a1 + 80);
    v16[4] = v13;
    v15 = *(_OWORD *)(a1 + 96);
    v16[5] = v14;
    *(_QWORD *)&v14 = *(_QWORD *)(a1 + 112);
    v16[6] = v15;
    v17 = v14;
    result = EditionPointerActivate(v16, v6, a3, a4, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      return WPP_RECORDER_SF_(
               WPP_GLOBAL_Control->DeviceExtension,
               v9,
               10,
               143,
               (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
    }
  }
  return result;
}
