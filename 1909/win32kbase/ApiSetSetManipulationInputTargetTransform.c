/*
 * XREFs of ApiSetSetManipulationInputTargetTransform @ 0x1C019EBB4
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C016FE54 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetSetManipulationInputTargetTransform(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // r14
  unsigned int v9; // ebx
  int v10; // edx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  _OWORD v18[7]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-28h]

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      248,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v9 = 0;
  if ( (int)IsSetManipulationInputTargetTransformSupported() >= 0 )
  {
    v11 = *(_OWORD *)(a1 + 16);
    v18[0] = *(_OWORD *)a1;
    v12 = *(_OWORD *)(a1 + 32);
    v18[1] = v11;
    v13 = *(_OWORD *)(a1 + 48);
    v18[2] = v12;
    v14 = *(_OWORD *)(a1 + 64);
    v18[3] = v13;
    v15 = *(_OWORD *)(a1 + 80);
    v18[4] = v14;
    v16 = *(_OWORD *)(a1 + 96);
    v18[5] = v15;
    *(_QWORD *)&v15 = *(_QWORD *)(a1 + 112);
    v18[6] = v16;
    v19 = v15;
    v9 = SetManipulationInputTargetTransform(v18, v7, a3, a4, a5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      10,
      249,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v9;
}
