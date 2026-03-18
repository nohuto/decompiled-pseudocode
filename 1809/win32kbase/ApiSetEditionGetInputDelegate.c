/*
 * XREFs of ApiSetEditionGetInputDelegate @ 0x1C0161D5C
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C013826C (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0140200 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetInputDelegate(_OWORD *a1)
{
  __int64 InputDelegate; // rdi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD v13[11]; // [rsp+30h] [rbp-B8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x6Au,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  InputDelegate = 0LL;
  if ( (int)IsEditionGetInputDelegateSupported() >= 0 )
  {
    v3 = a1[1];
    v13[0] = *a1;
    v4 = a1[2];
    v13[1] = v3;
    v5 = a1[3];
    v13[2] = v4;
    v6 = a1[4];
    v13[3] = v5;
    v7 = a1[5];
    v13[4] = v6;
    v8 = a1[6];
    v13[5] = v7;
    v9 = a1[8];
    v13[6] = v8;
    v13[7] = a1[7];
    v10 = a1[9];
    v13[8] = v9;
    v11 = a1[10];
    v13[9] = v10;
    v13[10] = v11;
    InputDelegate = EditionGetInputDelegate(v13);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x6Bu,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  return InputDelegate;
}
