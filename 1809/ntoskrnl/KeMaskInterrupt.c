/*
 * XREFs of KeMaskInterrupt @ 0x14016D648
 * Callers:
 *     IopMaskInterrupt @ 0x1401593D4 (IopMaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14016D3C0 (KeDisconnectInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 *     KeGetProcessorNumberFromIndex @ 0x1400897E0 (KeGetProcessorNumberFromIndex.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     KeRemoveQueueDpcEx @ 0x140132AD0 (KeRemoveQueueDpcEx.c)
 *     KeSetTargetProcessorDpcEx @ 0x14013A1B0 (KeSetTargetProcessorDpcEx.c)
 *     KiMaskInterruptInternal @ 0x14016D4B0 (KiMaskInterruptInternal.c)
 *     KiAcquireInterruptConnectLock @ 0x14016DF38 (KiAcquireInterruptConnectLock.c)
 *     KiIsInterruptTypeSecondary @ 0x14016E518 (KiIsInterruptTypeSecondary.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140293A70 (KiMaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeMaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _KDPC *a4)
{
  char IsInterruptTypeSecondary; // al
  int ProcessorNumberFromIndex; // ebx
  __int64 v10; // r8
  __int64 v11; // rbp
  char v12; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned int Number; // edx
  unsigned __int8 v15; // cl
  __int64 v16; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v19; // rsi
  struct _KPRCB *v20; // rcx
  unsigned __int8 v21[4]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-64h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-60h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-58h] BYREF

  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v22 = 1;
  ProcessorNumberFromIndex = 0;
  LOBYTE(v10) = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      _m_prefetchw((const void *)(a1[(unsigned __int8)v10] + 104));
      if ( (_InterlockedOr((volatile signed __int32 *)&v22, v22) & 1) != 0 )
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
    v11 = *(unsigned int *)(a3 + 64);
    if ( IsInterruptTypeSecondary != 0 )
    {
      ProcessorNumberFromIndex = KiMaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), (unsigned int)v11, v10);
    }
    else
    {
      v12 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      Number = KeGetPcr()->Prcb.Number;
      v15 = 0;
      v21[0] = CurrentIrql;
      if ( a2 )
      {
        while ( 1 )
        {
          v16 = a1[v15];
          if ( *(_DWORD *)(v16 + 96) == Number )
            break;
          if ( ++v15 >= a2 )
            goto LABEL_12;
        }
        ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v16 + 88), v11);
        v12 = 1;
      }
LABEL_12:
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      if ( !v12 )
      {
        v19 = *a1;
        if ( KeGetCurrentIrql() >= 2u )
        {
          if ( !a4 )
            return (unsigned int)-1073741811;
          ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v19 + 96), &ProcNumber);
          if ( ProcessorNumberFromIndex >= 0 )
          {
            KeRemoveQueueDpcEx((int *)a4, 0);
            a4->TargetInfoAsUlong = 275;
            a4->DeferredRoutine = (PKDEFERRED_ROUTINE)KiMaskInterruptDpc;
            a4->DeferredContext = 0LL;
            a4->DpcData = 0LL;
            a4->ProcessorHistory = 0LL;
            ProcessorNumberFromIndex = KeSetTargetProcessorDpcEx(a4, &ProcNumber);
            if ( ProcessorNumberFromIndex >= 0 )
              KiInsertQueueDpc((ULONG_PTR)a4, *(unsigned int *)(v19 + 88), v11, 0LL, 0);
          }
        }
        else
        {
          KiAcquireInterruptConnectLock(*(unsigned int *)(v19 + 96), v21, &PreviousAffinity);
          ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v19 + 88), v11);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21[0] < 2u )
          {
            v20 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v20);
          }
          __writecr8(v21[0]);
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
