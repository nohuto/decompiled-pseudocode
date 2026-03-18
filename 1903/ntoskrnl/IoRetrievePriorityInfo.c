/*
 * XREFs of IoRetrievePriorityInfo @ 0x1400FFD60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x14005A520 (PsGetIoPriorityThread.c)
 *     IoGetIoPriorityHint @ 0x1400FFF50 (IoGetIoPriorityHint.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __stdcall IoRetrievePriorityInfo(
        PIRP Irp,
        PFILE_OBJECT FileObject,
        PETHREAD Thread,
        PIO_PRIORITY_INFO PriorityInfo)
{
  int v4; // r14d
  int v5; // ebp
  _DWORD *FileObjectExtension; // rax
  _IO_PRIORITY_HINT IoPriorityHint; // edx
  unsigned int BasePriority; // eax
  unsigned int v11; // edx
  int v13; // edx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rcx
  char *i; // rcx
  struct _KPRCB *v18; // rcx

  v4 = 0;
  v5 = 2;
  PriorityInfo->IoPriority = IoPriorityNormal;
  if ( Irp && (Irp->Flags & 0xE0000) != 0 )
  {
    IoPriorityHint = IoGetIoPriorityHint(Irp);
    goto LABEL_9;
  }
  if ( !FileObject )
  {
LABEL_17:
    if ( !Thread )
      goto LABEL_33;
    IoPriorityHint = (unsigned int)PsGetIoPriorityThread((__int64)Thread);
    goto LABEL_9;
  }
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension )
  {
    v13 = FileObjectExtension[20];
    if ( v13 )
    {
      IoPriorityHint = v13 - 1;
      goto LABEL_9;
    }
    goto LABEL_17;
  }
  if ( !Thread )
  {
LABEL_33:
    *(_QWORD *)&PriorityInfo->ThreadPriority = -1LL;
    return 0;
  }
  IoPriorityHint = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
    IoPriorityHint = IoPriorityVeryLow;
  if ( (unsigned int)IoPriorityHint < IoPriorityNormal
    && Thread == KeGetCurrentThread()
    && Thread[1].Timer.DueTime.LowPart )
  {
    IoPriorityHint = IoPriorityNormal;
  }
LABEL_9:
  PriorityInfo->IoPriority = IoPriorityHint;
  if ( !Thread )
    goto LABEL_33;
  if ( Thread->Priority >= 16 || !Thread->SchedulingGroup )
    goto LABEL_12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulingGroup = Thread->SchedulingGroup;
  if ( SchedulingGroup )
  {
    for ( i = (char *)SchedulingGroup + CurrentPrcb->ScbOffset; i; i = (char *)*((_QWORD *)i + 51) )
    {
      v4 = ((unsigned __int8)i[112] >> 3) & 1;
      if ( v4 )
        break;
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v18);
    }
    __writecr8(CurrentIrql);
  }
  BasePriority = 1;
  if ( !v4 )
LABEL_12:
    BasePriority = Thread->BasePriority;
  PriorityInfo->ThreadPriority = BasePriority;
  v11 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
  if ( (Thread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    if ( v11 < 2 )
      v5 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 12) & 7;
    v11 = v5;
  }
  PriorityInfo->PagePriority = v11;
  return 0;
}
