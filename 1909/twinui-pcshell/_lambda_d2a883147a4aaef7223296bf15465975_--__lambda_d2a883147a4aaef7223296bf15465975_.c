/*
 * XREFs of _lambda_d2a883147a4aaef7223296bf15465975_::__lambda_d2a883147a4aaef7223296bf15465975_ @ 0x18012CF8C
 * Callers:
 *     _CApplicationManager::SwitchToDesktopOnMonitor_::_1_::dtor$3 @ 0x180139AEA (_CApplicationManager--SwitchToDesktopOnMonitor_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_d2a883147a4aaef7223296bf15465975_::__lambda_d2a883147a4aaef7223296bf15465975_(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8));
}
