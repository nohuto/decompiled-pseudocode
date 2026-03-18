/*
 * XREFs of TR_InitializeTransferSegment @ 0x1C0024C0C
 * Callers:
 *     TR_InitializeTransferRing @ 0x1C0024B98 (TR_InitializeTransferRing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall TR_InitializeTransferSegment(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // [rsp+28h] [rbp-50h]
  int v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[6]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v2 + 473) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2440);
    v2 = *(_QWORD *)(a1 + 40);
  }
  memset(v7, 0, sizeof(v7));
  v7[3] = *(_QWORD *)(a1 + 288);
  v7[5] = *(_QWORD *)(a2 + 24);
  LODWORD(v7[4]) = 42;
  if ( (int)SecureChannel_SendRequestSynchronously(*(_QWORD *)(v2 + 112), (unsigned int)v7, 48, (unsigned int)&v6, 4) >= 0
    && v6 < 0 )
  {
    v5 = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      2u,
      0xEu,
      0x1Du,
      (__int64)&WPP_c0473ac1803d3d5f2d8c1e2b9467d5ec_Traceguids,
      v5);
    Debug_FreAssertMsg(
      (__int64)"TransferRingInitializeSegment Failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2465);
  }
}
