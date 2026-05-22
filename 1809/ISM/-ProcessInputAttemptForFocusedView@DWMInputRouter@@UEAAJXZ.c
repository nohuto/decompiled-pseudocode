/*
 * XREFs of ?ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ @ 0x180089840
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z @ 0x18002AB70 (-ProcessInputAttempt@InputAttemptedTargetManager@@QEBAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::ProcessInputAttemptForFocusedView(DWMInputRouter *this)
{
  __int64 v1; // rbx
  unsigned int v2; // eax

  v1 = *((_QWORD *)this + 42);
  v2 = *(_DWORD *)(v1 + 96);
  if ( !v2 )
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 88) + 48LL))(*(_QWORD *)(v1 + 88));
  InputAttemptedTargetManager::ProcessInputAttempt((InputAttemptedTargetManager *)(v1 + 64), v2);
  return 0LL;
}
