/*
 * XREFs of DpiFdoDpcForIsr @ 0x1C0014280
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DpiFdoDpcForIsr(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 40);
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(Dpc, &EventProfilerEnter);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(v4 + 1464), &LockHandle);
  *(LARGE_INTEGER *)(v4 + 16LL * *(unsigned int *)(v4 + 1472) + 1480) = KeQueryPerformanceCounter(0LL);
  (*(void (__fastcall **)(_QWORD))(v5 + 192))(*(_QWORD *)(v4 + 48));
  *(LARGE_INTEGER *)(v4 + 16 * (*(unsigned int *)(v4 + 1472) + 93LL)) = KeQueryPerformanceCounter(0LL);
  *(_DWORD *)(v4 + 1472) = ((unsigned __int8)*(_DWORD *)(v4 + 1472) + 1) & 0x3F;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerExit);
}
