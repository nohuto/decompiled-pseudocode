/*
 * XREFs of IopDequeueIrpFromThread @ 0x1400B8E30
 * Callers:
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     IopCloseFile @ 0x14063AB30 (IopCloseFile.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     IoCancelFileOpen @ 0x14081CFC0 (IoCancelFileOpen.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 */

_QWORD *__fastcall IopDequeueIrpFromThread(_QWORD *a1, volatile signed __int32 *SchedulerAssist, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *result; // rax
  _QWORD *v10; // rcx
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a1[19];
  CurrentIrql = 0;
  if ( v3 )
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
      KiAcquireSpinLockInstrumented(v3 + 1856);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v7 = CurrentPrcb->SchedulerAssist;
      if ( v7 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v7[5];
          v7[5] = v14 + 1;
          if ( v14 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 1856), 0LL) )
      {
        v13 = CurrentPrcb->SchedulerAssist;
        if ( v13 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v15 = v13[5] - 1;
            v13[5] = v15;
            if ( !v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v3 + 1856), (__int64)SchedulerAssist, a3);
      }
    }
  }
  v8 = a1[4];
  result = a1 + 4;
  v10 = (_QWORD *)a1[5];
  if ( *(_QWORD **)(v8 + 8) != a1 + 4 || (_QWORD *)*v10 != result )
    __fastfail(3u);
  *v10 = v8;
  *(_QWORD *)(v8 + 8) = v10;
  a1[5] = a1 + 4;
  *result = result;
  if ( v3 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v3 + 1856, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 1856), 0LL);
    v11 = KeGetCurrentPrcb();
    v12 = v11->SchedulerAssist;
    if ( v12 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v16 = v12[5] - 1;
        v12[5] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v17);
    }
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
