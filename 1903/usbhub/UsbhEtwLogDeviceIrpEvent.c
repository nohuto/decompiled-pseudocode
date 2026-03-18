/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x1C000EDB8
 * Callers:
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0001010 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C0002D28 (UsbhCompletePdoWakeIrp.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0008C2C (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoPower_WaitWake @ 0x1C000CDA0 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0021190 (UsbhPdoPnp_StartDevice.c)
 *     UsbhFdoResetPdoPort @ 0x1C0043790 (UsbhFdoResetPdoPort.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005CDEC (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C005D130 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhEtwGetDeviceInfo @ 0x1C000EEE8 (UsbhEtwGetDeviceInfo.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C0020BB0 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

__int64 __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  __int64 result; // rax
  int ActivityIdIrp; // eax
  const GUID *v8; // rdx
  _QWORD v9[2]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v10[48]; // [rsp+78h] [rbp-1h] BYREF

  memset(v10, 0, 0x2CuLL);
  result = 0LL;
  v9[0] = 0LL;
  v9[1] = 0LL;
  if ( dword_1C006F650 )
  {
    FdoExt(*(_QWORD *)(a1 + 1184));
    UsbhEtwGetDeviceInfo(a1, v10);
    if ( a2 && g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, v9);
    else
      ActivityIdIrp = -1073741823;
    v8 = (const GUID *)v9;
    if ( ActivityIdIrp < 0 )
      v8 = 0LL;
    return UsbhEtwWrite(a3, v8);
  }
  return result;
}
