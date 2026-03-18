/*
 * XREFs of UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005AE0
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C00033E0 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C0004020 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoD0PoComplete_Action @ 0x1C00043A0 (UsbhFdoD0PoComplete_Action.c)
 *     UsbhFdoSxIoComplete_Action @ 0x1C0005020 (UsbhFdoSxIoComplete_Action.c)
 *     UsbhFdoPower_QueryPower @ 0x1C00052B0 (UsbhFdoPower_QueryPower.c)
 *     UsbhFdoQuerySystemPowerState @ 0x1C000536C (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoDxPoComplete_Action @ 0x1C0005720 (UsbhFdoDxPoComplete_Action.c)
 *     UsbhFdoQueryDevicePowerDxPoCompletion @ 0x1C0005900 (UsbhFdoQueryDevicePowerDxPoCompletion.c)
 *     UsbhFdoQueryDevicePowerState @ 0x1C00059A4 (UsbhFdoQueryDevicePowerState.c)
 *     UsbhFdoSetPowerD0_Action @ 0x1C0005A24 (UsbhFdoSetPowerD0_Action.c)
 *     UsbhFdoPower_SetPower @ 0x1C0005EA0 (UsbhFdoPower_SetPower.c)
 *     UsbhFdoSystemPowerState @ 0x1C0006010 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C0006560 (UsbhFdoDevicePowerState.c)
 *     UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C000C850 (UsbhFdoQuerySystemPowerSxIoCompletion.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Fdo(__int64 a1, IRP *a2, int a3)
{
  __int64 v5; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 Options; // rcx
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // r11
  __int64 v12; // rdx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    v8 = *(_QWORD *)(v5 + 8 * Options + 840);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v9 = *(_QWORD *)(v5 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
      *(_DWORD *)v9 = 827215696;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = v8;
      *(_QWORD *)(v9 + 24) = a2;
    }
    v10 = *(_QWORD *)(v5 + 8LL * (unsigned int)Options + 856);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 843992912;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = v10;
        *(_QWORD *)(v12 + 24) = CurrentStackLocation;
      }
    }
    *(_QWORD *)(v5 + 8LL * (unsigned int)Options + 840) = 0LL;
    *(_QWORD *)(v5 + 8LL * (unsigned int)Options + 856) = 0LL;
    *(_DWORD *)(v5 + 4LL * (unsigned int)Options + 872) = a3;
    PoStartNextPowerIrp(a2);
  }
}
