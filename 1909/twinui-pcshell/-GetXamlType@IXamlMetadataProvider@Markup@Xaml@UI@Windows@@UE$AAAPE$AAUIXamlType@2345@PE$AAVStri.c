/*
 * XREFs of ?GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@PE$AAVString@Platform@@@Z @ 0x1802D7B1C
 * Callers:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@PE$AAVString@Platform@@@Z @ 0x1802D79F4 (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@De_ea_1802D79F4.c)
 *     ??0RowHeight@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@N@Z @ 0x1802E1AFC (--0RowHeight@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXamlType(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 56LL))(a1, a2, &v5);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = __abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v3;
}
