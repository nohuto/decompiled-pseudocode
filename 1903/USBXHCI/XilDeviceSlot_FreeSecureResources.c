/*
 * XREFs of XilDeviceSlot_FreeSecureResources @ 0x1C0016090
 * Callers:
 *     XilDeviceSlot_ReleaseHardware @ 0x1C0016574 (XilDeviceSlot_ReleaseHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilDeviceSlot_FreeSecureResources(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v8[5]; // [rsp+38h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = a1[9];
  v7 = 0LL;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *a1;
  v5 = *(_QWORD *)(v3 + 112);
  *(_OWORD *)&v8[1] = 0LL;
  v8[3] = v4;
  v8[4] = 23LL;
  v6 = SecureChannel_SendRequestSynchronously(v5, (unsigned int)v8, 40, (unsigned int)&v7, 8);
  if ( v6 >= 0 )
  {
    if ( (int)v7 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 72),
          2u,
          0xAu,
          0x12u,
          (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
          v7);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotFreeResources failed in VTL-1 failed",
        0,
        (int)&Context.EnableKeyWords + 4,
        354);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 72),
      2u,
      0xAu,
      0x11u,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v6);
  }
}
