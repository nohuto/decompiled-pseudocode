/*
 * XREFs of KiParkUmsThread @ 0x1402B6130
 * Callers:
 *     KiUmsExit @ 0x1401D6700 (KiUmsExit.c)
 * Callees:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     RtlXRestore @ 0x140130788 (RtlXRestore.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwTerminateProcess @ 0x1401C0650 (ZwTerminateProcess.c)
 *     ZwTerminateThread @ 0x1401C0B30 (ZwTerminateThread.c)
 *     KeResetLegacyFloatingPointState @ 0x1401C4210 (KeResetLegacyFloatingPointState.c)
 *     KeRestoreLegacyFloatingPointControlWord @ 0x1401C4230 (KeRestoreLegacyFloatingPointControlWord.c)
 *     _alloca_probe @ 0x1401CC4E0 (_alloca_probe.c)
 *     KiUmsRestoreUch @ 0x1401D6200 (KiUmsRestoreUch.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiIsPrimaryPresent @ 0x1402B5F70 (KiIsPrimaryPresent.c)
 *     KeUpdateUmsThreadState @ 0x140880B94 (KeUpdateUmsThreadState.c)
 *     KiUmsExceptionFilter @ 0x1408811A0 (KiUmsExceptionFilter.c)
 *     KiCaptureUmsThreadContext @ 0x140881F98 (KiCaptureUmsThreadContext.c)
 */

NTSTATUS __fastcall KiParkUmsThread(__int64 SparePtr)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD *Object; // r12
  __int64 v4; // rsi
  int v5; // eax
  unsigned __int8 v6; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  char v8; // al
  char v9; // cl
  struct _KPRCB *v10; // rcx
  struct _KPRCB *v11; // rcx
  NTSTATUS result; // eax
  unsigned __int64 v13; // rax
  void *v14; // rsp
  NTSTATUS updated; // esi
  __int64 v16; // r8
  struct _KPRCB *v17; // rcx
  char IsPrimaryPresent; // [rsp+30h] [rbp+0h]
  unsigned __int8 v19; // [rsp+31h] [rbp+1h]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp+10h]
  unsigned __int64 NpxState; // [rsp+40h] [rbp+10h]
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF
  __int64 v23; // [rsp+70h] [rbp+40h]
  EXCEPTION_RECORD ExitStatus; // [rsp+80h] [rbp+50h] BYREF
  _QWORD v25[349]; // [rsp+120h] [rbp+F0h] BYREF
  _DWORD v26[4]; // [rsp+C10h] [rbp+BE0h] BYREF
  _QWORD v27[2]; // [rsp+C20h] [rbp+BF0h] BYREF

  memset(&ExitStatus, 0, sizeof(ExitStatus));
  memset(v25, 0, sizeof(v25));
  IsPrimaryPresent = 0;
  v19 = 0;
  CurrentThread = KeGetCurrentThread();
  Object = CurrentThread->WaitBlock[3].Object;
  v4 = *(_QWORD *)Object;
  v5 = Object[20];
  if ( (v5 & 1) != 0 )
  {
    v6 = 1;
    Object[20] = v5 & 0xFFFFFFFE;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 || (*(_DWORD *)(v4 + 1264) & 0x40) != 0 )
  {
LABEL_24:
    *(_DWORD *)(v4 + 1264) &= ~0x20u;
    goto LABEL_25;
  }
  *(_DWORD *)(v4 + 1264) |= 0x20u;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v19 = CurrentIrql;
  IsPrimaryPresent = KiIsPrimaryPresent(0LL, 0LL);
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
  v8 = IsPrimaryPresent;
  if ( (KeGetCurrentPrcb()->PairRegister & 2) != 0 )
    v8 = 0;
  v9 = v8;
  if ( CurrentThread->ApcState.UserApcPendingAll )
    v9 = 0;
  IsPrimaryPresent = v9;
  if ( !v9 )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v10 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v10->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v10);
    }
    __writecr8(CurrentIrql);
    _enable();
    goto LABEL_24;
  }
LABEL_25:
  if ( SBYTE8(PerfGlobalGroupMask) < 0 )
  {
    v26[0] = CurrentThread[1].CycleTime;
    v26[1] = CurrentThread[1].CurrentRunTime;
    v26[2] = (IsPrimaryPresent != 0 ? 2 : 0) | *(_DWORD *)(SparePtr + 72) & 1 | (4 * v6);
    v27[0] = v26;
    v27[1] = 12LL;
    EtwTraceKernelEvent((__int64)v27, 1u, 0x40000080u, 0x1922u, 0x400A02u);
  }
  if ( !IsPrimaryPresent )
  {
    v13 = (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) + 15LL;
    if ( v13 <= (unsigned int)(MEMORY[0xFFFFF780000003E8] + 63) )
      v13 = 0xFFFFFFFFFFFFFF0LL;
    v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
    v25[0] = ((unsigned __int64)&v22 + 7) & 0xFFFFFFFFFFFFFFC0uLL;
    --CurrentThread->SpecialApcDisable;
    updated = KiCaptureUmsThreadContext(CurrentThread, SparePtr);
    if ( updated >= 0 )
    {
      NpxState = CurrentThread->NpxState;
      CurrentThread->NpxState = NpxState & 0xFFFFFFFFFFFFFFFEuLL;
      *((_QWORD *)Object + 9) = v25;
      Object[20] = Object[20] & 0xFFFFFFF9 | 4;
      CurrentThread->WaitBlock[3].SparePtr = 0LL;
      if ( v6 )
      {
        v23 = *(_QWORD *)CurrentThread->WaitBlock[3].Object;
        *(_QWORD *)(v23 + 1272) = 0LL;
      }
      else
      {
        LOBYTE(v16) = 1;
        updated = KeUpdateUmsThreadState(*(_QWORD *)CurrentThread->WaitBlock[3].Object, 0LL, v16);
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
            v17 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v17);
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
          if ( MEMORY[0xFFFFF780000003E0] )
            RtlXRestore(*(_QWORD *)(SparePtr + 64), MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFFFFFFFFFDuLL);
          else
            _fxrstor(*(void **)(SparePtr + 64));
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
    ExitStatus.NumberParameters = 1;
    ExitStatus.ExceptionInformation[0] = *(_QWORD *)&CurrentThread[1].CurrentRunTime;
    ExitStatus.ExceptionCode = updated;
    ExitStatus.ExceptionFlags = 1;
    ExitStatus.ExceptionAddress = 0LL;
    KiDispatchException(&ExitStatus, *(_QWORD *)(SparePtr + 88), *(_QWORD *)(SparePtr + 80), 1u, 0);
    ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus.ExceptionCode);
    return ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus.ExceptionCode);
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
  {
    v11 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v11);
  }
  result = v19;
  __writecr8(v19);
  CurrentThread->MiscFlags &= ~0x10000u;
  return result;
}
