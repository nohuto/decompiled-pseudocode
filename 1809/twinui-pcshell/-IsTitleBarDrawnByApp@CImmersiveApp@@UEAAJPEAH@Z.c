/*
 * XREFs of ?IsTitleBarDrawnByApp@CImmersiveApp@@UEAAJPEAH@Z @ 0x18011D9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsTitleBarDrawnByApp(CImmersiveApp *this, int *a2)
{
  unsigned __int8 v4; // al
  RTL_SRWLOCK *v5; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 256LL))(*((_QWORD *)this + 41));
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = v4;
  ReleaseSRWLockExclusive(v5);
  return 0LL;
}
