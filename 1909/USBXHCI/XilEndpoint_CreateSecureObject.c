/*
 * XREFs of XilEndpoint_CreateSecureObject @ 0x1C0017098
 * Callers:
 *     XilEndpoint_Create @ 0x1C0016FD0 (XilEndpoint_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_CreateSecureObject(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebx
  int v9; // [rsp+28h] [rbp-60h]
  int v10; // [rsp+28h] [rbp-60h]
  __int64 v11; // [rsp+30h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h]
  _QWORD v13[7]; // [rsp+40h] [rbp-48h] BYREF

  v1 = (__int64 *)a1[4];
  v11 = 0LL;
  v12 = 0LL;
  v3 = *v1;
  v4 = *(_QWORD *)(*v1 + 112);
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[4]) = 33;
  v5 = v1[2];
  if ( *(_BYTE *)(v5 + 657) )
  {
    v6 = *(_QWORD *)(v5 + 608);
  }
  else
  {
    Debug_FreAssertMsg(
      (__int64)"Unexpected code path hit",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
      376);
    v1 = (__int64 *)a1[4];
    v6 = 0LL;
  }
  v13[5] = v6;
  LODWORD(v13[6]) = *((_DWORD *)v1 + 36);
  v7 = SecureChannel_SendRequestSynchronously(v4, (unsigned int)v13, 56, (unsigned int)&v11, 16);
  if ( v7 >= 0 )
  {
    v7 = v11;
    if ( (int)v11 >= 0 )
    {
      *a1 = v12;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v10 = v11;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 72),
          2u,
          0xDu,
          0xBu,
          (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
          v10);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but EndpointCreate failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        255);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 72),
      2u,
      0xDu,
      0xAu,
      (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
      v9);
  }
  return (unsigned int)v7;
}
