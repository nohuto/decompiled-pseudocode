/*
 * XREFs of MiAddMdlTracker @ 0x1402BF84C
 * Callers:
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x1400EEE40 (MiProbeAndLockComplete.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017170 (RtlCaptureStackBackTrace.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140155940 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiGetInstructionPointer @ 0x1402BD8A0 (MiGetInstructionPointer.c)
 */

__int64 __fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  PEPROCESS v3; // rsi
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rdx
  bool v11; // r8
  _QWORD *v12; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  ULONG BackTraceHash; // [rsp+90h] [rbp+8h] BYREF
  int v18; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  result = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 || (v3 = PsInitialSystemProcess) != 0LL )
  {
    v8 = *(_QWORD *)&v3[1].ThreadSeed[6];
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 32) )
      {
        result = (__int64)ExAllocateFromNPagedLookasideList(&stru_140466580);
        v9 = result;
        if ( result )
        {
          *(_QWORD *)(result + 24) = BugCheckParameter3;
          *(_QWORD *)(result + 40) = a2;
          *(_QWORD *)(result + 32) = *(_QWORD *)(BugCheckParameter3 + 32);
          *(_DWORD *)(result + 48) = *(_DWORD *)(BugCheckParameter3 + 44);
          *(_DWORD *)(result + 52) = *(_DWORD *)(BugCheckParameter3 + 40);
          *(_QWORD *)(result + 64) = *(_QWORD *)(BugCheckParameter3 + 48);
          MetroHash64::Hash((const unsigned __int8 *)(BugCheckParameter3 + 48), 8 * a2, (unsigned __int8 *const)&v18);
          *(_DWORD *)(v9 + 60) = v18;
          memset((void *)(v9 + 72), 0, 0x40uLL);
          if ( !RtlCaptureStackBackTrace(0, 8u, (PVOID *)(v9 + 72), &BackTraceHash) )
          {
            *(_QWORD *)(v9 + 80) = retaddr;
            *(_QWORD *)(v9 + 72) = MiGetInstructionPointer();
          }
          *(_DWORD *)(v9 + 56) = a3;
          *(_QWORD *)(v9 + 136) = v3;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 24), &LockHandle);
          v10 = *(_QWORD **)v8;
          v11 = 0;
          if ( *(_QWORD *)v8 )
          {
            while ( 1 )
            {
              if ( BugCheckParameter3 < v10[3] )
              {
                v12 = (_QWORD *)*v10;
                if ( !*v10 )
                {
                  v11 = 0;
                  break;
                }
              }
              else
              {
                if ( BugCheckParameter3 <= v10[3] )
                  KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v10, BugCheckParameter3, *(_QWORD *)(v8 + 16));
                v12 = (_QWORD *)v10[1];
                if ( !v12 )
                {
                  v11 = 1;
                  break;
                }
              }
              v10 = v12;
            }
          }
          RtlAvlInsertNodeEx((unsigned __int64 *)v8, (unsigned __int64)v10, v11, (_QWORD *)v9);
          *(_QWORD *)(v8 + 16) += a2;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          result = OldIrql;
          __writecr8(OldIrql);
        }
        else
        {
          *(_DWORD *)(v8 + 32) = 0;
        }
      }
    }
  }
  return result;
}
