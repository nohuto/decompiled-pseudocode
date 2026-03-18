/*
 * XREFs of Usbh_FDO_Pnp_State @ 0x1C0029494
 * Callers:
 *     UsbhFdoSystemPowerState @ 0x1C0006010 (UsbhFdoSystemPowerState.c)
 *     UsbhInitCallbackWorker @ 0x1C0028C50 (UsbhInitCallbackWorker.c)
 *     UsbhAddDevice @ 0x1C0028CF0 (UsbhAddDevice.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C00292F0 (UsbhFdoPnp_StartDevice.c)
 *     UsbhFdoPnp_RemoveDevice @ 0x1C0051910 (UsbhFdoPnp_RemoveDevice.c)
 *     UsbhFdoPnp_StopDevice @ 0x1C0051B20 (UsbhFdoPnp_StopDevice.c)
 *     UsbhFdoPnp_SurpriseRemove @ 0x1C0051BB0 (UsbhFdoPnp_SurpriseRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall Usbh_FDO_Pnp_State(__int64 a1, int a2)
{
  __int64 v3; // rbp
  _DWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 1398031678, *((_QWORD *)v4 + 171), v3);
  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(v5 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(v5, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(v5, *(_QWORD *)(v5 + 64));
  KeWaitForSingleObject((PVOID)(v6 + 4960), Executive, 0, 0, 0LL);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(v6 + 1360);
  *(_DWORD *)(a1 + 60) = v3;
  *(_DWORD *)(a1 + 48) = 827278406;
  *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v6 + 1328) = a1;
  *((_QWORD *)v4 + 169) = *(_QWORD *)(a1 + 24);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD))v4 + 171))(a1, (unsigned int)v3);
  *((_QWORD *)v4 + 169) = 0LL;
  return result;
}
