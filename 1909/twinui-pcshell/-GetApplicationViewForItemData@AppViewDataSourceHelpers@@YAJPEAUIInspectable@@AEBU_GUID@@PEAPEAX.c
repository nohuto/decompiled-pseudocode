/*
 * XREFs of ?GetApplicationViewForItemData@AppViewDataSourceHelpers@@YAJPEAUIInspectable@@AEBU_GUID@@PEAPEAX@Z @ 0x180323604
 * Callers:
 *     ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802D46FC (-GetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 *     ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x18032AAD0 (-SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU-$IVectorView@PEAUISwitchItem@Multitasking@Comp.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180358E70 (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppViewDataSourceHelpers::GetApplicationViewForItemData(
        AppViewDataSourceHelpers *this,
        struct IInspectable *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v6; // ebx
  struct IInspectable *v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = a2;
  *(_QWORD *)&a3->Data1 = 0LL;
  if ( !this )
    return 2147942487LL;
  v6 = (**(__int64 (__fastcall ***)(AppViewDataSourceHelpers *, GUID *, struct IInspectable **, void **))this)(
         this,
         &GUID_a6087428_3be3_4d73_b308_7c04a540bf1a,
         &v7,
         a4);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v6 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, GUID *, const struct _GUID *))v7->lpVtbl->GetIids)(
         v7,
         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
         a3);
  ((void (__fastcall *)(struct IInspectable *))v7->lpVtbl->Release)(v7);
  if ( v6 < 0 )
    return (unsigned int)v6;
  else
    return 0LL;
}
