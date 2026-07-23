/*
 * XREFs of MmUpdateMdlTrackerForMdlSwitch @ 0x1402A8F98
 * Callers:
 *     VmProbeAndLockPages @ 0x14030BB70 (VmProbeAndLockPages.c)
 *     VmUnlockPages @ 0x14030BC10 (VmUnlockPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     MiValidateMdlTracker @ 0x1402A8C08 (MiValidateMdlTracker.c)
 */

__int64 __fastcall MmUpdateMdlTrackerForMdlSwitch(ULONG_PTR BugCheckParameter3, int a2)
{
  __int64 result; // rax
  PEPROCESS v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 *i; // rbx
  ULONG_PTR v8; // rax
  _BOOL8 v9; // r8
  ULONG_PTR v10; // r12
  unsigned __int64 *v11; // r15
  __int64 (__fastcall *v12)(unsigned __int64, __int64); // rbp
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _QWORD *v15; // r14
  int v16; // eax
  _QWORD *v17; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE v20; // [rsp+30h] [rbp-38h] BYREF

  result = (unsigned int)MmTrackLockedPages;
  if ( (MmTrackLockedPages & 1) == 0 )
    return result;
  v5 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  if ( !v5 )
    v5 = PsInitialSystemProcess;
  v6 = *(_QWORD *)&v5[1].ThreadSeed[6];
  if ( !v6 )
    return result;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 24), &v20);
  if ( !a2 )
  {
    i = *(unsigned __int64 **)(v6 + 8);
    if ( !i )
    {
LABEL_22:
      if ( *(_DWORD *)(v6 + 32) )
        KeBugCheckEx(0x76u, 9uLL, BugCheckParameter3, v5[1].Affinity.Bitmap[14], *(_QWORD *)&v5[1].ThreadSeed[6]);
      goto LABEL_30;
    }
    v13 = *(_QWORD *)(BugCheckParameter3 + 48);
    while ( 1 )
    {
      v14 = i[8];
      if ( v13 < v14 )
      {
        i = (unsigned __int64 *)*i;
      }
      else
      {
        if ( v13 <= v14 )
        {
          i[3] = BugCheckParameter3;
          MiValidateMdlTracker((ULONG_PTR)i, 1);
          RtlAvlRemoveNode((unsigned __int64 *)(v6 + 8), i);
          v11 = (unsigned __int64 *)v6;
          v12 = MiLockTrackerCompare;
          v10 = BugCheckParameter3;
          goto LABEL_25;
        }
        i = (unsigned __int64 *)i[1];
      }
      if ( !i )
        goto LABEL_22;
    }
  }
  for ( i = *(unsigned __int64 **)v6; ; i = (unsigned __int64 *)i[1] )
  {
    while ( 1 )
    {
      if ( !i )
      {
        if ( *(_DWORD *)(v6 + 32) )
          KeBugCheckEx(0x76u, 8uLL, BugCheckParameter3, v5[1].Affinity.Bitmap[14], *(_QWORD *)&v5[1].ThreadSeed[6]);
        goto LABEL_30;
      }
      v8 = i[3];
      if ( BugCheckParameter3 >= v8 )
        break;
      i = (unsigned __int64 *)*i;
    }
    if ( BugCheckParameter3 <= v8 )
      break;
  }
  MiValidateMdlTracker((ULONG_PTR)i, 1);
  i[3] &= ~0x8000000000000000uLL;
  RtlAvlRemoveNode((unsigned __int64 *)v6, i);
  v10 = *(_QWORD *)(BugCheckParameter3 + 48);
  v11 = (unsigned __int64 *)(v6 + 8);
  v12 = MiLockSwitchedMdlTrackerCompare;
LABEL_25:
  v15 = (_QWORD *)*v11;
  LOBYTE(v9) = 0;
  if ( !*v11 )
    goto LABEL_29;
  while ( 1 )
  {
    v16 = ((__int64 (__fastcall *)(ULONG_PTR, _QWORD *, _BOOL8))v12)(v10, v15, v9);
    if ( v16 <= 0 )
      break;
    v17 = (_QWORD *)v15[1];
    if ( !v17 )
    {
      LOBYTE(v9) = 1;
      goto LABEL_29;
    }
LABEL_39:
    v15 = v17;
  }
  if ( v16 >= 0 )
    KeBugCheckEx(0xD9u, 2uLL, (ULONG_PTR)v15, BugCheckParameter3, *(_QWORD *)(v6 + 16));
  v17 = (_QWORD *)*v15;
  if ( *v15 )
    goto LABEL_39;
  LOBYTE(v9) = 0;
LABEL_29:
  RtlAvlInsertNodeEx(v11, (unsigned __int64)v15, v9, i);
LABEL_30:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&v20);
  OldIrql = v20.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
