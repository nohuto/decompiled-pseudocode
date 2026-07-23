/*
 * XREFs of MiAddMdlTracker @ 0x1402A81CC
 * Callers:
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MiProbeAndLockComplete @ 0x1400935EC (MiProbeAndLockComplete.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     RtlCaptureStackBackTrace @ 0x1400CCD30 (RtlCaptureStackBackTrace.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140153680 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiGetInstructionPointer @ 0x1402A6348 (MiGetInstructionPointer.c)
 */

void __fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  PEPROCESS v3; // rsi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rdx
  bool v11; // r8
  ULONG_PTR v12; // rax
  _QWORD *v13; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  ULONG BackTraceHash; // [rsp+90h] [rbp+8h] BYREF
  int v19; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  if ( v3 || (v3 = PsInitialSystemProcess) != 0LL )
  {
    v7 = *(_QWORD *)&v3[1].ThreadSeed[6];
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 32) )
      {
        v8 = ExAllocateFromNPagedLookasideList(&stru_14043BBC0);
        v9 = v8;
        if ( v8 )
        {
          v8[3] = BugCheckParameter3;
          v8[5] = a2;
          v8[4] = *(_QWORD *)(BugCheckParameter3 + 32);
          *((_DWORD *)v8 + 12) = *(_DWORD *)(BugCheckParameter3 + 44);
          *((_DWORD *)v8 + 13) = *(_DWORD *)(BugCheckParameter3 + 40);
          v8[8] = *(_QWORD *)(BugCheckParameter3 + 48);
          MetroHash64::Hash((const unsigned __int8 *)(BugCheckParameter3 + 48), 8 * a2, (unsigned __int8 *const)&v19);
          *((_DWORD *)v9 + 15) = v19;
          memset(v9 + 9, 0, 0x40uLL);
          if ( !RtlCaptureStackBackTrace(0, 8u, (PVOID *)v9 + 9, &BackTraceHash) )
          {
            v9[10] = retaddr;
            v9[9] = MiGetInstructionPointer();
          }
          *((_DWORD *)v9 + 14) = a3;
          v9[17] = v3;
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 24), &LockHandle);
          v10 = *(_QWORD **)v7;
          v11 = 0;
          if ( *(_QWORD *)v7 )
          {
            while ( 1 )
            {
              v12 = v10[3];
              if ( BugCheckParameter3 < v12 )
              {
                v13 = (_QWORD *)*v10;
                if ( !*v10 )
                {
                  v11 = 0;
                  break;
                }
              }
              else
              {
                if ( BugCheckParameter3 <= v12 )
                  KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v10, BugCheckParameter3, *(_QWORD *)(v7 + 16));
                v13 = (_QWORD *)v10[1];
                if ( !v13 )
                {
                  v11 = 1;
                  break;
                }
              }
              v10 = v13;
            }
          }
          RtlAvlInsertNodeEx((unsigned __int64 *)v7, (unsigned __int64)v10, v11, v9);
          *(_QWORD *)(v7 + 16) += a2;
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
          __writecr8(OldIrql);
        }
        else
        {
          *(_DWORD *)(v7 + 32) = 0;
        }
      }
    }
  }
}
