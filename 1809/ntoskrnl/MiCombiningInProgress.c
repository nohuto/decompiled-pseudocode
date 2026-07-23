/*
 * XREFs of MiCombiningInProgress @ 0x14013C4DC
 * Callers:
 *     MiCombineIdenticalPages @ 0x1406D2818 (MiCombineIdenticalPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF400 (MiFlushEntireTbDueToAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiCombiningInProgress(__int64 *a1, unsigned __int64 *a2, int a3)
{
  __int64 v3; // r14
  KIRQL v7; // bp
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 **v9; // rax
  unsigned __int64 v10; // rcx
  bool v11; // r8
  _QWORD *v12; // rdx
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 **v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = *a1;
  v7 = ExAcquireSpinLockExclusive(&dword_14043B780);
  if ( a3 != 1 )
  {
    v14 = *a2;
    v15 = (unsigned __int64 **)a2[1];
    if ( *(unsigned __int64 **)(*a2 + 8) == a2 && *v15 == a2 )
    {
      *v15 = (unsigned __int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      RtlAvlRemoveNode((unsigned __int64 *)&qword_14043B788, a2 + 2);
      --*((_DWORD *)a1 + 16);
      if ( dword_14043B784 == 1 )
        MiFlushEntireTbDueToAttributeChange(v16);
      --dword_14043B784;
      goto LABEL_5;
    }
LABEL_18:
    __fastfail(3u);
  }
  ++*((_DWORD *)a1 + 16);
  ++dword_14043B784;
  CurrentThread = KeGetCurrentThread();
  memset(a2, 0, 0x50uLL);
  v9 = (unsigned __int64 **)(v3 + 6640);
  a2[5] = (unsigned __int64)CurrentThread;
  v10 = *(_QWORD *)(v3 + 6640);
  if ( *(_QWORD *)(v10 + 8) != v3 + 6640 )
    goto LABEL_18;
  *a2 = v10;
  v11 = 0;
  a2[1] = (unsigned __int64)v9;
  *(_QWORD *)(v10 + 8) = a2;
  *v9 = a2;
  v12 = (_QWORD *)qword_14043B788;
  if ( !qword_14043B788 )
    goto LABEL_4;
  while ( (unsigned __int64)CurrentThread >= v12[3] )
  {
    v17 = (_QWORD *)v12[1];
    if ( !v17 )
    {
      v11 = 1;
      goto LABEL_4;
    }
LABEL_17:
    v12 = v17;
  }
  v17 = (_QWORD *)*v12;
  if ( *v12 )
    goto LABEL_17;
  v11 = 0;
LABEL_4:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14043B788, (unsigned __int64)v12, v11, a2 + 2);
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043B780);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v7;
  __writecr8(v7);
  return result;
}
