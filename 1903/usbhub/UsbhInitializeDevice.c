/*
 * XREFs of UsbhInitializeDevice @ 0x1C00112AC
 * Callers:
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhWait @ 0x1C0002048 (UsbhWait.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0009148 (UsbhUnlinkPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhClearTt @ 0x1C004834C (UsbhClearTt.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005F2C4 (UsbhEtwLogHubEventWithExtraData.c)
 */

__int64 __fastcall UsbhInitializeDevice(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // edi
  int v11; // [rsp+48h] [rbp-A0h]
  int v12[24]; // [rsp+50h] [rbp-98h] BYREF

  v6 = PdoExt(a2);
  FdoExt(a1);
  Log(a1, 4, 1768843588, *((_QWORD *)v6 + 145), *(unsigned __int16 *)(a3 + 4));
  memset(&v12[1], 0, 0x54uLL);
  if ( (*(_DWORD *)(FdoExt(a1) + 2560) & 0x8000000) != 0 )
    UsbhWait(a1, 50);
  v12[0] = 1;
  v7 = PdoExt(a2);
  v8 = FdoExt(a1);
  if ( *(_QWORD *)(v8 + 4264) )
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(v8 + 4264))(
           *(_QWORD *)(v8 + 4232),
           *((_QWORD *)v7 + 145),
           v12);
  else
    v9 = -1073741822;
  if ( (v9 & 0xC0000000) == 0xC0000000 )
  {
    if ( v12[1] == 1 )
    {
      v6[705] = 1073807361;
    }
    else if ( v12[1] == 3 )
    {
      v6[705] = v12[2] != 0 ? 1073807365 : 1073807360;
    }
    UsbhUnlinkPdoDeviceHandle(a1, a2, 2017740856, 0);
    LOBYTE(v11) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a3 + 4), 31, (int)v12, 88, v9, v12[5], usbfile_bus_c, 6513, v11);
    UsbhEtwLogHubEventWithExtraData(
      a1,
      &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_FAILURE,
      *(unsigned __int16 *)(a3 + 4),
      v12,
      88);
    UsbhClearTt(a1);
  }
  v6[355] &= ~0x40000000u;
  return v9;
}
