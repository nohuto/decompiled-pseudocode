/*
 * XREFs of UsbhHubAckPortChange @ 0x1C001A2A0
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C0011670 (UsbhHubProcessIsr.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C0017B10 (UsbhSyncSendCommand.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0040248 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhHubAckPortChange(__int64 a1, __int16 a2, __int16 *a3, _DWORD *a4)
{
  __int16 v8; // ax
  unsigned __int16 v9; // si
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v14; // [rsp+20h] [rbp-58h]
  _WORD v15[24]; // [rsp+48h] [rbp-30h] BYREF
  __int16 v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      27,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
      a2);
  v8 = *a3;
  if ( (*a3 & 1) != 0 )
  {
    v9 = 16;
  }
  else if ( (v8 & 2) != 0 )
  {
    v9 = 17;
  }
  else if ( (v8 & 4) != 0 )
  {
    v9 = 18;
  }
  else if ( (v8 & 8) != 0 )
  {
    v9 = 19;
  }
  else
  {
    if ( (v8 & 0x10) == 0 )
      return 0LL;
    v9 = 20;
  }
  v15[0] = 291;
  v15[1] = v9;
  v15[2] = a2;
  v15[3] = 0;
  v11 = (int)UsbhSyncSendCommand(a1, (__int64)v15, 0LL, &v16, v14, a4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v12 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v12 = 1734560577;
        *(_QWORD *)(v12 + 16) = v9;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 24) = v11;
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      1,
      28,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
      a2,
      v11);
  return (unsigned int)v11;
}
