/*
 * XREFs of KiCreateCpuSetForProcessor @ 0x1405A1C4C
 * Callers:
 *     KiCompleteKernelInit @ 0x1405A1A9C (KiCompleteKernelInit.c)
 *     KiAllocateCpuSetData @ 0x1409ED550 (KiAllocateCpuSetData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x14011F5FC (RtlWriteAcquireTickLock.c)
 *     RtlWriteReleaseTickLock @ 0x140181F84 (RtlWriteReleaseTickLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiCreateCpuSetForProcessor(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rbx
  int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int16 *v8; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( KiCpuSetAffinities )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v3 = *(unsigned __int8 *)(a1 + 208);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    v4 = *(unsigned __int8 *)(a1 + 209);
    ++KiCpuSetCount[v3];
    v5 = (unsigned int)v3;
    v6 = *(_QWORD *)(a1 + 200);
    ++KiTotalCpuSetCount;
    v7 = (unsigned int)(v4 + ((_DWORD)v3 << 6));
    *((_QWORD *)KiCpuSetAffinities + v7) = v6;
    *((_QWORD *)KiCpuSetAffinitiesShadow + v7) = *(_QWORD *)(a1 + 200);
    KiSystemAllowedCpuSets[2 * (unsigned int)v5] |= 1LL << v4;
    KiNonParkedCpuSets[v5] |= 1LL << v4;
    v8 = &PsInitialSystemProcess[2].IdealProcessor[14];
    if ( (HIDWORD(PsInitialSystemProcess[2].ActiveProcessors.Bitmap[4]) & 0x80u) != 0 )
      v8 = *(unsigned __int16 **)v8;
    *(_QWORD *)&v8[4 * v5] |= 1LL << v4;
    RtlWriteReleaseTickLock(&KiCpuSetSequence);
    KxReleaseSpinLock(&KiCpuSetLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
  }
}
