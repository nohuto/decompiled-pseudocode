/*
 * XREFs of ApiSetEditionFindNodeQueuedMessage @ 0x1C013E150
 * Callers:
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C0111860 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionFindNodeQueuedMessage(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 NodeQueuedMessage; // rdi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _OWORD v18[11]; // [rsp+30h] [rbp-C8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x90u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  NodeQueuedMessage = 0LL;
  if ( (int)IsEditionFindNodeQueuedMessageSupported() >= 0 )
  {
    v8 = a1[1];
    v18[0] = *a1;
    v9 = a1[2];
    v18[1] = v8;
    v10 = a1[3];
    v18[2] = v9;
    v11 = a1[4];
    v18[3] = v10;
    v12 = a1[5];
    v18[4] = v11;
    v13 = a1[6];
    v18[5] = v12;
    v14 = a1[8];
    v18[6] = v13;
    v18[7] = a1[7];
    v15 = a1[9];
    v18[8] = v14;
    v16 = a1[10];
    v18[9] = v15;
    v18[10] = v16;
    NodeQueuedMessage = EditionFindNodeQueuedMessage(v18, a2, 1LL, a4);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x91u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return NodeQueuedMessage;
}
