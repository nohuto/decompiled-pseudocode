/*
 * XREFs of UsbhPoStartNextPowerIrp_Pdo @ 0x1C0003AF4
 * Callers:
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C0002A10 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoPower_SetPower @ 0x1C0003270 (UsbhPdoPower_SetPower.c)
 *     UsbhPdoSystemPowerState @ 0x1C0003808 (UsbhPdoSystemPowerState.c)
 *     UsbhPdoPower_QueryPower @ 0x1C00039C0 (UsbhPdoPower_QueryPower.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

void __fastcall UsbhPoStartNextPowerIrp_Pdo(int a1, __int64 a2, IRP *a3, int a4)
{
  __int64 v7; // rax
  __int64 CurrentStackLocation; // rdi
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // r11

  v7 = PdoExt(a2);
  CurrentStackLocation = (__int64)a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  v10 = *(unsigned int *)(CurrentStackLocation + 16);
  if ( (unsigned int)v10 <= 1 )
  {
    Log(a1, 16, 1346653745, *(_QWORD *)(v9 + 8 * v10 + 800), (__int64)a3);
    Log(a1, 16, 1346653746, *(_QWORD *)(v12 + 8 * v11 + 816), CurrentStackLocation);
    *(_QWORD *)(v14 + 8 * v13 + 800) = 0LL;
    *(_QWORD *)(v14 + 8 * v13 + 816) = 0LL;
    *(_DWORD *)(v14 + 4 * v13 + 832) = a4;
    PoStartNextPowerIrp(a3);
  }
}
