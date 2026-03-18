/*
 * XREFs of MiBeginPageAccessor @ 0x1400728A0
 * Callers:
 *     MiUnlinkNodeLargePage @ 0x14002A3E0 (MiUnlinkNodeLargePage.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x1400477F0 (ExpAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiBeginPageAccessor(unsigned __int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  bool v5; // zf
  __int64 v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v13; // rax
  int v14; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
    return 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  v3 = &dword_1404660E0;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = CurrentThread;
  *(_BYTE *)(a2 + 34) |= 8u;
  *(_QWORD *)(a2 + 16) = a1;
  LOBYTE(a2) = -1;
  v5 = *(_BYTE *)(a1 + 71) == 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v5 )
    v3 = &dword_1404660F0;
  *(_WORD *)(a1 + 69) = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v3, a2);
  else
    ExpAcquireSpinLockExclusive(v3, 0xFFu);
  LOBYTE(v6) = 0;
  if ( *(_BYTE *)(a1 + 71) )
  {
    v7 = (_QWORD *)qword_1404660E8;
    if ( qword_1404660E8 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)CurrentThread >= v7[7] )
        {
          v13 = (_QWORD *)v7[1];
          if ( !v13 )
          {
            LOBYTE(v6) = 1;
            break;
          }
        }
        else
        {
          v13 = (_QWORD *)*v7;
          if ( !*v7 )
          {
            LOBYTE(v6) = 0;
            break;
          }
        }
        v7 = v13;
      }
    }
    v9 = &qword_1404660E8;
    goto LABEL_14;
  }
  v7 = (_QWORD *)qword_1404660F8;
  if ( !qword_1404660F8 )
    goto LABEL_13;
  while ( a1 < (unsigned __int64)v7 )
  {
    v8 = (_QWORD *)*v7;
    if ( !*v7 )
    {
      LOBYTE(v6) = 0;
      goto LABEL_13;
    }
LABEL_10:
    v7 = v8;
  }
  v8 = (_QWORD *)v7[1];
  if ( v8 )
    goto LABEL_10;
  LOBYTE(v6) = 1;
LABEL_13:
  v9 = &qword_1404660F8;
LABEL_14:
  RtlAvlInsertNodeEx(v9, v7, v6, a1);
  *(_BYTE *)(a1 + 68) = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
  {
    v14 = SchedulerAssist[5] - 1;
    SchedulerAssist[5] = v14;
    if ( !v14 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  return 1LL;
}
