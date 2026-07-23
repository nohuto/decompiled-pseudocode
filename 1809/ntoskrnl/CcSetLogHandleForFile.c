/*
 * XREFs of CcSetLogHandleForFile @ 0x14026A570
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __stdcall CcSetLogHandleForFile(PFILE_OBJECT FileObject, PVOID LogHandle, PFLUSH_TO_LSN FlushToLsnRoutine)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  char *SharedCacheMap; // rbx
  __int64 Partition; // rdi
  bool v8; // zf
  char **v9; // r8
  PVOID *v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 **v13; // rdx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SectionObjectPointer = FileObject->SectionObjectPointer;
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( !*((_DWORD *)SharedCacheMap + 1) )
    KeBugCheckEx(0x34u, 0x27BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (*((_DWORD *)SharedCacheMap + 38) & 0x1000000) != 0 )
    KeBugCheckEx(0x34u, 0x281uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = CcGetPartition(
                (_QWORD *)SectionObjectPointer->SharedCacheMap,
                (__int64)LogHandle,
                (__int64)FlushToLsnRoutine);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v8 = *((_QWORD *)SharedCacheMap + 30) == 0LL;
  *((_QWORD *)SharedCacheMap + 31) = FlushToLsnRoutine;
  if ( !v8 )
  {
    v9 = (char **)*((_QWORD *)SharedCacheMap + 15);
    v10 = (PVOID *)*((_QWORD *)SharedCacheMap + 16);
    if ( v9[1] != SharedCacheMap + 120 || *v10 != SharedCacheMap + 120 )
      goto LABEL_19;
    *v10 = v9;
    v9[1] = (char *)v10;
  }
  if ( LogHandle )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x2000000u;
    v11 = (__int64 *)(SharedCacheMap + 120);
    if ( *((_DWORD *)SharedCacheMap + 28) )
      v12 = Partition + 96;
    else
      v12 = Partition + 32;
    v13 = *(__int64 ***)(v12 + 8);
    if ( *v13 == (__int64 *)v12 )
    {
      *v11 = v12;
      *((_QWORD *)SharedCacheMap + 16) = v13;
      *v13 = v11;
      *(_QWORD *)(v12 + 8) = v11;
      goto LABEL_12;
    }
LABEL_19:
    __fastfail(3u);
  }
LABEL_12:
  *((_QWORD *)SharedCacheMap + 30) = LogHandle;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
}
