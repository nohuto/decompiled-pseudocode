/*
 * XREFs of IopDequeueIrpFromThread @ 0x14000A940
 * Callers:
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x140855E20 (IoCancelFileOpen.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008970 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A7878 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A7988 (KiReleaseSpinLockInstrumented.c)
 */

_QWORD *__fastcall IopDequeueIrpFromThread(_QWORD *a1, volatile signed __int32 *SchedulerAssist)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  _QWORD *result; // rax
  _QWORD *v9; // rcx
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[19];
  CurrentIrql = 0;
  if ( v2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    {
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      _InterlockedOr(SchedulerAssist, 0x10000u);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v2 + 1872);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v6[5];
          v6[5] = v13 + 1;
          if ( v13 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 1872), 0LL) )
      {
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v14 = v12[5] - 1;
            v12[5] = v14;
            if ( !v14 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb, SchedulerAssist);
          }
        }
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v2 + 1872), (__int64)SchedulerAssist);
      }
    }
  }
  v7 = a1[4];
  result = a1 + 4;
  v9 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v7 + 8) != a1 + 4 || (_QWORD *)*v9 != result )
    __fastfail(3u);
  *v9 = v7;
  *(_QWORD *)(v7 + 8) = v9;
  a1[5] = a1 + 4;
  *result = result;
  if ( v2 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v2 + 1872, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 1872), 0LL);
    v10 = KeGetCurrentPrcb();
    v11 = v10->SchedulerAssist;
    if ( v11 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v15 = v11[5] - 1;
        v11[5] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(v10, v11);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v16, v11);
    }
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
