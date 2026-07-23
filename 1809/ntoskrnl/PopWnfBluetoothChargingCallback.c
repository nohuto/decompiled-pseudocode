/*
 * XREFs of PopWnfBluetoothChargingCallback @ 0x1402D7160
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExQueryWnfStateData @ 0x1406C9520 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfBluetoothChargingCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // edi
  KIRQL v5; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  char v8[4]; // [rsp+20h] [rbp-18h] BYREF
  int v9[5]; // [rsp+24h] [rbp-14h] BYREF
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = a4;
  v9[0] = 1;
  v4 = ExQueryWnfStateData(a1, &v10, v8, v9);
  if ( v4 >= 0 )
  {
    if ( v9[0] )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      byte_1404191E5 = v8[0];
      if ( PopCsResiliencyStats[0] && v8[0] && !byte_1404184A3 )
        byte_1404184A3 = 1;
      KxReleaseSpinLock(&PopCsResiliencyStatsLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v5);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v4;
}
