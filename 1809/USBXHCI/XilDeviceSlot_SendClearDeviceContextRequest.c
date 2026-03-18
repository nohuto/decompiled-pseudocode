/*
 * XREFs of XilDeviceSlot_SendClearDeviceContextRequest @ 0x1C0013A68
 * Callers:
 *     UsbDevice_DisableCompletion @ 0x1C0034D40 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C0036E4C (UsbDevice_SetDeviceDisabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

void __fastcall XilDeviceSlot_SendClearDeviceContextRequest(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  int v8; // [rsp+28h] [rbp-60h]
  int v9; // [rsp+28h] [rbp-60h]
  int v10; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1[9] + 8LL);
  v5 = *(_QWORD *)(v4 + 112);
  memset(v11, 0, sizeof(v11));
  v10 = 0;
  v11[3] = *a1;
  v6 = *(_QWORD *)(a2 + 600);
  LODWORD(v11[4]) = 27;
  v11[5] = v6;
  v7 = SecureChannel_SendRequestSynchronously(v5, (unsigned int)v11, 48, (unsigned int)&v10, 4);
  if ( v7 >= 0 )
  {
    if ( v10 < 0 )
    {
      v9 = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v4 + 72),
        2u,
        0xAu,
        0x1Bu,
        (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
        v9);
      Debug_FreAssertMsg(
        (__int64)"IOCTL succeeded but DeviceSlotClearDeviceContext failed in VTL-1 failed",
        0,
        (int)&Context.MatchAllKeyword + 4,
        793);
    }
  }
  else
  {
    v8 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 72),
      2u,
      0xAu,
      0x1Au,
      (__int64)&WPP_3f8b46f1ac0c359a7a67cbd4c4174885_Traceguids,
      v8);
  }
}
