/*
 * XREFs of MiInsertSubsectionNode @ 0x14009284C
 * Callers:
 *     MiAppendSubsectionChain @ 0x1400929E4 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x14061CFCC (MiCreateDataFileMap.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInsertSubsectionNode(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 *v3; // rdi
  KIRQL v6; // bl
  _QWORD *v7; // r10
  bool v8; // r8
  char result; // al
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
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
    v10 = *(unsigned int *)(a2 + 36) | ((unsigned __int64)(*(_WORD *)(a2 + 32) & 0xFFC0) << 26);
    while ( 1 )
    {
      v11 = *((unsigned int *)v7 - 5) | ((unsigned __int64)(*(_WORD *)(v7 - 3) & 0xFFC0) << 26);
      v12 = v11 + *((unsigned int *)v7 - 4);
      if ( *((_WORD *)v7 - 11) < 0x10u )
        --v12;
      if ( v10 >= v11 || v10 > v12 )
      {
        v13 = (_QWORD *)v7[1];
        if ( !v13 )
        {
          v8 = 1;
          break;
        }
      }
      else
      {
        v13 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          v8 = 0;
          break;
        }
      }
      v7 = v13;
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
