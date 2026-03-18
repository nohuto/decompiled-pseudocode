/*
 * XREFs of UsbhSetPdoPowerState @ 0x1C0003BB4
 * Callers:
 *     UsbhPdoSetDx @ 0x1C000138C (UsbhPdoSetDx.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00025EC (UsbhPdoSetD0_Finish.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0002B50 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSystemPowerState @ 0x1C0003808 (UsbhPdoSystemPowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003C40 (UsbhPdoSetD0.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004B0E4 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C005B9C0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhSetPdoPowerState(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax

  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a2 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v6 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  FdoExt(*(_QWORD *)(a1 + 8));
  v7 = ((unsigned __int8)v6[2] + 1) & 7;
  v6[2] = v7;
  v7 *= 32LL;
  *(_DWORD *)((char *)v6 + v7 + 272) = a5;
  result = (unsigned int)v6[282];
  *(_DWORD *)((char *)v6 + v7 + 276) = result;
  *(_DWORD *)((char *)v6 + v7 + 280) = a4;
  v6[282] = a4;
  return result;
}
