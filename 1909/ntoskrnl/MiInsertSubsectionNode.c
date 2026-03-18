/*
 * XREFs of MiInsertSubsectionNode @ 0x1400C07CC
 * Callers:
 *     MiAppendSubsectionChain @ 0x140089058 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x14065040C (MiCreateDataFileMap.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140072EB0 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInsertSubsectionNode(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v3; // rdi
  KIRQL v6; // bl
  _QWORD *v7; // r10
  bool v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  char result; // al
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = (unsigned __int64 *)(a1 + 272);
  if ( a3 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v7 = (_QWORD *)*v3;
  v8 = 0;
  if ( *v3 )
  {
    v9 = *(unsigned int *)(a2 + 36) | ((unsigned __int64)(*(_WORD *)(a2 + 32) & 0xFFC0) << 26);
    while ( 1 )
    {
      v10 = *((unsigned int *)v7 - 5) | ((unsigned __int64)(*(_WORD *)(v7 - 3) & 0xFFC0) << 26);
      v11 = v10 + *((unsigned int *)v7 - 4);
      if ( *((_WORD *)v7 - 11) < 0x10u )
        --v11;
      if ( v9 <= v11 && v9 < v10 )
      {
        v12 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          v8 = 0;
          break;
        }
      }
      else
      {
        v12 = (_QWORD *)v7[1];
        if ( !v12 )
        {
          v8 = 1;
          break;
        }
      }
      v7 = v12;
    }
  }
  result = RtlAvlInsertNodeEx(v3, (unsigned __int64)v7, v8, (_QWORD *)(a2 + 56));
  ++v3[1];
  v3[2] = a2;
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = v6;
    __writecr8(v6);
  }
  return result;
}
