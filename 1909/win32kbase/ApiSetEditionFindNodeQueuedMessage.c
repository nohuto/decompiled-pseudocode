/*
 * XREFs of ApiSetEditionFindNodeQueuedMessage @ 0x1C0199C88
 * Callers:
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C0164828 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionFindNodeQueuedMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 NodeQueuedMessage; // rbx
  int v8; // edx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD v16[7]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-28h]

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      276,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  NodeQueuedMessage = 0LL;
  if ( (int)IsEditionFindNodeQueuedMessageSupported() >= 0 )
  {
    v9 = *(_OWORD *)(a1 + 16);
    v16[0] = *(_OWORD *)a1;
    v10 = *(_OWORD *)(a1 + 32);
    v16[1] = v9;
    v11 = *(_OWORD *)(a1 + 48);
    v16[2] = v10;
    v12 = *(_OWORD *)(a1 + 64);
    v16[3] = v11;
    v13 = *(_OWORD *)(a1 + 80);
    v16[4] = v12;
    v14 = *(_OWORD *)(a1 + 96);
    v16[5] = v13;
    *(_QWORD *)&v13 = *(_QWORD *)(a1 + 112);
    v16[6] = v14;
    v17 = v13;
    NodeQueuedMessage = EditionFindNodeQueuedMessage(v16, v5, 1LL, a4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      10,
      277,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return NodeQueuedMessage;
}
