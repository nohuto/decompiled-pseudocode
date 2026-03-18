/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x1402B0D30
 * Callers:
 *     KiInterruptDispatchCommon @ 0x1402B0884 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     PerfInfoLogInterrupt @ 0x1400A1530 (PerfInfoLogInterrupt.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     KiCallInterruptServiceRoutine @ 0x1400FFB90 (KiCallInterruptServiceRoutine.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 CurrentIrql, int a3)
{
  unsigned __int8 v6; // r14
  char v7; // r13
  bool v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // al
  unsigned __int8 v11; // si
  struct _KPRCB *CurrentPrcb; // rcx
  char v14; // [rsp+30h] [rbp-D0h]
  _QWORD Object[5]; // [rsp+38h] [rbp-C8h] BYREF
  struct _KTIMER v16; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[8]; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER v18[4]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(Object, 0, 0x20uLL);
  memset(v17, 0, sizeof(v17));
  memset(&v16, 0, sizeof(v16));
  v6 = *(_BYTE *)(a1 + 93);
  v14 = 0;
  v7 = 1;
  v8 = 0;
  if ( v6 )
  {
    if ( CurrentIrql != v6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v6 >= 2u && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
    }
    if ( ((*(_QWORD *)(a1 + 72) + 3LL) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      v7 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
    v8 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      HIDWORD(Object[0]) = 0;
      Object[2] = &Object[1];
      v16.Header.SignalState = 0;
      Object[1] = &Object[1];
      v16.DueTime.QuadPart = 0LL;
      v16.Header.WaitListHead.Blink = &v16.Header.WaitListHead;
      v16.Header.WaitListHead.Flink = &v16.Header.WaitListHead;
      v17[3] = &KiPassiveIsrWatchdog;
      *(_QWORD *)&v16.Processor = 0LL;
      v17[7] = 0LL;
      v17[2] = 0LL;
      v17[4] = Object;
      Object[3] = a1;
      LOWORD(Object[0]) = 1;
      BYTE2(Object[0]) = 6;
      v16.Header.Type = 8;
      LODWORD(v17[0]) = 275;
      KiSetTimerEx((__int64)&v16, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)v17);
      v14 = 1;
    }
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp(v18, 0x20004000u);
  v10 = KiCallInterruptServiceRoutine(a1, v7);
  v11 = v10;
  if ( v8 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | v10, (__int64)v18);
  if ( v14 && !KeCancelTimer(&v16) )
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( v6 )
  {
    if ( CurrentIrql != v6 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v11 == 1;
}
