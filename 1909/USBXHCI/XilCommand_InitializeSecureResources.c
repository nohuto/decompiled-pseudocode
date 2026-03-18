/*
 * XREFs of XilCommand_InitializeSecureResources @ 0x1C000C234
 * Callers:
 *     Command_Initialize @ 0x1C000A1EC (Command_Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_InitializeSecureResources(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(v3 + 112);
  *(_OWORD *)&v8[1] = 0LL;
  v8[3] = v4;
  v8[4] = 15LL;
  result = SecureChannel_SendRequestSynchronously(v5, (unsigned int)v8, 40, (unsigned int)&v7, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v7;
    if ( v7 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 72),
          2u,
          7u,
          0x10u,
          (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
          v7);
      return Debug_FreAssertMsg(
               "IOCTL succeeded but CommandAllocateResources failed in VTL-1 failed",
               0LL,
               "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
               331LL);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v3 + 72),
             2u,
             7u,
             0xFu,
             (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
             result);
  }
  return result;
}
