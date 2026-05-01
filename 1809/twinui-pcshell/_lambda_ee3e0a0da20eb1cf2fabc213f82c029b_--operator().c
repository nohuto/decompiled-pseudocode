/*
 * XREFs of _lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator() @ 0x18000F9F0
 * Callers:
 *     ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18000D560 (-GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18000E800 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?RefreshCollection@CApplicationViewManager@@UEAAJXZ @ 0x18012D2B0 (-RefreshCollection@CApplicationViewManager@@UEAAJXZ.c)
 *     ?EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x180130850 (-EnumerateOwnershipTree@CWin32ApplicationView@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ee3e0a0da20eb1cf2fabc213f82c029b_::operator()(__int64 **a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v4 = *(_QWORD *)(v2 + 728);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(v2 + 728));
  v5 = *a1;
  v9 = 0LL;
  v6 = *v5;
  *v5 = v4;
  v8 = v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
}
