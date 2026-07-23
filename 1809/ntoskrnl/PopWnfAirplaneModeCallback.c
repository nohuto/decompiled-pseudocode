/*
 * XREFs of PopWnfAirplaneModeCallback @ 0x1402D7090
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExQueryWnfStateData @ 0x1406C9520 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfAirplaneModeCallback(__int64 a1)
{
  int v1; // edi
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  _DWORD v7[4]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 12;
  v1 = ExQueryWnfStateData(a1, &v6, v7, &v5);
  if ( v1 >= 0 )
  {
    if ( v5 >= 0xC )
    {
      v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      byte_1404191E4 = v7[0] == 0;
      KxReleaseSpinLock(&PopCsResiliencyStatsLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v2);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
