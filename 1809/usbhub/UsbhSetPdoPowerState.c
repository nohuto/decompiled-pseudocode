/*
 * XREFs of UsbhSetPdoPowerState @ 0x1C0003C54
 * Callers:
 *     UsbhPdoSetDx @ 0x1C00012DC (UsbhPdoSetDx.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00024DC (UsbhPdoSetD0_Finish.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0002A50 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002C7C (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhPdoSystemPowerState @ 0x1C0003898 (UsbhPdoSystemPowerState.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C004972C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C00595F0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
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
