/*
 * XREFs of KeSetTagCpuSets @ 0x1402AD610
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     RtlWriteAcquireTickLock @ 0x1400F9DE0 (RtlWriteAcquireTickLock.c)
 *     KiValidateCpuSetMasks @ 0x1400F9F0C (KiValidateCpuSetMasks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSetTagCpuSets(unsigned int a1, char *a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  unsigned int i; // r8d
  unsigned __int64 j; // rdx
  unsigned __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = (unsigned __int64 *)a2;
  result = KiValidateCpuSetMasks(a2, a1);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KxAcquireSpinLock(&KiCpuSetLock);
    RtlWriteAcquireTickLock(&KiCpuSetSequence);
    for ( i = 0; i < a1; ++v3 )
    {
      for ( j = *v3; j; *(_QWORD *)(KiCpuSetData + 16LL * ((i << 6) + (unsigned int)v10) + 8) = a3 )
      {
        _BitScanForward64(&v10, j);
        j &= ~(1LL << v10);
      }
      ++i;
    }
    ++KiCpuSetSequence;
    KxReleaseSpinLock(&KiCpuSetLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  return result;
}
