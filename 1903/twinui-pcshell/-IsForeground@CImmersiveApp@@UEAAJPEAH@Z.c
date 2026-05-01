/*
 * XREFs of ?IsForeground@CImmersiveApp@@UEAAJPEAH@Z @ 0x180079340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IsForeground(CImmersiveApp *this, int *a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a2 = (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 416LL))((char *)this + 24) != 0;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
