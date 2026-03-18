/*
 * XREFs of ApiSetEditionGetInputDelegate @ 0x1C019C30C
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01665BC (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016EBBC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetInputDelegate(__int64 a1)
{
  __int64 InputDelegate; // rdi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _OWORD v10[7]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v11; // [rsp+A0h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      230,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  InputDelegate = 0LL;
  if ( (int)IsEditionGetInputDelegateSupported() >= 0 )
  {
    v3 = *(_OWORD *)(a1 + 16);
    v10[0] = *(_OWORD *)a1;
    v4 = *(_OWORD *)(a1 + 32);
    v10[1] = v3;
    v5 = *(_OWORD *)(a1 + 48);
    v10[2] = v4;
    v6 = *(_OWORD *)(a1 + 64);
    v10[3] = v5;
    v7 = *(_OWORD *)(a1 + 80);
    v10[4] = v6;
    v8 = *(_OWORD *)(a1 + 96);
    v10[5] = v7;
    *(_QWORD *)&v7 = *(_QWORD *)(a1 + 112);
    v10[6] = v8;
    v11 = v7;
    InputDelegate = EditionGetInputDelegate(v10);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      231,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  return InputDelegate;
}
