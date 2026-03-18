/*
 * XREFs of XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C00165C0
 * Callers:
 *     UsbDevice_DisableCompletion @ 0x1C0039E40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C003C094 (UsbDevice_SetDeviceDisabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilDeviceSlot_SendClearDeviceContextRequest(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  int v7; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[6]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = a1[9];
  v8 = 0;
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 112);
  v9[3] = *a1;
  v9[5] = *(_QWORD *)(a2 + 608);
  *(_OWORD *)&v9[1] = 0LL;
  v9[4] = 27LL;
  v7 = SecureChannel_SendRequestSynchronously(v6, (unsigned int)v9, 48, (unsigned int)&v8, 4);
  if ( v7 >= 0 )
  {
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          2u,
          0xAu,
          0x1Bu,
          (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
          v8);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotClearDeviceContext failed in VTL-1 failed",
        0,
        (int)&Context.EnableKeyWords + 4,
        793);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v5 + 72),
      2u,
      0xAu,
      0x1Au,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v7);
  }
}
