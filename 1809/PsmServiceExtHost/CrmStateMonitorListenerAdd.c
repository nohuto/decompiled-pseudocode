/*
 * XREFs of CrmStateMonitorListenerAdd @ 0x1800335A0
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18003349C (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStart @ 0x180042CE8 (CrmStateMonitorStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmStateMonitorListenerAdd(unsigned int *a1, __int64 a2)
{
  unsigned int *v4; // rcx
  unsigned int **v5; // rdx

  RtlAcquireSRWLockExclusive(a1 + 2);
  a1[4] = GetCurrentThreadId();
  v4 = (unsigned int *)(a2 + 8);
  v5 = (unsigned int **)*((_QWORD *)a1 + 4);
  if ( *v5 != a1 + 6 )
    __fastfail(3u);
  *(_QWORD *)v4 = a1 + 6;
  *(_QWORD *)(a2 + 16) = v5;
  *v5 = v4;
  *((_QWORD *)a1 + 4) = v4;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a2)(a2, *a1, *((_QWORD *)a1 + 5));
  a1[4] = 0;
  RtlReleaseSRWLockExclusive(a1 + 2);
  return CrmLogStateMonitorListenerAdd(a1);
}
