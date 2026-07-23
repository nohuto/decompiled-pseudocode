/*
 * XREFs of KiConfigureCpuSetSchedulingInformation @ 0x14017E38C
 * Callers:
 *     KiConfigureSchedulingInformation @ 0x1405734C0 (KiConfigureSchedulingInformation.c)
 *     KeConfigureHeteroProcessors @ 0x140843D08 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x140117AE0 (RtlWriteAcquireTickLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiConfigureCpuSetSchedulingInformation(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 *v3; // rdx
  _BYTE *v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KxAcquireSpinLock(&KiCpuSetLock);
  RtlWriteAcquireTickLock(&KiCpuSetSequence);
  v3 = (unsigned __int64 *)(a1 + 24944);
  v4 = (_BYTE *)(KiCpuSetData
               + 16 * (*(unsigned __int8 *)(a1 + 209) + ((unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 6)));
  *v4 = *(_BYTE *)(a1 + 208);
  v4[1] = *(_BYTE *)(a1 + 209);
  _BitScanForward64(&v5, *(_QWORD *)(a1 + 24920));
  v4[2] = v5;
  v6 = 0LL;
  v7 = 5LL;
  do
  {
    v8 = *v3++;
    if ( !v8 )
      v8 = v6;
    v6 = v8;
    --v7;
  }
  while ( v7 );
  if ( v8 )
  {
    _BitScanForward64(&v8, v8);
    v4[3] = v8;
  }
  _BitScanForward64(&v9, *(_QWORD *)(*(_QWORD *)(a1 + 192) + 136LL));
  v4[4] = v9;
  v4[5] = *(_BYTE *)(a1 + 24224);
  v4[6] = *(_BYTE *)(a1 + 24225);
  ++KiCpuSetSequence;
  KxReleaseSpinLock(&KiCpuSetLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
