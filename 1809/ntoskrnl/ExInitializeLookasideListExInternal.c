/*
 * XREFs of ExInitializeLookasideListExInternal @ 0x1400F3000
 * Callers:
 *     ExInitializeLookasideListEx @ 0x1400F2FB0 (ExInitializeLookasideListEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExInitializeLookasideListExInternal(
        PSLIST_HEADER SListHead,
        PVOID (__fastcall *a2)(POOL_TYPE a1, SIZE_T a2, ULONG a3),
        void (__stdcall *a3)(PPRIVILEGE_SET Privileges),
        int a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        __int16 a8,
        int a9)
{
  __int16 v11; // cx
  __int16 v14; // r15
  int v15; // eax
  int v16; // esi
  KSPIN_LOCK *v17; // r12
  __int64 *v18; // rdi
  KIRQL v19; // si
  PSLIST_HEADER *v20; // rax
  PSLIST_HEADER v21; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  int v24; // [rsp+20h] [rbp-38h]

  v11 = a8;
  if ( a8 )
  {
    if ( (unsigned __int16)(a8 - 256) > 0x300u )
      return 3221225718LL;
  }
  else
  {
    v11 = 256;
  }
  v14 = 0;
  if ( !a9 )
    v14 = v11;
  v15 = 8;
  if ( a6 > 8 )
    v15 = a6;
  v24 = v15;
  if ( ((a5 - 1) & a5) != 0 || (a5 & 0xFFFFFFFC) != 0 )
    return 3221225715LL;
  if ( (a5 & 1) != 0 )
  {
    v16 = 16;
  }
  else
  {
    v16 = 0;
    if ( a5 )
      v16 = 8;
  }
  if ( (a4 & 0xFFFFFC18) != 0 || (a4 & 3) == 3 )
    return 3221225714LL;
  v17 = &ExNPagedLookasideLock;
  v18 = &ExNPagedLookasideListHead;
  if ( (a4 & 1) != 0 )
  {
    v17 = &ExPagedLookasideLock;
    v18 = &ExPagedLookasideListHead;
  }
  InitializeSListHead(SListHead);
  LOWORD(SListHead[1].Alignment) = ExMinimumLookasideDepth;
  *((_DWORD *)&SListHead[2].HeaderX64 + 2) = a7;
  *((_DWORD *)&SListHead[2].HeaderX64 + 3) = v24;
  *((_WORD *)&SListHead[1].HeaderX64 + 1) = v14;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 4) = 0LL;
  *(_QWORD *)((char *)&SListHead[1].HeaderX64 + 12) = 0LL;
  *((_DWORD *)&SListHead[2].HeaderX64 + 1) = a4 | v16;
  if ( !a2 )
    a2 = CmpAllocateTransientPoolWithTag;
  SListHead[3].Alignment = (unsigned __int64)a2;
  if ( !a3 )
    a3 = CmSiFreeMemory;
  SListHead[3].Region = (unsigned __int64)a3;
  SListHead[5].Alignment = 0LL;
  v19 = KeAcquireSpinLockRaiseToDpc(v17);
  if ( a9 )
  {
    LOWORD(SListHead[1].Alignment) = v14;
    *((_WORD *)&SListHead[1].HeaderX64 + 1) = -1;
  }
  else if ( !ExMinimumLookasideDepth )
  {
    LODWORD(SListHead[1].Alignment) = -65536;
  }
  v20 = (PSLIST_HEADER *)v18[1];
  v21 = SListHead + 4;
  if ( *v20 != (PSLIST_HEADER)v18 )
    __fastfail(3u);
  v21->Alignment = (unsigned __int64)v18;
  v21->Region = (unsigned __int64)v20;
  *v20 = v21;
  v18[1] = (__int64)v21;
  KxReleaseSpinLock(v17);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v19);
  return 0LL;
}
