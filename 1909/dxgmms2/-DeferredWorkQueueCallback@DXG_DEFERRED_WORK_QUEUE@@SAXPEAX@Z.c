/*
 * XREFs of ?DeferredWorkQueueCallback@DXG_DEFERRED_WORK_QUEUE@@SAXPEAX@Z @ 0x1C0025320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback(char *a1)
{
  char *v2; // rsi
  char *v3; // rdi
  void (__fastcall ***v4)(_QWORD); // rax
  void (__fastcall *v5)(_QWORD); // rax

  v2 = a1 + 16;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1, 0LL);
    *((_QWORD *)a1 + 1) = KeGetCurrentThread();
    v3 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2
      || (v4 = *(void (__fastcall ****)(_QWORD))v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v2 = v4;
    v4[1] = (void (__fastcall **)(_QWORD))v2;
    if ( v3 == v2 )
      break;
    *((_QWORD *)a1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    (*((void (__fastcall **)(_QWORD))v3 + 2))(*((_QWORD *)v3 + 3));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a1, 0LL);
    *((_QWORD *)a1 + 1) = KeGetCurrentThread();
    --*((_DWORD *)a1 + 8);
    *((_QWORD *)a1 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    v5 = (void (__fastcall *)(_QWORD))*((_QWORD *)v3 + 4);
    if ( v5 )
      v5(*((_QWORD *)v3 + 3));
    ExFreePoolWithTag(v3, 0);
  }
  KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  *((_QWORD *)a1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
