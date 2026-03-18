/*
 * XREFs of XilDeviceSlot_SendQueryEndpointContextInfoRequest @ 0x1C0016700
 * Callers:
 *     UsbDevice_GetEndpointState @ 0x1C003B09C (UsbDevice_GetEndpointState.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C003B110 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilDeviceSlot_SendQueryEndpointContextInfoRequest(
        _QWORD *a1,
        __int64 a2,
        int a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v9; // r13
  __int64 v10; // rcx
  int v11; // eax
  int v12; // [rsp+28h] [rbp-58h]
  int v13; // [rsp+28h] [rbp-58h]
  _QWORD v14[7]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h]

  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  v16 = 0LL;
  v9 = *(_QWORD *)(a1[9] + 8LL);
  v10 = *(_QWORD *)(v9 + 112);
  v14[3] = *a1;
  v14[5] = *(_QWORD *)(a2 + 608);
  LODWORD(v14[4]) = 29;
  LODWORD(v14[6]) = a3;
  v11 = SecureChannel_SendRequestSynchronously(v10, (unsigned int)v14, 56, (unsigned int)&v15, 16);
  if ( v11 >= 0 )
  {
    if ( (int)v15 >= 0 )
    {
      if ( a4 )
        *a4 = HIDWORD(v15);
      if ( a5 )
        *a5 = v16;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = v15;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v9 + 72),
          2u,
          0xAu,
          0x1Fu,
          (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
          v13);
      }
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotQueryInfoFromEndpointContext failed in VTL-1 failed",
        0,
        (int)&Context.EnableKeyWords + 4,
        1047);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v9 + 72),
      2u,
      0xAu,
      0x1Eu,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v12);
  }
}
