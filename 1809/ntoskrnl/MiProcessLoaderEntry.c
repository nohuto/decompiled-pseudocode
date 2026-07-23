/*
 * XREFs of MiProcessLoaderEntry @ 0x1400F5C2C
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140683630 (MiConstructLoaderEntry.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlInsertInvertedFunctionTable @ 0x1400F5AB4 (RtlInsertInvertedFunctionTable.c)
 *     MmLockLoadedModuleListExclusive @ 0x1400F5E00 (MmLockLoadedModuleListExclusive.c)
 *     RtlRemoveInvertedFunctionTable @ 0x14016B93C (RtlRemoveInvertedFunctionTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiProcessLoaderEntry(unsigned __int64 *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 **v5; // rax
  bool v6; // r8
  _QWORD *v7; // rdx
  ULONG_PTR v8; // r10
  unsigned __int64 v9; // r8
  _QWORD *v10; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 **v13; // rax
  struct _KPRCB *v14; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v16; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  if ( a2 != 1 )
  {
    if ( (MiFlags & 0x80000) == 0 )
      RtlRemoveInvertedFunctionTable(a1[6]);
    MmLockLoadedModuleListExclusive(&v16);
    v12 = *a1;
    v13 = (unsigned __int64 **)a1[1];
    if ( *(unsigned __int64 **)(*a1 + 8) == a1 && *v13 == a1 )
    {
      *v13 = (unsigned __int64 *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      RtlAvlRemoveNode(&BugCheckParameter3, a1 + 29);
      ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v16);
      goto LABEL_14;
    }
LABEL_22:
    __fastfail(3u);
  }
  MmLockLoadedModuleListExclusive(&v16);
  v5 = (unsigned __int64 **)*(&PsLoadedModuleList + 1);
  if ( *(PVOID **)*(&PsLoadedModuleList + 1) != &PsLoadedModuleList )
    goto LABEL_22;
  *a1 = (unsigned __int64)&PsLoadedModuleList;
  v6 = 0;
  a1[1] = (unsigned __int64)v5;
  *v5 = a1;
  v7 = (_QWORD *)BugCheckParameter3;
  *(&PsLoadedModuleList + 1) = a1;
  v8 = a1[6];
  if ( BugCheckParameter3 )
  {
    while ( 1 )
    {
      v9 = *(v7 - 23) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v8 <= *((unsigned int *)v7 - 42) + v9 - 1 )
      {
        if ( v8 >= v9 )
          KeBugCheckEx(0x1Au, 0x2101uLL, v8, (ULONG_PTR)v7, 0LL);
        v10 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          v6 = 0;
          break;
        }
      }
      else
      {
        v10 = (_QWORD *)v7[1];
        if ( !v10 )
        {
          v6 = 1;
          break;
        }
      }
      v7 = v10;
    }
  }
  RtlAvlInsertNodeEx(&BugCheckParameter3, (unsigned __int64)v7, v6, a1 + 29);
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v14);
  }
  __writecr8(v16);
  if ( (MiFlags & 0x80000) == 0 )
    RtlInsertInvertedFunctionTable(a1[6], *((unsigned int *)a1 + 16));
LABEL_14:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
