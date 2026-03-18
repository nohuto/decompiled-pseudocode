/*
 * XREFs of XilDeviceSlot_SendQuerySlotContextInfoRequest @ 0x1C0013CC8
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0035400 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0036B00 (UsbDevice_SetAddressCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0037920 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilDeviceSlot_SendQuerySlotContextInfoRequest(_QWORD *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  int v12; // [rsp+28h] [rbp-90h]
  int v13; // [rsp+28h] [rbp-90h]
  _QWORD v14[6]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v15; // [rsp+60h] [rbp-58h] BYREF
  int v16; // [rsp+68h] [rbp-50h]

  v8 = *(_QWORD *)(a1[9] + 8LL);
  v9 = *(_QWORD *)(v8 + 112);
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  v16 = 0;
  v14[3] = *a1;
  v10 = *(_QWORD *)(a2 + 600);
  LODWORD(v14[4]) = 28;
  v14[5] = v10;
  v11 = SecureChannel_SendRequestSynchronously(v9, (unsigned int)v14, 48, (unsigned int)&v15, 12);
  if ( v11 >= 0 )
  {
    if ( (int)v15 >= 0 )
    {
      if ( a3 )
        *a3 = HIDWORD(v15);
      if ( a4 )
        *a4 = v16;
    }
    else
    {
      v13 = v15;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v8 + 72),
        2u,
        0xAu,
        0x1Du,
        (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
        v13);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotQueryInfoFromSlotContext failed in VTL-1 failed",
        0,
        (int)&Context.MatchAllKeyword + 4,
        911);
    }
  }
  else
  {
    v12 = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 72),
      2u,
      0xAu,
      0x1Cu,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v12);
  }
}
