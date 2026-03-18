/*
 * XREFs of ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C019A930
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C015F578 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsPointerQueuedMessageCoalescable(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  __int64 v8; // r14
  unsigned int v10; // ebx
  int v11; // edx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _OWORD v19[7]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-28h]

  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      274,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v10 = 0;
  if ( (int)IsEditionIsPointerQueuedMessageCoalescableSupported() >= 0 )
  {
    v12 = *(_OWORD *)(a1 + 16);
    v19[0] = *(_OWORD *)a1;
    v13 = *(_OWORD *)(a1 + 32);
    v19[1] = v12;
    v14 = *(_OWORD *)(a1 + 48);
    v19[2] = v13;
    v15 = *(_OWORD *)(a1 + 64);
    v19[3] = v14;
    v16 = *(_OWORD *)(a1 + 80);
    v19[4] = v15;
    v17 = *(_OWORD *)(a1 + 96);
    v19[5] = v16;
    *(_QWORD *)&v16 = *(_QWORD *)(a1 + 112);
    v19[6] = v17;
    v20 = v16;
    v10 = ((__int64 (__fastcall *)(_OWORD *, __int64, _QWORD, _QWORD, __int64, int))EditionIsPointerQueuedMessageCoalescable)(
            v19,
            v8,
            a3,
            a4,
            a5,
            a6);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      10,
      275,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v10;
}
