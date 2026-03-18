/*
 * XREFs of ACPIInternalDeviceClockIrpStartDeviceCompletion @ 0x1C0031680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalDeviceClockIrpStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  int v4; // eax

  a2->IoStatus.Status = a3;
  if ( a3 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 320) = 2;
    if ( (*(_QWORD *)&v4 & 0x10000LL) != 0 )
      PoRequestPowerIrp(
        *(PDEVICE_OBJECT *)(a1 + 720),
        0,
        *(POWER_STATE *)(a1 + 488),
        ACPIInternalWaitWakeLoop,
        0LL,
        0LL);
  }
  IofCompleteRequest(a2, 0);
}
