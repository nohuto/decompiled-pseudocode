/*
 * XREFs of ExpAeThresholdInitialization @ 0x140A16388
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A03DEC (ExpInitSystemPhase1.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400FCC10 (KeGenericCallDpc.c)
 *     ExpAeMeasureContention @ 0x140190920 (ExpAeMeasureContention.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

char ExpAeThresholdInitialization()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v2; // r9
  unsigned __int64 v3; // rbx
  int v4; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  char v9; // cl
  unsigned __int64 v10; // rdx
  _BYTE v11[128]; // [rsp+60h] [rbp+0h] BYREF

  memset((void *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0xC0uLL);
  v0 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  do
    v0 += ExpAeMeasureContention((signed __int64 *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL));
  while ( v2 != 1 );
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  v3 = v0 >> 10;
  KeGenericCallDpc((__int64)ExpAeThresholdInitWorker, (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80)
     / 1024LL
     / (unsigned __int64)*(int *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) >= 4 * v3 )
  {
    if ( HIDWORD(v3) )
    {
      _BitScanReverse(&v8, HIDWORD(v3));
      v7 = v8 + 32;
    }
    else
    {
      _BitScanReverse(&v7, v3);
    }
    if ( v7 < 2 )
      v9 = 0;
    else
      v9 = v7 - 2;
    ExpAeCycleCountScaler = v9;
    v10 = (v3 + (v3 >> 2)) << 7 >> v9;
    if ( v10 > 0xFFFFFFFF )
      LODWORD(v10) = -1;
    v4 = 15728640;
    ExpAeCycleCountThreshold = v10;
  }
  else
  {
    v4 = -1;
    ExpAeCycleCountScaler = -1;
    ExpAeCycleCountThreshold = -1;
  }
  ExpAeSamplingPeriodMask = v4;
  return 1;
}
