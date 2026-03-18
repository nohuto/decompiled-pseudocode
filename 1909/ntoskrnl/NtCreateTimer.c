/*
 * XREFs of NtCreateTimer @ 0x14064A240
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     PsInsertVirtualizedTimer @ 0x14012F984 (PsInsertVirtualizedTimer.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 */

NTSTATUS __stdcall NtCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  char PreviousMode; // si
  __int64 v7; // rcx
  NTSTATUS inserted; // ecx
  char *v9; // rbx
  __int64 v10; // r9
  KSPIN_LOCK *v11; // r13
  _KPROCESS *Process; // r15
  unsigned __int64 v14; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // r12
  __int64 v17; // [rsp+20h] [rbp-78h]
  PVOID DeferredContext; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+58h] [rbp-40h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h]

  if ( (unsigned int)TimerType > SynchronizationTimer )
    return -1073741582;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TimerHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)TimerHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               ExTimerObjectType,
               (int)ObjectAttributes,
               PreviousMode,
               v17,
               328,
               0,
               0,
               &DeferredContext,
               0LL);
  if ( inserted >= 0 )
  {
    v9 = (char *)DeferredContext;
    KeInitializeDpc((PRKDPC)((char *)DeferredContext + 160), (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, DeferredContext);
    KeInitializeTimerEx((PKTIMER)v9, TimerType);
    v11 = (KSPIN_LOCK *)(v9 + 64);
    *((_QWORD *)v9 + 8) = 0LL;
    v9[304] = 0;
    *((_QWORD *)v9 + 32) = 0LL;
    *((_QWORD *)v9 + 33) = 0LL;
    v20 = (__int64)(v9 + 280);
    *((_QWORD *)v9 + 35) = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
      {
        v14 = Process[1].Affinity.Bitmap[16];
        LOBYTE(v10) = 0;
        if ( v14 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          v16 = v14 + 56;
          ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
          LOBYTE(v10) = (*(_DWORD *)(v14 + 1304) & 0x40000) != 0 && *(_DWORD *)(v14 + 856);
        }
        else
        {
          v16 = 56LL;
        }
        v9 = (char *)DeferredContext;
        PsInsertVirtualizedTimer((KSPIN_LOCK *)Process, (_QWORD *)DeferredContext + 36, v11, v10, (KSPIN_LOCK **)v20);
        if ( v14 )
        {
          ExReleaseResourceLite((PERESOURCE)v16);
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          v9 = (char *)DeferredContext;
        }
      }
      else
      {
        v9 = (char *)DeferredContext;
      }
    }
    inserted = ObInsertObjectEx(v9, 0LL, DesiredAccess, 0, 0, 0LL, &v19);
    if ( inserted >= 0 )
      *TimerHandle = (HANDLE)v19;
  }
  return inserted;
}
