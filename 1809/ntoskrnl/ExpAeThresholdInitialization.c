/*
 * XREFs of ExpAeThresholdInitialization @ 0x1409D31FC
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1409B1434 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     ExpAeMeasureContention @ 0x140186ED0 (ExpAeMeasureContention.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

char ExpAeThresholdInitialization()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v2; // r9
  unsigned __int64 v3; // rbx
  unsigned int v4; // ecx
  char v5; // cl
  unsigned __int64 v6; // rdx
  int v7; // eax
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
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
  KeGenericCallDpc(
    (struct _SINGLE_LIST_ENTRY *)ExpAeThresholdInitWorker,
    (struct _SINGLE_LIST_ENTRY *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80)
     / 1024LL
     / (unsigned __int64)*(int *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) < 4 * v3 )
  {
    v7 = -1;
    ExpAeCycleCountScaler = -1;
    ExpAeCycleCountThreshold = -1;
  }
  else
  {
    if ( HIDWORD(v3) )
    {
      _BitScanReverse(&v9, HIDWORD(v3));
      v4 = v9 + 32;
    }
    else
    {
      _BitScanReverse(&v4, v3);
    }
    if ( v4 < 2 )
      v5 = 0;
    else
      v5 = v4 - 2;
    ExpAeCycleCountScaler = v5;
    v6 = (v3 + (v3 >> 2)) << 7 >> v5;
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    v7 = 15728640;
    ExpAeCycleCountThreshold = v6;
  }
  ExpAeSamplingPeriodMask = v7;
  return 1;
}
