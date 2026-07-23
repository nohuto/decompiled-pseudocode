/*
 * XREFs of VmpFaultEntryInsert @ 0x14030C37C
 * Callers:
 *     VmpAccessFaultBatch @ 0x14030BC68 (VmpAccessFaultBatch.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *v3; // rsi
  unsigned __int64 v5; // r14
  unsigned __int8 CurrentIrql; // di
  volatile LONG *v7; // rbp
  _RTL_RB_TREE *v8; // rbx
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v11; // r8
  int v12; // ecx
  unsigned __int64 v13; // rax
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
    v8 = (_RTL_RB_TREE *)(a1 + 48);
    do
    {
      Min = v8->Min;
      Root = (unsigned __int64)v8->Root;
      if ( ((unsigned __int8)Min & 1) != 0 && Root )
        Root ^= (unsigned __int64)v8;
      v11 = 0;
      v12 = (unsigned __int8)Min & 1;
      if ( Root )
      {
        while ( 1 )
        {
          if ( ((unsigned __int64)v3[1].Children[0] & 0xFFFFFFFFFFFFFLL) >= (*(_QWORD *)(Root + 24) & 0xFFFFFFFFFFFFFuLL) )
          {
            v13 = *(_QWORD *)(Root + 8);
            if ( v12 )
            {
              if ( !v13 )
                goto LABEL_22;
              v13 ^= Root;
            }
            if ( !v13 )
            {
LABEL_22:
              v11 = 1;
              break;
            }
          }
          else
          {
            v13 = *(_QWORD *)Root;
            if ( v12 )
            {
              if ( !v13 )
                goto LABEL_16;
              v13 ^= Root;
            }
            if ( !v13 )
            {
LABEL_16:
              v11 = 0;
              break;
            }
          }
          Root = v13;
        }
      }
      RtlRbInsertNodeEx(v8, (PRTL_BALANCED_NODE)Root, v11, v3);
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
