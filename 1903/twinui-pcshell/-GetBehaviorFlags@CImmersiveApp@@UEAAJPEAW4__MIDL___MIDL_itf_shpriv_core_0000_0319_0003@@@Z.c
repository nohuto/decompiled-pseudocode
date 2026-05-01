/*
 * XREFs of ?GetBehaviorFlags@CImmersiveApp@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0003@@@Z @ 0x180143BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetBehaviorFlags(
        CImmersiveApp *this,
        enum __MIDL___MIDL_itf_shpriv_core_0000_0319_0003 *a2)
{
  *(_DWORD *)a2 = 0;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, enum __MIDL___MIDL_itf_shpriv_core_0000_0319_0003 *))(*((_QWORD *)this + 3) + 232LL))(
                    (char *)this + 24,
                    a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
