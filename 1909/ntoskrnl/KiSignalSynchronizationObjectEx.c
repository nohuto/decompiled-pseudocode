/*
 * XREFs of KiSignalSynchronizationObjectEx @ 0x1402B1D2C
 * Callers:
 *     KeDeleteMutant @ 0x1400E3824 (KeDeleteMutant.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

bool __fastcall KiSignalSynchronizationObjectEx(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl
  _QWORD *v4; // rsi
  _QWORD *v5; // r15
  __int64 v7; // r10
  int v8; // ebp
  _QWORD *v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  char v12; // al
  bool v13; // zf
  __int64 v15; // rsi
  _QWORD *v16; // r12
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v20; // r8
  int v21; // ecx
  __int64 *v22; // rdx
  _QWORD *v24; // [rsp+68h] [rbp+10h]

  v3 = 0;
  v4 = *(_QWORD **)(a2 + 8);
  v5 = a3;
  v7 = a1;
  v8 = 0;
  if ( v4 != (_QWORD *)(a2 + 8) )
  {
    while ( 1 )
    {
      v9 = (_QWORD *)*v4;
      v10 = (__int64)v4;
      v24 = v9;
      v4 = (_QWORD *)*v4;
      v11 = *(_QWORD **)(v10 + 8);
      if ( v9[1] != v10 || *v11 != v10 )
LABEL_33:
        __fastfail(3u);
      *v11 = v9;
      v9[1] = v11;
      v12 = *(_BYTE *)(v10 + 16);
      if ( v12 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(v7, v10, *(unsigned __int16 *)(v10 + 18), v5) )
        {
          v13 = (*(_DWORD *)(a2 + 4))-- == 1;
          if ( v13 )
          {
            ++v8;
            break;
          }
        }
      }
      else if ( v12 == 2 )
      {
        *(_BYTE *)(v10 + 17) = 5;
        v15 = *(_QWORD *)(v10 + 24);
        *(_QWORD *)v10 = 0LL;
        v16 = (_QWORD *)(v15 + 8);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        CurrentPrcb = KeGetCurrentPrcb();
        CurrentThread = CurrentPrcb->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v20) = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v10, v20);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v15);
        if ( (_QWORD *)*v16 == v16
          || *(_DWORD *)(v15 + 40) >= *(_DWORD *)(v15 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15
          || !KiWakeQueueWaiter((__int64)CurrentPrcb, (_QWORD *)v15, v10) )
        {
          v21 = *(_DWORD *)(v15 + 4);
          *(_DWORD *)(v15 + 4) = v21 + 1;
          v22 = *(__int64 **)(v15 + 32);
          if ( *v22 != v15 + 24 )
            goto LABEL_33;
          *(_QWORD *)v10 = v15 + 24;
          *(_QWORD *)(v10 + 8) = v22;
          *v22 = v10;
          *(_QWORD *)(v15 + 32) = v10;
          if ( !v21 && (_QWORD *)*v16 != v16 )
            KiWakeOtherQueueWaiters((__int64)CurrentPrcb, v15);
        }
        _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
        v13 = (*(_DWORD *)(a2 + 4))-- == 1;
        if ( v13 )
          break;
        v4 = v24;
        v5 = a3;
      }
      else if ( (unsigned __int8)KiTryUnwaitThread(v7, v10, 256LL, 0LL) )
      {
        --v8;
      }
      if ( v4 == (_QWORD *)(a2 + 8) )
        break;
      v7 = a1;
    }
  }
  if ( a3 )
    return v8 > 0;
  return v3;
}
