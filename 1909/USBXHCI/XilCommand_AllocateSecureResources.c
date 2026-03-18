/*
 * XREFs of XilCommand_AllocateSecureResources @ 0x1C000BD5C
 * Callers:
 *     XilCommand_AllocateResources @ 0x1C000BD04 (XilCommand_AllocateResources.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilCommand_AllocateSecureResources(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  _QWORD v7[5]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[4]; // [rsp+58h] [rbp-28h] BYREF

  memset(v7, 0, sizeof(v7));
  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(v2 + 112);
  *(_OWORD *)&v7[1] = 0LL;
  v7[3] = v3;
  v7[4] = 13LL;
  v5 = SecureChannel_SendRequestSynchronously(v4, (unsigned int)v7, 40, (unsigned int)v8, 32);
  if ( v5 >= 0 )
  {
    v5 = v8[0];
    if ( SLODWORD(v8[0]) >= 0 )
    {
      *(_QWORD *)(a1 + 40) = v8[1];
      *(_QWORD *)(a1 + 48) = v8[2];
      *(_DWORD *)(a1 + 56) = v8[3];
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v2 + 72),
          2u,
          7u,
          0xEu,
          (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids,
          LODWORD(v8[0]));
      Debug_FreAssertMsg(
        "IOCTL succeeded but CommandAllocateResources failed in VTL-1 failed",
        0LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        214LL);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(v2 + 72), 2u, 7u, 0xDu, (__int64)&WPP_ea9f9fbd518637d468c1fcdb19474ea1_Traceguids, v5);
  }
  return (unsigned int)v5;
}
