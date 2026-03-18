/*
 * XREFs of XilCommand_CreateSecureObject @ 0x1C000BF24
 * Callers:
 *     XilCommand_Create @ 0x1C000BEC4 (XilCommand_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_CreateSecureObject(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  int v4; // ebx
  int v6; // [rsp+28h] [rbp-60h]
  int v7; // [rsp+28h] [rbp-60h]
  __int64 v8; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h]
  _QWORD v10[6]; // [rsp+40h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  v8 = 0LL;
  v9 = 0LL;
  v2 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = v2[14];
  LODWORD(v10[4]) = 12;
  v10[5] = v2[69];
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v10, 48, (unsigned int)&v8, 16);
  if ( v4 >= 0 )
  {
    v4 = v8;
    if ( (int)v8 >= 0 )
    {
      *(_QWORD *)(a1 + 32) = v9;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = v8;
        WPP_RECORDER_SF_d(v2[9], 2u, 7u, 0xBu, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v7);
      }
      Debug_FreAssertMsg(
        "IOCTL succeeded but CommandCreate failed in VTL-1 failed",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        92LL);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = v4;
    WPP_RECORDER_SF_d(v2[9], 2u, 7u, 0xAu, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v6);
  }
  return (unsigned int)v4;
}
