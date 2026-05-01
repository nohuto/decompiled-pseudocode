/*
 * XREFs of ?CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180006B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceManagerProxy::CommitMemoryLimitChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        _QWORD *a5)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  void (__fastcall *v8)(_QWORD, _QWORD); // r15

  if ( !a5 )
    return 0LL;
  RtlAcquireSRWLockExclusive(a4 + 96);
  *((_DWORD *)a4 + 26) = GetCurrentThreadId();
  v6 = *((_QWORD *)a4 + 10);
  v7 = a5[1];
  v8 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)a4 + 4);
  *(_OWORD *)(a4 + 72) = *(_OWORD *)a5;
  *((_QWORD *)a4 + 11) = a5[2];
  *((_DWORD *)a4 + 26) = 0;
  RtlReleaseSRWLockExclusive(a4 + 96);
  if ( v6 != v7 )
  {
    if ( v8 )
      v8(*a5, a5[1]);
  }
  return 0LL;
}
