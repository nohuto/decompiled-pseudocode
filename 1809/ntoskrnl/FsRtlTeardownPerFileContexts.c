/*
 * XREFs of FsRtlTeardownPerFileContexts @ 0x1406A4BB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __stdcall FsRtlTeardownPerFileContexts(PVOID *PerFileContextPointer)
{
  __int64 **v1; // rbx
  __int64 **v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rsi
  __int64 v5; // rax
  struct _KTHREAD *v6; // rax

  v1 = (__int64 **)_InterlockedExchange64((volatile __int64 *)PerFileContextPointer, 0LL);
  if ( v1 )
  {
    v2 = v1 + 1;
    if ( *v2 != (__int64 *)v2 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 == (__int64 *)v2 )
          break;
        v5 = *v4;
        if ( (__int64 **)v4[1] != v2 || *(__int64 **)(v5 + 8) != v4 )
          __fastfail(3u);
        *v2 = (__int64 *)v5;
        *(_QWORD *)(v5 + 8) = v2;
        ExReleasePushLockEx((ULONG_PTR)v1, 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ((void (__fastcall *)(__int64 *))v4[4])(v4);
        v6 = KeGetCurrentThread();
        --v6->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
      }
      ExReleasePushLockEx((ULONG_PTR)v1, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    ExFreePoolWithTag(v1, 0x63665346u);
  }
}
