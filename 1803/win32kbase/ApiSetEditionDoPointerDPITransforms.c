/*
 * XREFs of ApiSetEditionDoPointerDPITransforms @ 0x1C013DD28
 * Callers:
 *     ?UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z @ 0x1C011EF90 (-UpdatePointerInfoTarget@CTouchProcessor@@QEAAH_KUtagINPUTDEST@@HHPEAUtagPOINT@@2@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionDoPointerDPITransforms(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  _OWORD v17[11]; // [rsp+30h] [rbp-C8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x80u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  result = IsEditionDoPointerDPITransformsSupported();
  if ( (int)result >= 0 )
  {
    v7 = a1[1];
    v17[0] = *a1;
    v8 = a1[2];
    v17[1] = v7;
    v9 = a1[3];
    v17[2] = v8;
    v10 = a1[4];
    v17[3] = v9;
    v11 = a1[5];
    v17[4] = v10;
    v12 = a1[6];
    v17[5] = v11;
    v13 = a1[7];
    v17[6] = v12;
    v14 = a1[8];
    v17[7] = v13;
    v15 = a1[9];
    v17[8] = v14;
    v16 = a1[10];
    v17[9] = v15;
    v17[10] = v16;
    result = EditionDoPointerDPITransforms(v17, a2, a3);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x81u,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
