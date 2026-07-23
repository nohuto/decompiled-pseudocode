/*
 * XREFs of VmpFaultEntryInsert @ 0x140329C4C
 * Callers:
 *     VmpAccessFaultBatch @ 0x140329758 (VmpAccessFaultBatch.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x140064590 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *v3; // rdi
  unsigned __int64 v5; // r14
  unsigned __int8 CurrentIrql; // si
  volatile LONG *v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  BOOLEAN v10; // r8
  unsigned __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax

  v3 = a2;
  v5 = (unsigned __int64)&a2[2 * a3];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v7 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( (unsigned __int64)v3 < v5 )
  {
    v8 = a1 + 48;
    do
    {
      v9 = *(_QWORD *)v8;
      if ( (*(_BYTE *)(v8 + 8) & 1) != 0 && v9 )
        v9 ^= v8;
      v10 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          if ( ((unsigned __int64)v3[1].Children[0] & 0xFFFFFFFFFFFFFLL) >= (*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFuLL) )
          {
            v11 = *(_QWORD *)(v9 + 8);
            if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
            {
              if ( !v11 )
                goto LABEL_22;
              v11 ^= v9;
            }
            if ( !v11 )
            {
LABEL_22:
              v10 = 1;
              break;
            }
          }
          else
          {
            v11 = *(_QWORD *)v9;
            if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
            {
              if ( !v11 )
                goto LABEL_16;
              v11 ^= v9;
            }
            if ( !v11 )
            {
LABEL_16:
              v10 = 0;
              break;
            }
          }
          v9 = v11;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)v8, (PRTL_BALANCED_NODE)v9, v10, v3);
      v3 += 2;
    }
    while ( (unsigned __int64)v3 < v5 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
