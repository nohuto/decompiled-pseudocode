/*
 * XREFs of PopWnfAirplaneModeCallback @ 0x1402F1780
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExQueryWnfStateData @ 0x1406E9F80 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfAirplaneModeCallback(__int64 a1)
{
  int v1; // edi
  KIRQL v2; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v5 = 12;
  v7 = 0LL;
  v8 = 0;
  v1 = ExQueryWnfStateData(a1, &v6, &v7, &v5);
  if ( v1 >= 0 )
  {
    if ( v5 >= 0xC )
    {
      v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
      byte_140443A84 = (_DWORD)v7 == 0;
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
