/*
 * XREFs of MiUpdatePageFileList @ 0x140188298
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140187FC8 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x14074DB00 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x140854350 (MiDeletePagefile.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdatePageFileList(__int64 a1, int a2)
{
  unsigned __int64 *v4; // rbp
  KIRQL v5; // di
  unsigned __int64 v6; // rcx
  bool v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !*(_QWORD *)(a1 + 56) )
    return;
  v4 = (unsigned __int64 *)(a1 + 264);
  v5 = ExAcquireSpinLockExclusive(&dword_14043BE38);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_14043BE30, v4);
    goto LABEL_8;
  }
  v6 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v7 = 0;
  v8 = (_QWORD *)qword_14043BE30;
  if ( !qword_14043BE30 )
    goto LABEL_7;
  while ( v6 >= *(v8 - 26) )
  {
    v9 = (_QWORD *)v8[1];
    if ( !v9 )
    {
      v7 = 1;
      goto LABEL_7;
    }
LABEL_11:
    v8 = v9;
  }
  v9 = (_QWORD *)*v8;
  if ( *v8 )
    goto LABEL_11;
  v7 = 0;
LABEL_7:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14043BE30, (unsigned __int64)v8, v7, v4);
LABEL_8:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043BE38);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
}
