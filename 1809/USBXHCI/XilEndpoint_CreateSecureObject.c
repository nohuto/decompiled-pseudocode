/*
 * XREFs of XilEndpoint_CreateSecureObject @ 0x1C0014468
 * Callers:
 *     XilEndpoint_Create @ 0x1C00143A0 (XilEndpoint_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_CreateSecureObject(_QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+28h] [rbp-60h]
  int v11; // [rsp+28h] [rbp-60h]
  int v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  _QWORD v14[7]; // [rsp+40h] [rbp-48h] BYREF

  v1 = (__int64 *)a1[4];
  v3 = *v1;
  v4 = *(_QWORD *)(*v1 + 112);
  memset(v14, 0, sizeof(v14));
  v14[3] = 0LL;
  LODWORD(v14[4]) = 33;
  v5 = v1[2];
  if ( *(_BYTE *)(v5 + 649) )
  {
    v6 = *(_QWORD *)(v5 + 600);
  }
  else
  {
    Debug_FreAssertMsg(
      (__int64)"Unexpected code path hit",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
      347);
    v1 = (__int64 *)a1[4];
    v6 = 0LL;
  }
  v14[5] = v6;
  LODWORD(v14[6]) = *((_DWORD *)v1 + 36);
  v7 = SecureChannel_SendRequestSynchronously(v4, (unsigned int)v14, 56, (unsigned int)&v12, 16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v8 = v12;
    if ( v12 >= 0 )
    {
      *a1 = v13;
    }
    else
    {
      v11 = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v3 + 72),
        2u,
        0xDu,
        0xBu,
        (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
        v11);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but EndpointCreate failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        255);
    }
  }
  else
  {
    v10 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 72),
      2u,
      0xDu,
      0xAu,
      (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
      v10);
  }
  return v8;
}
