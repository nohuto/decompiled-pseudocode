/*
 * XREFs of MiWaitForAsynchronousFlushes @ 0x1402B4F64
 * Callers:
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWaitForAsynchronousFlushes(unsigned int *a1)
{
  unsigned int *v1; // rdi
  PVOID *v2; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned int v4; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v6; // rcx

  v1 = a1;
  v2 = (PVOID *)(a1 + 528);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v4 = 0;
  do
  {
    if ( !*((_QWORD *)a1 + 2) || a1[13] == 1 )
    {
      a1 += 66;
    }
    else
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      KeWaitForMultipleObjects(8u, v2, WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(v1 + 544));
      a1 = v1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
    }
  }
  while ( a1 < (unsigned int *)v2 );
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v6 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v6);
  }
  __writecr8(CurrentIrql);
  while ( (*v1 & 0x80000000) == 0 )
  {
    v1 += 66;
    if ( v1 >= (unsigned int *)v2 )
      return v4;
  }
  return *v1;
}
