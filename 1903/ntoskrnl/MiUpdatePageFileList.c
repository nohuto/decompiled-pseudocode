/*
 * XREFs of MiUpdatePageFileList @ 0x140192DA4
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140192AB4 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x140770FBC (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x14088CDE0 (MiDeletePagefile.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
  v5 = ExAcquireSpinLockExclusive(&dword_1404667F8);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_1404667F0, v4);
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v7 = 0;
  v8 = (_QWORD *)qword_1404667F0;
  if ( !qword_1404667F0 )
    goto LABEL_4;
  while ( v6 < *(v8 - 26) )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
    {
      v7 = 0;
      goto LABEL_4;
    }
LABEL_10:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_10;
  v7 = 1;
LABEL_4:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1404667F0, (unsigned __int64)v8, v7, v4);
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1404667F8);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
}
