/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x140299EF4
 * Callers:
 *     KiInterruptDispatchCommon @ 0x140299A54 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KiCallInterruptServiceRoutine @ 0x1400162E0 (KiCallInterruptServiceRoutine.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PerfInfoLogInterrupt @ 0x1400C82E0 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 CurrentIrql, int a3)
{
  unsigned __int8 v6; // si
  char v7; // r13
  bool v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // al
  unsigned __int8 v11; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  char v14; // [rsp+30h] [rbp-D0h]
  __int16 Object; // [rsp+38h] [rbp-C8h] BYREF
  char v16; // [rsp+3Ah] [rbp-C6h]
  int v17; // [rsp+3Ch] [rbp-C4h]
  _QWORD v18[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _KTIMER v19; // [rsp+60h] [rbp-A0h] BYREF
  int v20[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-50h]
  void *v22; // [rsp+B8h] [rbp-48h]
  __int16 *p_Object; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  LARGE_INTEGER v25[4]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v25, 0, sizeof(v25));
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
      *(_QWORD *)&v19.Header.Lock = 8LL;
      v18[1] = v18;
      v17 = 0;
      v18[0] = v18;
      v19.DueTime.QuadPart = 0LL;
      v19.Header.WaitListHead.Blink = &v19.Header.WaitListHead;
      v19.Header.WaitListHead.Flink = &v19.Header.WaitListHead;
      v22 = &KiPassiveIsrWatchdog;
      *(_QWORD *)&v19.Processor = 0LL;
      v24 = 0LL;
      v21 = 0LL;
      p_Object = &Object;
      v18[2] = a1;
      Object = 1;
      v16 = 6;
      v20[0] = 275;
      KiSetTimerEx((__int64)&v19, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)v20);
      v14 = 1;
    }
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp(v25, 0x20004000u);
  v10 = KiCallInterruptServiceRoutine(a1, v7);
  v11 = v10;
  if ( v8 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | v10, (__int64)v25);
  if ( v14 && !KeCancelTimer(&v19) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v11 == 1;
}
