/*
 * XREFs of ?IsSplashScreenPresented@CImmersiveApp@@UEAAJPEAH@Z @ 0x1800738B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsSplashScreenPresented(CImmersiveApp *this, int *a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 56LL))(*((_QWORD *)this + 41)) == 1;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
