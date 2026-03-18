/*
 * XREFs of XilDeviceSlot_AllocateSecureResources @ 0x1C0015D88
 * Callers:
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016444 (XilDeviceSlot_PrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilDeviceSlot_AllocateSecureResources(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  v2 = a1[9];
  v8 = 0LL;
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *a1;
  v5 = *(_QWORD *)(v3 + 112);
  *(_OWORD *)&v9[1] = 0LL;
  v9[3] = v4;
  v9[4] = 22LL;
  v6 = SecureChannel_SendRequestSynchronously(v5, (unsigned int)v9, 40, (unsigned int)&v8, 8);
  if ( v6 >= 0 )
  {
    v6 = v8;
    if ( (int)v8 >= 0 )
    {
      *((_DWORD *)a1 + 20) = HIDWORD(v8);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v3 + 72),
          2u,
          0xAu,
          0xEu,
          (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
          v8);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotAllocateResources failed in VTL-1 failed",
        0,
        (int)&Context.EnableKeyWords + 4,
        222);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 72),
      2u,
      0xAu,
      0xDu,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
