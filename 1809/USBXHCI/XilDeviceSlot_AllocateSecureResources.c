/*
 * XREFs of XilDeviceSlot_AllocateSecureResources @ 0x1C0013310
 * Callers:
 *     XilDeviceSlot_PrepareHardware @ 0x1C0013910 (XilDeviceSlot_PrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilDeviceSlot_AllocateSecureResources(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+28h] [rbp-50h]
  int v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL);
  v3 = *(_QWORD *)(v2 + 112);
  memset(v10, 0, sizeof(v10));
  LODWORD(v10[4]) = 22;
  v9 = 0LL;
  v10[3] = *(_QWORD *)a1;
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v10, 40, (unsigned int)&v9, 8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = v9;
    if ( (int)v9 >= 0 )
    {
      *(_DWORD *)(a1 + 80) = HIDWORD(v9);
    }
    else
    {
      v8 = v9;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v2 + 72),
        2u,
        0xAu,
        0xEu,
        (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
        v8);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotAllocateResources failed in VTL-1 failed",
        0,
        (int)&Context.MatchAllKeyword + 4,
        222);
    }
  }
  else
  {
    v7 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 72),
      2u,
      0xAu,
      0xDu,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v7);
  }
  return v5;
}
