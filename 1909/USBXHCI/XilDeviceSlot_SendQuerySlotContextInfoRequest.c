/*
 * XREFs of XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0016864
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C003A570 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C003BCF0 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C003CC00 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilDeviceSlot_SendQuerySlotContextInfoRequest(_QWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  _QWORD v11[6]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v12; // [rsp+60h] [rbp+7h] BYREF
  int v13; // [rsp+68h] [rbp+Fh]

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  v13 = 0;
  v8 = *(_QWORD *)(a1[9] + 8LL);
  v9 = *(_QWORD *)(v8 + 112);
  v11[3] = *a1;
  v11[5] = *(_QWORD *)(a2 + 608);
  *(_OWORD *)&v11[1] = 0LL;
  v11[4] = 28LL;
  v10 = SecureChannel_SendRequestSynchronously(v9, (unsigned int)v11, 48, (unsigned int)&v12, 12);
  if ( v10 >= 0 )
  {
    if ( (int)v12 >= 0 )
    {
      if ( a3 )
        *a3 = HIDWORD(v12);
      if ( a4 )
        *a4 = v13;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v8 + 72),
          2u,
          0xAu,
          0x1Du,
          (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
          v12);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotQueryInfoFromSlotContext failed in VTL-1 failed",
        0,
        (int)&Context.EnableKeyWords + 4,
        911);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 72),
      2u,
      0xAu,
      0x1Cu,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v10);
  }
}
