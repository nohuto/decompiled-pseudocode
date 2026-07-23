/*
 * XREFs of KiParkUmsThread @ 0x14029D8B0
 * Callers:
 *     KiUmsExit @ 0x1401D1100 (KiUmsExit.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KiDispatchException @ 0x1400A2E90 (KiDispatchException.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     RtlXRestore @ 0x14012F9C4 (RtlXRestore.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwTerminateProcess @ 0x1401B8870 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x1401B8D50 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x1401BC410 (KeResetLegacyFloatingPointState.c)
 *     KeRestoreLegacyFloatingPointControlWord @ 0x1401BC430 (KeRestoreLegacyFloatingPointControlWord.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     KiUmsRestoreUch @ 0x1401D0C00 (KiUmsRestoreUch.c)
 *     KiIsPrimaryPresent @ 0x14029D6F4 (KiIsPrimaryPresent.c)
 *     KeUpdateUmsThreadState @ 0x140846808 (KeUpdateUmsThreadState.c)
 *     KiUmsExceptionFilter @ 0x140846E04 (KiUmsExceptionFilter.c)
 *     KiCaptureUmsThreadContext @ 0x140847D98 (KiCaptureUmsThreadContext.c)
 */

NTSTATUS __fastcall KiParkUmsThread(__int64 SparePtr, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *Object; // r15
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int8 v8; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  char v10; // al
  char v11; // cl
  struct _KPRCB *v12; // rcx
  struct _KPRCB *v13; // rcx
  NTSTATUS result; // eax
  unsigned __int64 v15; // rax
  void *v16; // rsp
  NTSTATUS updated; // esi
  __int64 v18; // r8
  struct _KPRCB *v19; // rcx
  void *v20; // rcx
  char IsPrimaryPresent; // [rsp+30h] [rbp+0h]
  unsigned __int8 v22; // [rsp+31h] [rbp+1h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp+10h]
  unsigned __int64 NpxState; // [rsp+40h] [rbp+10h]
  __int64 v25; // [rsp+68h] [rbp+38h] BYREF
  __int64 v26; // [rsp+70h] [rbp+40h]
  EXCEPTION_RECORD ExitStatus; // [rsp+80h] [rbp+50h] BYREF
  unsigned __int64 v28; // [rsp+120h] [rbp+F0h] BYREF
  _DWORD v29[4]; // [rsp+C10h] [rbp+BE0h] BYREF
  _QWORD v30[2]; // [rsp+C20h] [rbp+BF0h] BYREF

  IsPrimaryPresent = 0;
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v6 = *(_QWORD *)Object;
  v7 = Object[20];
  if ( (v7 & 1) != 0 )
  {
    v8 = 1;
    Object[20] = v7 & 0xFFFFFFFE;
  }
  else
  {
    v8 = 0;
  }
  if ( v8 || (*(_DWORD *)(v6 + 1264) & 0x40) != 0 )
  {
LABEL_24:
    *(_DWORD *)(v6 + 1264) &= ~0x20u;
    goto LABEL_25;
  }
  *(_DWORD *)(v6 + 1264) |= 0x20u;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v22 = CurrentIrql;
  IsPrimaryPresent = KiIsPrimaryPresent(0LL, 0LL, a3);
  if ( !IsPrimaryPresent )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    goto LABEL_24;
  }
  _disable();
  v10 = IsPrimaryPresent;
  if ( (KeGetCurrentPrcb()->PairRegister & 2) != 0 )
    v10 = 0;
  v11 = v10;
  if ( CurrentThread->ApcState.UserApcPendingAll )
    v11 = 0;
  IsPrimaryPresent = v11;
  if ( !v11 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v12 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
    __writecr8(CurrentIrql);
    _enable();
    goto LABEL_24;
  }
LABEL_25:
  if ( SBYTE8(PerfGlobalGroupMask) < 0 )
  {
    v29[0] = CurrentThread[1].CycleTime;
    v29[1] = CurrentThread[1].CurrentRunTime;
    v29[2] = (IsPrimaryPresent != 0 ? 2 : 0) | *(_DWORD *)(SparePtr + 72) & 1 | (4 * v8);
    v30[0] = v29;
    v30[1] = 12LL;
    EtwTraceKernelEvent((__int64)v30, 1u, 0x40000080u, 0x1922u, 0x400A02u);
  }
  if ( !IsPrimaryPresent )
  {
    v15 = (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) + 15LL;
    if ( v15 <= (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) )
      v15 = 0xFFFFFFFFFFFFFF0LL;
    v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
    v28 = ((unsigned __int64)&v25 + 7) & 0xFFFFFFFFFFFFFFC0uLL;
    --CurrentThread->SpecialApcDisable;
    updated = KiCaptureUmsThreadContext(CurrentThread, SparePtr);
    if ( updated >= 0 )
    {
      NpxState = CurrentThread->NpxState;
      CurrentThread->NpxState = NpxState & 0xFFFFFFFFFFFFFFFEuLL;
      *((_QWORD *)Object + 9) = &v28;
      Object[20] = Object[20] & 0xFFFFFFF9 | 4;
      CurrentThread->WaitBlock[3].SparePtr = 0LL;
      if ( v8 )
      {
        v26 = *(_QWORD *)CurrentThread->WaitBlock[3].Object;
        *(_QWORD *)(v26 + 1272) = 0LL;
      }
      else
      {
        LOBYTE(v18) = 1;
        updated = KeUpdateUmsThreadState(*(_QWORD *)CurrentThread->WaitBlock[3].Object, 0LL, v18);
      }
      if ( updated >= 0 )
      {
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        updated = KeWaitForSingleObject(Object + 12, Executive, 1, 0, 0LL);
        if ( updated == 192 )
        {
          KeGetCurrentIrql();
          __writecr8(1uLL);
          KiDeliverApc(1, 0, 0LL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v19);
          }
          __writecr8(0LL);
          goto LABEL_54;
        }
        --CurrentThread->SpecialApcDisable;
        Object[20] &= ~4u;
        SparePtr = (__int64)CurrentThread->WaitBlock[3].SparePtr;
        CurrentThread->NpxState = NpxState;
        if ( (*(_BYTE *)(SparePtr + 72) & 1) != 0 )
        {
          v20 = *(void **)(SparePtr + 64);
          if ( MEMORY[0xFFFFF780000003E0] )
            RtlXRestore((__int64)v20, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFDuLL);
          else
            _fxrstor(v20);
        }
        else
        {
          KeResetLegacyFloatingPointState();
          KeRestoreLegacyFloatingPointControlWord();
        }
        KiUmsRestoreUch(SparePtr);
      }
    }
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
LABEL_54:
    ExitStatus.ExceptionRecord = 0LL;
    ExitStatus.NumberParameters = 1;
    ExitStatus.ExceptionInformation[0] = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
    ExitStatus.ExceptionCode = updated;
    ExitStatus.ExceptionFlags = 1;
    ExitStatus.ExceptionAddress = 0LL;
    KiDispatchException(&ExitStatus, *(_QWORD *)(SparePtr + 88), *(_QWORD *)(SparePtr + 80), 1u, 0);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus.ExceptionCode);
    return ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus.ExceptionCode);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v22 < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v13);
  }
  result = v22;
  __writecr8(v22);
  CurrentThread->MiscFlags &= ~0x10000u;
  return result;
}
