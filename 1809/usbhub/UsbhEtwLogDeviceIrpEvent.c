/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x1C000E914
 * Callers:
 *     UsbhCompletePdoWakeIrp @ 0x1C0002C00 (UsbhCompletePdoWakeIrp.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoPower_WaitWake @ 0x1C000C690 (UsbhPdoPower_WaitWake.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C000C9C0 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0020410 (UsbhPdoPnp_StartDevice.c)
 *     UsbhFdoResetPdoPort @ 0x1C0042140 (UsbhFdoResetPdoPort.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005AA0C (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C005AD50 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000EA28 (UsbhEtwGetDeviceInfo.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001FE60 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  int ActivityIdIrp; // eax
  const GUID *v7; // rdx
  _BYTE v8[16]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v9[48]; // [rsp+78h] [rbp-1h] BYREF

  if ( dword_1C006E650 )
  {
    FdoExt(*(_QWORD *)(a1 + 1184));
    UsbhEtwGetDeviceInfo(a1, v9);
    if ( a2 && g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, v8);
    else
      ActivityIdIrp = -1073741823;
    v7 = (const GUID *)v8;
    if ( ActivityIdIrp < 0 )
      v7 = 0LL;
    UsbhEtwWrite(a3, v7);
  }
}
