/*
 * XREFs of XilUsbDevice_CreateSecureObject @ 0x1C00394D8
 * Callers:
 *     XilUsbDevice_Create @ 0x1C00393D8 (XilUsbDevice_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilUsbDevice_CreateSecureObject(__int64 a1, __int64 a2)
{
  __int128 v4; // xmm0
  __int64 v5; // xmm1_8
  __int64 *v6; // rsi
  __int64 v7; // rcx
  int v8; // ebx
  int v10; // [rsp+28h] [rbp-41h]
  int v11; // [rsp+28h] [rbp-41h]
  __int64 v12; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+38h] [rbp-31h]
  __int64 v14; // [rsp+40h] [rbp-29h]
  _QWORD v15[10]; // [rsp+50h] [rbp-19h] BYREF

  memset(v15, 0, sizeof(v15));
  v4 = *(_OWORD *)(a2 + 4);
  v5 = *(_QWORD *)(a2 + 20);
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v6 = *(__int64 **)(*(_QWORD *)(a1 + 56) + 8LL);
  v7 = v6[14];
  LODWORD(v15[4]) = 30;
  v15[5] = v6[69];
  LODWORD(v15[6]) = *(_DWORD *)a2;
  *(_OWORD *)((char *)&v15[6] + 4) = v4;
  *(_QWORD *)((char *)&v15[8] + 4) = v5;
  v8 = SecureChannel_SendRequestSynchronously(v7, (unsigned int)v15, 80, (unsigned int)&v12, 24);
  if ( v8 >= 0 )
  {
    v8 = v12;
    if ( (int)v12 >= 0 )
    {
      *(_QWORD *)a1 = v13;
      *(_BYTE *)(a1 + 48) = v14;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = v12;
        WPP_RECORDER_SF_d(v6[9], 2u, 0xCu, 0xBu, (__int64)&WPP_777d6bcc09283ade7749b3a182818bef_Traceguids, v11);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but UsbDeviceCreate failed in VTL-1 failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
        135);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = v8;
    WPP_RECORDER_SF_d(v6[9], 2u, 0xCu, 0xAu, (__int64)&WPP_777d6bcc09283ade7749b3a182818bef_Traceguids, v10);
  }
  return (unsigned int)v8;
}
