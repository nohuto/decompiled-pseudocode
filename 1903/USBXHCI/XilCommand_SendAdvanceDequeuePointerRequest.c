/*
 * XREFs of XilCommand_SendAdvanceDequeuePointerRequest @ 0x1C000C6F8
 * Callers:
 *     XilCommand_AdvanceCommandRingControlDequeuePointer @ 0x1C000BCDC (XilCommand_AdvanceCommandRingControlDequeuePointer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_SendAdvanceDequeuePointerRequest(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[6]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 112);
  v9[3] = *(_QWORD *)(a1 + 32);
  LODWORD(v9[4]) = 17;
  LODWORD(v9[5]) = a2;
  result = SecureChannel_SendRequestSynchronously(v6, (unsigned int)v9, 48, (unsigned int)&v8, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v8;
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          2u,
          7u,
          0x18u,
          (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
          v8);
      return Debug_FreAssertMsg(
               "IOCTL succeeded but CommandAdvanceDequeuePointer failed in VTL-1 failed",
               0LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
               692LL);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v5 + 72),
             2u,
             7u,
             0x17u,
             (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
             result);
  }
  return result;
}
