/*
 * XREFs of TR_InitializeTransferSegment @ 0x1C002934C
 * Callers:
 *     TR_InitializeTransferRing @ 0x1C00292D8 (TR_InitializeTransferRing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall TR_InitializeTransferSegment(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  int v6; // [rsp+28h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+38h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v7 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v3 + 537) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2439);
    v3 = *(_QWORD *)(a1 + 40);
  }
  v5 = *(_QWORD *)(a1 + 288);
  v8 = 0LL;
  v12 = 0;
  v10 = v5;
  v13 = *(_QWORD *)(a2 + 24);
  v9 = 0LL;
  v11 = 42;
  if ( (int)SecureChannel_SendRequestSynchronously(*(_QWORD *)(v3 + 112), (unsigned int)&v8, 48, (unsigned int)&v7, 4) >= 0
    && v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        2u,
        0xEu,
        0x1Du,
        (__int64)&WPP_36bc79e2af6f37d6aa20da6265b51b29_Traceguids,
        v6);
    }
    Debug_FreAssertMsg(
      (__int64)"TransferRingInitializeSegment Failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2464);
  }
}
