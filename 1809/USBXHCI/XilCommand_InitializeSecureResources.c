/*
 * XREFs of XilCommand_InitializeSecureResources @ 0x1C000A130
 * Callers:
 *     Command_Initialize @ 0x1C00082E4 (Command_Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_InitializeSecureResources(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  int v4; // eax
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[5]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(v2 + 112);
  memset(v7, 0, sizeof(v7));
  v6 = 0;
  v7[3] = *(_QWORD *)(a1 + 32);
  LODWORD(v7[4]) = 15;
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v7, 40, (unsigned int)&v6, 4);
  if ( v4 < 0 )
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v2 + 72),
             2u,
             7u,
             0xFu,
             (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
             v4);
  result = (unsigned int)v6;
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 72),
      2u,
      7u,
      0x10u,
      (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
      v6);
    return Debug_FreAssertMsg(
             "IOCTL succeeded but CommandAllocateResources failed in VTL-1 failed",
             0LL,
             "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
             331LL);
  }
  return result;
}
