/*
 * XREFs of ApiSetSetManipulationInputTargetTransform @ 0x1C016502C
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetSetManipulationInputTargetTransform(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v9; // edi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _OWORD v20[11]; // [rsp+30h] [rbp-C8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x7Cu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  v9 = 0;
  if ( (int)IsSetManipulationInputTargetTransformSupported() >= 0 )
  {
    v10 = a1[1];
    v20[0] = *a1;
    v11 = a1[2];
    v20[1] = v10;
    v12 = a1[3];
    v20[2] = v11;
    v13 = a1[4];
    v20[3] = v12;
    v14 = a1[5];
    v20[4] = v13;
    v15 = a1[6];
    v20[5] = v14;
    v16 = a1[8];
    v20[6] = v15;
    v20[7] = a1[7];
    v17 = a1[9];
    v20[8] = v16;
    v18 = a1[10];
    v20[9] = v17;
    v20[10] = v18;
    v9 = SetManipulationInputTargetTransform(v20, a2, a3, a4, a5);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x7Du,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return v9;
}
