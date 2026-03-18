/*
 * XREFs of MiSessionRemoveImage @ 0x140168214
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1400176C0 (MiSessionLookupImage.c)
 *     RtlAvlRemoveNode @ 0x140029C60 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MmLockLoadedModuleListExclusive @ 0x14015586C (MmLockLoadedModuleListExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiHandleDriverNonPagedSections @ 0x140710564 (MiHandleDriverNonPagedSections.c)
 */

unsigned __int64 *__fastcall MiSessionRemoveImage(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v5; // r14
  unsigned __int64 SessionVm; // r15
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // r12
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // rbx
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 k; // rcx
  _QWORD *j; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v27; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
  SessionVm = MiGetSessionVm();
  SharedVm = MiGetSharedVm(SessionVm);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  MmLockLoadedModuleListExclusive(&v27);
  v10 = MiSessionLookupImage(v2);
  v11 = v10;
  if ( !v10 )
    KeBugCheckEx(0x1Au, 0x2100uLL, BugCheckParameter2, v2, 0LL);
  if ( (*((_DWORD *)v10 + 15))-- == 1 )
  {
    v13 = (unsigned __int64 *)*v10;
    v14 = v10;
    if ( *v10 )
    {
      for ( ; v13[1]; v13 = (unsigned __int64 *)v13[1] )
        ;
    }
    else
    {
      for ( i = v10[2]; ; i = v13[2] )
      {
        v13 = (unsigned __int64 *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v13 || (unsigned __int64 *)v13[1] == v14 )
          break;
        v14 = v13;
      }
    }
    if ( v13 )
      v16 = v13[6];
    else
      v16 = 0LL;
    v17 = v11[1];
    v18 = (unsigned __int64)v11;
    *a2 = v16;
    if ( v17 )
    {
      for ( j = *(_QWORD **)v17; j; j = (_QWORD *)*j )
        v17 = (unsigned __int64)j;
    }
    else
    {
      for ( k = v11[2]; ; k = *(_QWORD *)(v17 + 16) )
      {
        v17 = k & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v17 || *(_QWORD *)v17 == v18 )
          break;
        v18 = v17;
      }
    }
    if ( v17 )
      v21 = *(_QWORD *)(v17 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v21 = 0LL;
    a2[1] = v21;
    RtlAvlRemoveNode((unsigned __int64 *)(v5 + 88), v11);
    a2[2] = v11[9];
  }
  else
  {
    v11 = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v27 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v27);
  LOBYTE(v22) = v9;
  MiUnlockWorkingSetExclusive(SessionVm, v22, v23, v24);
  if ( v11 && *((_BYTE *)v11 + 64) == 1 )
    MiHandleDriverNonPagedSections(BugCheckParameter2, 0LL, 0LL);
  return v11;
}
