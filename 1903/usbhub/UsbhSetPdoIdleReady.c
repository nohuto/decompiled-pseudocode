/*
 * XREFs of UsbhSetPdoIdleReady @ 0x1C000238C
 * Callers:
 *     UsbhPdoSetDx @ 0x1C000138C (UsbhPdoSetDx.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C00022B0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005CDEC (UsbhIdleIrp_NoIrp.c)
 * Callees:
 *     UsbhRefPdoDeviceHandle @ 0x1C000EA60 (UsbhRefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001CE30 (UsbhDerefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhSetPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  v6 = PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232364915LL);
  v8 = result;
  if ( result )
  {
    Log(a1, 32, 1919306034, 0, result);
    *(_DWORD *)(v6 + 1784) = 1;
    v9 = FdoExt(a1);
    if ( *(_QWORD *)(v9 + 4480) )
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v9 + 4480))(*(_QWORD *)(v9 + 4232), v8, 1LL);
    return UsbhDerefPdoDeviceHandle(a1, v8, a3, 1232364915LL);
  }
  return result;
}
