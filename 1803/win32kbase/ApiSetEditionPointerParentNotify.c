/*
 * XREFs of ApiSetEditionPointerParentNotify @ 0x1C013F378
 * Callers:
 *     ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01181E4 (-PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPointerParentNotify(_OWORD *a1, __int64 a2, __int64 a3)
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
  _OWORD v16[11]; // [rsp+30h] [rbp-B8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x62u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  result = IsEditionPointerParentNotifySupported();
  if ( (int)result >= 0 )
  {
    v7 = a1[1];
    v16[0] = *a1;
    v8 = a1[2];
    v16[1] = v7;
    v9 = a1[3];
    v16[2] = v8;
    v10 = a1[4];
    v16[3] = v9;
    v11 = a1[5];
    v16[4] = v10;
    v12 = a1[6];
    v16[5] = v11;
    v13 = a1[8];
    v16[6] = v12;
    v16[7] = a1[7];
    v14 = a1[9];
    v16[8] = v13;
    v15 = a1[10];
    v16[9] = v14;
    v16[10] = v15;
    result = EditionPointerParentNotify(v16, a2, a3);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x63u,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
