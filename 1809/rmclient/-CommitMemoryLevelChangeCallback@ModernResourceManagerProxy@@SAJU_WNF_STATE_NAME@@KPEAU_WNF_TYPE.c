/*
 * XREFs of ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180006C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceManagerProxy::CommitMemoryLevelChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _QWORD *a4,
        const void *a5)
{
  char *v6; // rbx
  void (__fastcall *v7)(const void *); // rsi

  if ( a5 )
  {
    v6 = (char *)(a4 + 12);
    RtlAcquireSRWLockExclusive(a4 + 12);
    *((_DWORD *)v6 + 2) = GetCurrentThreadId();
    v7 = (void (__fastcall *)(const void *))a4[3];
    *((_DWORD *)v6 + 2) = 0;
    RtlReleaseSRWLockExclusive(v6);
    if ( v7 )
      v7(a5);
  }
  return 0LL;
}
