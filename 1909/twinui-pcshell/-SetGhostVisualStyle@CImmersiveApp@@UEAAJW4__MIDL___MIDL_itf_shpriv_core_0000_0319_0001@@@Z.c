/*
 * XREFs of ?SetGhostVisualStyle@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0001@@@Z @ 0x1801689F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SetGhostVisualStyle(__int64 a1, unsigned int a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 24) + 368LL))(a1 + 24, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
