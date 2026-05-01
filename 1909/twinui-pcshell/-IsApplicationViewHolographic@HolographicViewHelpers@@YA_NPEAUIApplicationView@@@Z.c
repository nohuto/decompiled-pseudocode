/*
 * XREFs of ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180080794
 * Callers:
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180080760 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180227220 (-GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@In.c)
 *     ?ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z @ 0x180326B80 (-ShouldIncludeView@AppViewDataSourceAdapter@@MEAA_NPEAUIApplicationView@@@Z.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180373374 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall HolographicViewHelpers::IsApplicationViewHolographic(
        HolographicViewHelpers *this,
        struct IApplicationView *a2)
{
  bool v3; // si
  int (__fastcall *v4)(HolographicViewHelpers *, __int64 *); // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v6 = 0LL;
  v4 = *(int (__fastcall **)(HolographicViewHelpers *, __int64 *))(*(_QWORD *)this + 264LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  if ( v4(this, &v6) >= 0 )
    v3 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) == 4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return v3;
}
