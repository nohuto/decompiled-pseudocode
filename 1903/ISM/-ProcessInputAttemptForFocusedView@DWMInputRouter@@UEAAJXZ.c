/*
 * XREFs of ?ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ @ 0x1800C4BE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x180070BEC (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 */

__int64 __fastcall DWMInputRouter::ProcessInputAttemptForFocusedView(DWMInputRouter *this)
{
  __int64 v1; // rbx
  unsigned int v2; // eax

  v1 = *((_QWORD *)this + 42);
  v2 = *(_DWORD *)(v1 + 72);
  if ( !v2 )
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 64) + 48LL))(*(_QWORD *)(v1 + 64));
  InputAttemptedTargetManager::ProcessInputAttempt((InputAttemptedTargetManager *)(v1 + 64), v2);
  return 0LL;
}
