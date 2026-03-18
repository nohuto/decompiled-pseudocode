/*
 * XREFs of UsbhClearPdoIdleReady @ 0x1C0001250
 * Callers:
 *     UsbhBusIf_ResumeChildHub @ 0x1C0001140 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003C40 (UsbhPdoSetD0.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C005D130 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhRefPdoDeviceHandle @ 0x1C000EA60 (UsbhRefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001CE30 (UsbhDerefPdoDeviceHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UsbhClearPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // r9d
  __int64 v10; // rax

  v6 = PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232235619LL);
  v8 = result;
  if ( result )
  {
    Log(a1, 32, 1919306033, 0, result);
    *(_DWORD *)(v6 + 1784) &= v9;
    v10 = FdoExt(a1);
    if ( *(_QWORD *)(v10 + 4480) )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v10 + 4480))(*(_QWORD *)(v10 + 4232), v8, 0LL);
    return UsbhDerefPdoDeviceHandle(a1, v8, a3, 1232235619LL);
  }
  return result;
}
