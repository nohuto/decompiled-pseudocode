/*
 * XREFs of XilDeviceSlot_SendSetDeviceContextRequest @ 0x1C00169C4
 * Callers:
 *     XilDeviceSlot_SetDeviceContext @ 0x1C0016B1C (XilDeviceSlot_SetDeviceContext.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     XilUsbDevice_GetDeviceContextBufferLA @ 0x1C003972C (XilUsbDevice_GetDeviceContextBufferLA.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilDeviceSlot_SendSetDeviceContextRequest(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v6; // rbp
  int v7; // r10d
  int v8; // ebx
  int v10; // [rsp+28h] [rbp-80h]
  int v11; // [rsp+28h] [rbp-80h]
  int v12; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v13[8]; // [rsp+40h] [rbp-68h] BYREF

  memset(v13, 0, sizeof(v13));
  v12 = 0;
  v6 = *(_QWORD *)(a1[9] + 8LL);
  v13[3] = *a1;
  v13[5] = *(_QWORD *)(a2 + 608);
  LODWORD(v13[4]) = 26;
  LODWORD(v13[6]) = a3;
  v13[7] = XilUsbDevice_GetDeviceContextBufferLA(a2);
  v8 = SecureChannel_SendRequestSynchronously(v7, (unsigned int)v13, 64, (unsigned int)&v12, 4);
  if ( v8 >= 0 )
  {
    v8 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          2u,
          0xAu,
          0x18u,
          (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
          v11);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotSetDeviceContext failed in VTL-1 failed",
        0,
        (int)&Context.EnableKeyWords + 4,
        649);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v6 + 72),
      2u,
      0xAu,
      0x17u,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v10);
  }
  return (unsigned int)v8;
}
