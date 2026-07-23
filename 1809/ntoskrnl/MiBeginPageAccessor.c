/*
 * XREFs of MiBeginPageAccessor @ 0x140064A10
 * Callers:
 *     MiUnlinkNodeLargePage @ 0x140064280 (MiUnlinkNodeLargePage.c)
 *     MiGetSinglePageToZero @ 0x1402C1B08 (MiGetSinglePageToZero.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400BC5E0 (ExpAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiBeginPageAccessor(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  LONG *v4; // rdi
  bool v5; // zf
  __int64 v6; // r8
  _QWORD *v7; // rdx
  __int64 *v8; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  int v14; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(_BYTE *)(a2 + 34) & 8) != 0 )
    return 0LL;
  *(_QWORD *)(a1 + 24) = a2;
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(a1 + 56) = CurrentThread;
  *(_BYTE *)(a2 + 34) |= 8u;
  v4 = &dword_14043B798;
  *(_QWORD *)(a2 + 16) = a1;
  v5 = *(_BYTE *)(a1 + 71) == 0;
  LOBYTE(a2) = -1;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v5 )
    v4 = &dword_14043B7A8;
  *(_WORD *)(a1 + 69) = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v4, a2);
  else
    ExpAcquireSpinLockExclusive(v4, a2);
  LOBYTE(v6) = 0;
  if ( *(_BYTE *)(a1 + 71) )
  {
    v7 = (_QWORD *)qword_14043B7A0;
    if ( qword_14043B7A0 )
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
    v8 = &qword_14043B7A0;
    goto LABEL_9;
  }
  v7 = (_QWORD *)qword_14043B7B0;
  if ( !qword_14043B7B0 )
    goto LABEL_8;
  while ( a1 >= (unsigned __int64)v7 )
  {
    v12 = (_QWORD *)v7[1];
    if ( !v12 )
    {
      LOBYTE(v6) = 1;
      goto LABEL_8;
    }
LABEL_19:
    v7 = v12;
  }
  v12 = (_QWORD *)*v7;
  if ( *v7 )
    goto LABEL_19;
  LOBYTE(v6) = 0;
LABEL_8:
  v8 = &qword_14043B7B0;
LABEL_9:
  RtlAvlInsertNodeEx(v8, v7, v6, a1);
  *(_BYTE *)(a1 + 68) = 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  else
    *v4 = 0;
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
