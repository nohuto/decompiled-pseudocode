/*
 * XREFs of XilDeviceSlot_InitializeSecureResources @ 0x1C00161E8
 * Callers:
 *     DeviceSlot_Initialize @ 0x1C0015CA0 (DeviceSlot_Initialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilDeviceSlot_InitializeSecureResources(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  v2 = a1[9];
  v9 = 0;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *a1;
  v5 = *(_QWORD *)(v3 + 112);
  *(_OWORD *)&v10[1] = 0LL;
  v10[3] = v4;
  v10[4] = 24LL;
  v6 = SecureChannel_SendRequestSynchronously(v5, (unsigned int)v10, 40, (unsigned int)&v9, 4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 72),
          2u,
          0xAu,
          0x14u,
          (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
          v9);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotInitialize failed in VTL-1 failed",
        0,
        (int)&Context.EnableKeyWords + 4,
        464);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 72),
      2u,
      0xAu,
      0x13u,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v6);
  }
  return v7;
}
