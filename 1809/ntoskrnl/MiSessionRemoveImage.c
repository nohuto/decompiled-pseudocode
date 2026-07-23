/*
 * XREFs of MiSessionRemoveImage @ 0x140158200
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiSessionLookupImage @ 0x14009DB08 (MiSessionLookupImage.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 *     MmLockLoadedModuleListExclusive @ 0x1400F5E00 (MmLockLoadedModuleListExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiHandleDriverNonPagedSections @ 0x14065694C (MiHandleDriverNonPagedSections.c)
 */

unsigned __int64 *__fastcall MiSessionRemoveImage(ULONG_PTR BugCheckParameter2, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v5; // r14
  unsigned __int64 SessionVm; // r15
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // r12
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // rbx
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // rdx
  unsigned __int64 j; // rcx
  unsigned __int64 *i; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 m; // rcx
  _QWORD *k; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v27; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 48);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
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
      for ( i = (unsigned __int64 *)v13[1]; i; i = (unsigned __int64 *)i[1] )
        v13 = i;
    }
    else
    {
      for ( j = v10[2]; ; j = v13[2] )
      {
        v13 = (unsigned __int64 *)(j & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v13 || (unsigned __int64 *)v13[1] == v14 )
          break;
        v14 = v13;
      }
    }
    if ( v13 )
      v17 = v13[6];
    else
      v17 = 0LL;
    v18 = v11[1];
    v19 = (unsigned __int64)v11;
    *a2 = v17;
    if ( v18 )
    {
      for ( k = *(_QWORD **)v18; k; k = (_QWORD *)*k )
        v18 = (unsigned __int64)k;
    }
    else
    {
      for ( m = v11[2]; ; m = *(_QWORD *)(v18 + 16) )
      {
        v18 = m & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v18 || *(_QWORD *)v18 == v19 )
          break;
        v19 = v18;
      }
    }
    if ( v18 )
      v22 = *(_QWORD *)(v18 + 40) & 0xFFFFFFFFFFFFFFFCuLL;
    else
      v22 = 0LL;
    a2[1] = v22;
    RtlAvlRemoveNode((unsigned __int64 *)(v5 + 104), v11);
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
  MiUnlockWorkingSetExclusive(SessionVm, v9, v23, v24);
  if ( v11 && *((_BYTE *)v11 + 64) == 1 )
    MiHandleDriverNonPagedSections(BugCheckParameter2, 0LL, 0LL);
  return v11;
}
