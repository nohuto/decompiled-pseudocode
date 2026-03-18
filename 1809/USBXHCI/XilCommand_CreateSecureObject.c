/*
 * XREFs of XilCommand_CreateSecureObject @ 0x1C0009E70
 * Callers:
 *     XilCommand_Create @ 0x1C0009E10 (XilCommand_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_CreateSecureObject(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-60h]
  int v8; // [rsp+28h] [rbp-60h]
  int v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h]
  _QWORD v11[6]; // [rsp+40h] [rbp-48h] BYREF

  v2 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = v2[14];
  memset(v11, 0, sizeof(v11));
  v11[3] = 0LL;
  LODWORD(v11[4]) = 12;
  v11[5] = v2[61];
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v11, 48, (unsigned int)&v9, 16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = v9;
    if ( v9 >= 0 )
    {
      *(_QWORD *)(a1 + 32) = v10;
    }
    else
    {
      v8 = v9;
      WPP_RECORDER_SF_d(v2[9], 2u, 7u, 0xBu, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v8);
      Debug_FreAssertMsg(
        "IOCTL succeeded but CommandCreate failed in VTL-1 failed",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        92LL);
    }
  }
  else
  {
    v7 = v4;
    WPP_RECORDER_SF_d(v2[9], 2u, 7u, 0xAu, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v7);
  }
  return v5;
}
