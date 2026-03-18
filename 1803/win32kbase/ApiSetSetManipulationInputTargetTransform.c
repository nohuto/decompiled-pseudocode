/*
 * XREFs of ApiSetSetManipulationInputTargetTransform @ 0x1C0141954
 * Callers:
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetSetManipulationInputTargetTransform(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
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
      0x7Au,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
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
    v9 = ((__int64 (__fastcall *)(_OWORD *, __int64, __int64, _QWORD, __int64, int))SetManipulationInputTargetTransform)(
           v20,
           a2,
           a3,
           0LL,
           a5,
           a6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x7Bu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v9;
}
