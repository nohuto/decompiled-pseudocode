/*
 * XREFs of IopDisassociateThreadIrp @ 0x14027ECE8
 * Callers:
 *     IoCancelThreadIo @ 0x1406A7A58 (IoCancelThreadIo.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IoAllocateErrorLogEntry @ 0x14016CC50 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x14016CD70 (IoWriteErrorLogEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR IopDisassociateThreadIrp()
{
  unsigned __int8 CurrentIrql; // di
  unsigned int *p_SystemCallNumber; // rsi
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  LONG_PTR result; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rbx
  struct _KPRCB *v13; // rcx
  _DWORD *ErrorLogEntry; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  p_SystemCallNumber = &KeGetCurrentThread()[1].SystemCallNumber;
  if ( *(unsigned int **)p_SystemCallNumber == p_SystemCallNumber )
    goto LABEL_4;
  v2 = KeAcquireQueuedSpinLock(0xBuLL);
  v3 = *(_QWORD **)p_SystemCallNumber;
  v4 = v2;
  if ( *(char *)(*(_QWORD *)p_SystemCallNumber + 35LL) == *(char *)(*(_QWORD *)p_SystemCallNumber + 34LL) + 2 )
  {
    KeReleaseQueuedSpinLock(0xBuLL, v2);
LABEL_4:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  ObfReferenceObjectWithTag((PVOID)v3[15], 0x746C6644u);
  v7 = *(_QWORD **)p_SystemCallNumber;
  v8 = **(_QWORD **)p_SystemCallNumber;
  if ( *(unsigned int **)(*(_QWORD *)p_SystemCallNumber + 8LL) != p_SystemCallNumber
    || *(_QWORD **)(v8 + 8) != v7
    || (*(_QWORD *)p_SystemCallNumber = v8,
        *(_QWORD *)(v8 + 8) = p_SystemCallNumber,
        v3[1] = v3,
        *v3 = v3,
        v9 = (_QWORD *)qword_140436F28,
        *(__int64 **)qword_140436F28 != &IopDeadIrps) )
  {
    __fastfail(3u);
  }
  *v7 = &IopDeadIrps;
  v7[1] = v9;
  *v9 = v7;
  qword_140436F28 = (__int64)v7;
  if ( *((_BYTE *)v3 + 35) <= *((_BYTE *)v3 + 34)
    && (v11 = v3[20]) != 0
    && (v10 = v3[19], v12 = *(void **)(v10 + 40), *(void **)(v11 + 8) == v12) )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(v10 + 40), 0x746C6644u);
  }
  else
  {
    v12 = 0LL;
  }
  KeReleaseQueuedSpinLock(0xBuLL, v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v13);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v12 )
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(v12, 0x30u);
    if ( ErrorLogEntry )
    {
      ErrorLogEntry[3] = -2147221450;
      IoWriteErrorLogEntry(ErrorLogEntry);
    }
    return ObfDereferenceObject(v12);
  }
  return result;
}
