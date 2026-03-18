/*
 * XREFs of TR_FreeSecureTransferSegments @ 0x1C0028FB0
 * Callers:
 *     TR_Disable_Internal @ 0x1C00288AC (TR_Disable_Internal.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall TR_FreeSecureTransferSegments(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  int v4; // [rsp+28h] [rbp-50h]
  int v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[6]; // [rsp+38h] [rbp-40h] BYREF

  v1 = a1[5];
  v5 = 0;
  if ( *(_BYTE *)(v1 + 537) && KeGetCurrentIrql() )
  {
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2384);
    v1 = a1[5];
  }
  memset(v6, 0, sizeof(v6));
  v6[3] = a1[36];
  v3 = a1[22];
  LODWORD(v6[4]) = 41;
  v6[5] = *(_QWORD *)(v3 + 24);
  if ( (int)SecureChannel_SendRequestSynchronously(*(_QWORD *)(v1 + 112), (unsigned int)v6, 48, (unsigned int)&v5, 4) >= 0
    && v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = v5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[5] + 72LL),
        2u,
        0xEu,
        0x1Cu,
        (__int64)&WPP_36bc79e2af6f37d6aa20da6265b51b29_Traceguids,
        v4);
    }
    Debug_FreAssertMsg(
      (__int64)"TransferRingFreeSegments Failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2409);
  }
}
