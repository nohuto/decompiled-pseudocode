/*
 * XREFs of KeMaskInterrupt @ 0x14017C410
 * Callers:
 *     IopMaskInterrupt @ 0x140169314 (IopMaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14017C200 (KeDisconnectInterrupt.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140015DA0 (KeGetProcessorNumberFromIndex.c)
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400FC050 (KeRevertToUserGroupAffinityThread.c)
 *     KeRemoveQueueDpcEx @ 0x1400FD550 (KeRemoveQueueDpcEx.c)
 *     KeSetTargetProcessorDpcEx @ 0x14013C160 (KeSetTargetProcessorDpcEx.c)
 *     KiAcquireInterruptConnectLock @ 0x14017CCC0 (KiAcquireInterruptConnectLock.c)
 *     KiIsInterruptTypeSecondary @ 0x14017D2DC (KiIsInterruptTypeSecondary.c)
 *     KiMaskInterruptInternal @ 0x14017D38C (KiMaskInterruptInternal.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1402A9FC0 (KiMaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeMaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _KDPC *a4)
{
  char IsInterruptTypeSecondary; // al
  NTSTATUS ProcessorNumberFromIndex; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rbp
  char v13; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned int Number; // edx
  unsigned __int8 v16; // cl
  __int64 v17; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v20; // rsi
  struct _KPRCB *v21; // rcx
  unsigned __int8 v22[4]; // [rsp+30h] [rbp-58h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-54h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-50h] BYREF

  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  ProcNumber = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  ProcessorNumberFromIndex = 0;
  LOBYTE(v10) = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v11 = a1[(unsigned __int8)v10];
      _m_prefetchw((const void *)(v11 + 104));
      if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 104), 1u) & 1) != 0 )
        break;
      LOBYTE(v10) = v10 + 1;
      if ( (unsigned __int8)v10 >= a2 )
        goto LABEL_4;
    }
    return (unsigned int)-2147483611;
  }
LABEL_4:
  if ( !*(_DWORD *)(a3 + 8) )
  {
    v12 = *(unsigned int *)(a3 + 64);
    if ( IsInterruptTypeSecondary != 0 )
    {
      ProcessorNumberFromIndex = KiMaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), (unsigned int)v12, v10);
    }
    else
    {
      v13 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      Number = KeGetPcr()->Prcb.Number;
      v16 = 0;
      v22[0] = CurrentIrql;
      if ( a2 )
      {
        while ( 1 )
        {
          v17 = a1[v16];
          if ( *(_DWORD *)(v17 + 96) == Number )
            break;
          if ( ++v16 >= a2 )
            goto LABEL_10;
        }
        ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v17 + 88), (unsigned int)v12);
        v13 = 1;
      }
LABEL_10:
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      if ( !v13 )
      {
        v20 = *a1;
        if ( KeGetCurrentIrql() >= 2u )
        {
          if ( !a4 )
            return (unsigned int)-1073741811;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v20 + 96), &ProcNumber);
          if ( ProcessorNumberFromIndex >= 0 )
          {
            KeRemoveQueueDpcEx((__int64)a4, 0);
            a4->TargetInfoAsUlong = 275;
            a4->DeferredRoutine = (PKDEFERRED_ROUTINE)KiMaskInterruptDpc;
            a4->DeferredContext = 0LL;
            a4->DpcData = 0LL;
            a4->ProcessorHistory = 0LL;
            ProcessorNumberFromIndex = KeSetTargetProcessorDpcEx(a4, &ProcNumber);
            if ( ProcessorNumberFromIndex >= 0 )
              KiInsertQueueDpc((ULONG_PTR)a4, *(unsigned int *)(v20 + 88), v12, 0LL, 0);
          }
        }
        else
        {
          KiAcquireInterruptConnectLock(*(unsigned int *)(v20 + 96), v22, &PreviousAffinity);
          ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v20 + 88), (unsigned int)v12);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22[0] < 2u )
          {
            v21 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v21);
          }
          __writecr8(v22[0]);
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
      }
    }
    if ( ProcessorNumberFromIndex == 296 )
      return 0;
    return (unsigned int)ProcessorNumberFromIndex;
  }
  return 0LL;
}
