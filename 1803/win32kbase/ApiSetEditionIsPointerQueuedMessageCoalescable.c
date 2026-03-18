/*
 * XREFs of ApiSetEditionIsPointerQueuedMessageCoalescable @ 0x1C013ED28
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C010DA58 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionIsPointerQueuedMessageCoalescable(
        _OWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v10; // edi
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _OWORD v21[11]; // [rsp+30h] [rbp-C8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x8Eu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  v10 = 0;
  if ( (int)IsEditionIsPointerQueuedMessageCoalescableSupported() >= 0 )
  {
    v11 = a1[1];
    v21[0] = *a1;
    v12 = a1[2];
    v21[1] = v11;
    v13 = a1[3];
    v21[2] = v12;
    v14 = a1[4];
    v21[3] = v13;
    v15 = a1[5];
    v21[4] = v14;
    v16 = a1[6];
    v21[5] = v15;
    v17 = a1[8];
    v21[6] = v16;
    v21[7] = a1[7];
    v18 = a1[9];
    v21[8] = v17;
    v19 = a1[10];
    v21[9] = v18;
    v21[10] = v19;
    v10 = ((__int64 (__fastcall *)(_OWORD *, __int64, _QWORD, _QWORD, __int64, int))EditionIsPointerQueuedMessageCoalescable)(
            v21,
            a2,
            a3,
            a4,
            a5,
            a6);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x8Fu,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return v10;
}
