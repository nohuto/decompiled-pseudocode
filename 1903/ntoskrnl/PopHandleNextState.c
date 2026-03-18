/*
 * XREFs of PopHandleNextState @ 0x140598DD0
 * Callers:
 *     PopIssueNextState @ 0x140598D0C (PopIssueNextState.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140598D50 (PopInvokeStateHandlerTargetProcessor.c)
 * Callees:
 *     KeForceDetachProcess @ 0x14008E81C (KeForceDetachProcess.c)
 *     KeForceAttachProcess @ 0x14008E884 (KeForceAttachProcess.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14012E2AC (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140130664 (KeRestoreExtendedAndSupervisorState.c)
 *     PopFxNotifySystemStateTransition @ 0x14015ECA0 (PopFxNotifySystemStateTransition.c)
 *     KeResumeClockTimer @ 0x14015ECCC (KeResumeClockTimer.c)
 *     PpmResetPerfEngineForProcessor @ 0x14015EDAC (PpmResetPerfEngineForProcessor.c)
 *     KeRestoreIptStateAfterProcessorComesOnline @ 0x14015EE3C (KeRestoreIptStateAfterProcessorComesOnline.c)
 *     KeSaveIptStateBeforeProcessorGoesOffline @ 0x14015F438 (KeSaveIptStateBeforeProcessorGoesOffline.c)
 *     KeSuspendClockTimer @ 0x14015F454 (KeSuspendClockTimer.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x14015F4B8 (KeRestoreProcessorSpecificFeatures.c)
 *     KeFlushCurrentTbImmediately @ 0x14017CD10 (KeFlushCurrentTbImmediately.c)
 *     HvlEnlightenProcessor @ 0x140181EF4 (HvlEnlightenProcessor.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     KdPowerTransition @ 0x1402A2270 (KdPowerTransition.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     PopRestoreHiberContext @ 0x140599380 (PopRestoreHiberContext.c)
 */

void __fastcall PopHandleNextState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rbp
  int v3; // r14d
  int v4; // ebx
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // dl
  int v10; // eax
  __int64 v11; // rdx
  unsigned int Number; // ecx
  unsigned __int8 v13; // bl
  struct _KPRCB *v14; // rcx
  __int16 v15; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = 0;
  while ( *(_DWORD *)(a1 + 56) == *(_DWORD *)a2 )
  {
    if ( (++v4 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait();
    }
    else
    {
      _mm_pause();
    }
  }
  v7 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)a2 = v7;
  if ( v7 == 12 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)v8 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))v8)(
        *(unsigned int *)(a1 + 40),
        *(_QWORD *)(v8 + 8),
        *(unsigned __int8 *)(a1 + 44));
  }
  else if ( v7 == 10 )
  {
    KeFlushCurrentTbImmediately();
    __wbinvd();
  }
  else
  {
    switch ( v7 )
    {
      case 2:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 1, dword_140443060);
        break;
      case 3:
        KeSaveIptStateBeforeProcessorGoesOffline();
        *(_BYTE *)(a2 + 5) = 0;
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          *(_BYTE *)(a2 + 5) = (int)KeSaveExtendedAndSupervisorState(
                                      (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                                      (PVOID *)(a2 + 8)) >= 0;
        *(_QWORD *)(a2 + 120) = KeGetPcr();
        break;
      case 4:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        *(_BYTE *)(a2 + 7) = CurrentIrql;
        _disable();
        *(_BYTE *)(a2 + 4) = (v15 & 0x200) != 0;
        KeSuspendClockTimer();
        break;
      case 5:
        if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
        {
          *(_BYTE *)(a2 + 6) = 1;
          KeForceAttachProcess((ULONG_PTR)PsInitialSystemProcess, a2 + 64);
        }
        break;
      case 6:
        if ( (PopSimulate & 0x800000) != 0 && *(_QWORD *)(a1 + 8) )
        {
          PoResumeFromHibernate = 1;
        }
        else
        {
          if ( !CurrentPrcb->Number && !*(_QWORD *)(a1 + 8) )
            KdPowerTransition(4LL, a2);
          v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 8LL))(
                  *(_QWORD *)(*(_QWORD *)a1 + 16LL),
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(a1 + 16),
                  *(unsigned int *)(a1 + 48),
                  a1 + 60);
          Number = CurrentPrcb->Number;
          v3 = v10;
          if ( !Number )
          {
            if ( !PoResumeFromHibernate )
            {
              KdPowerTransition(1LL, v11);
              Number = CurrentPrcb->Number;
            }
            if ( !Number )
              qword_140443640 = __rdtsc();
          }
        }
        *(_DWORD *)(a2 + 112) = v3;
        break;
      case 7:
        HvlEnlightenProcessor(1);
        break;
      case 8:
        KeRestoreProcessorSpecificFeatures();
        break;
      case 9:
        PopRestoreHiberContext(*(_QWORD *)(a1 + 24));
        break;
      case 11:
        if ( *(_BYTE *)(a2 + 6) )
        {
          KeForceDetachProcess((_BYTE *)(a2 + 64), 1);
          *(_BYTE *)(a2 + 6) = 0;
        }
        break;
      case 13:
        KeResumeClockTimer();
        if ( *(_BYTE *)(a2 + 4) )
          _enable();
        v13 = *(_BYTE *)(a2 + 7);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
        {
          v14 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v14);
        }
        __writecr8(v13);
        break;
      case 14:
        PopFxNotifySystemStateTransition((__int64)CurrentPrcb, 0, dword_140443060);
        break;
      case 15:
        if ( *(_BYTE *)(a2 + 5) )
          KeRestoreExtendedAndSupervisorState(a2 + 8);
        KeRestoreIptStateAfterProcessorComesOnline();
        PpmResetPerfEngineForProcessor((__int64)CurrentPrcb);
        break;
      default:
        break;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
}
