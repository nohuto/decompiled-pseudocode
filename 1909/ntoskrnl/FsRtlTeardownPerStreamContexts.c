/*
 * XREFs of FsRtlTeardownPerStreamContexts @ 0x140671DA0
 * Callers:
 *     RawCleanupVcb @ 0x140671D28 (RawCleanupVcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

void __stdcall FsRtlTeardownPerStreamContexts(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader)
{
  _LIST_ENTRY *p_FilterContexts; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *v5; // rax
  _EX_PUSH_LOCK *p_PushLock; // r14
  struct _KTHREAD *v7; // rax

  p_FilterContexts = &AdvancedHeader->FilterContexts;
  if ( p_FilterContexts->Flink != p_FilterContexts )
  {
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      ExAcquireFastMutex(AdvancedHeader->FastMutex);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
    }
    while ( 1 )
    {
      Flink = p_FilterContexts->Flink;
      if ( p_FilterContexts->Flink == p_FilterContexts )
        break;
      v5 = Flink->Flink;
      if ( Flink->Blink != p_FilterContexts || v5->Blink != Flink )
        __fastfail(3u);
      p_FilterContexts->Flink = v5;
      v5->Blink = p_FilterContexts;
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
        p_PushLock = &AdvancedHeader->PushLock;
      }
      else
      {
        p_PushLock = &AdvancedHeader->PushLock;
        ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      ((void (__fastcall *)(struct _LIST_ENTRY *))Flink[2].Flink)(Flink);
      if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
      {
        ExAcquireFastMutex(AdvancedHeader->FastMutex);
      }
      else
      {
        v7 = KeGetCurrentThread();
        --v7->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)p_PushLock, 0LL);
      }
    }
    if ( (*((_BYTE *)AdvancedHeader + 7) & 0xF0u) < 0x10 )
    {
      KeReleaseGuardedMutex(AdvancedHeader->FastMutex);
    }
    else
    {
      ExReleasePushLockEx((ULONG_PTR)&AdvancedHeader->PushLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
}
