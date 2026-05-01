/*
 * XREFs of ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C4FF0
 * Callers:
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800C1590 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 *     ?QueryInterface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C18F0 (-QueryInterface@-$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Window.c)
 *     ?QueryInterface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1920 (-QueryInterface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvid.c)
 *     ?QueryInterface@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C19C0 (-QueryInterface@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Window.c)
 * Callees:
 *     ??$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1800C0254 (--$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIWeakReferenceSource@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1800C028C (--$is_guid_of@UIWeakReferenceSource@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ?AddRef@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@QEAAIXZ @ 0x1800C09D4 (-AddRef@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@.c)
 *     ?make_weak_ref@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1800C4BE4 (-make_weak_ref@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServicePr.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$is_guid_of@UIAgileObject@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801FD6A8 (--$is_guid_of@UIAgileObject@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801FD6E0 (--$is_guid_of@UIMarshal@impl@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ??$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1801FD714 (--$is_guid_of@UIUnknown@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@@12@PEAPEAX@Z @ 0x1801FD8B0 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@@12@PEAPEAX@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  volatile signed __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 (__fastcall *v12)(volatile signed __int64 *); // rax
  _DWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  __int64 weak_ref; // rax
  bool v18; // zf

  v5 = (volatile signed __int64 *)a1;
  if ( !a1 )
    a1 = 32LL;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  *a3 = v6;
  if ( v6 )
    goto LABEL_4;
  if ( (unsigned __int8)winrt::impl::is_guid_of<winrt::impl::IAgileObject>(a2) )
    goto LABEL_6;
  if ( (unsigned __int8)winrt::impl::is_guid_of<winrt::impl::IMarshal>(v9, v8, v10, v11) )
  {
    v14 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*v5 + 8))(v5);
    return winrt::impl::make_marshaler(v14, a3);
  }
  else
  {
    if ( winrt::impl::is_guid_of<winrt::Windows::Foundation::IInspectable>(v13) )
    {
      v12 = *(__int64 (__fastcall **)(volatile signed __int64 *))(*v5 + 40);
      goto LABEL_7;
    }
    if ( (unsigned __int8)winrt::impl::is_guid_of<winrt::Windows::Foundation::IUnknown>(v15) )
    {
LABEL_6:
      v12 = *(__int64 (__fastcall **)(volatile signed __int64 *))(*v5 + 8);
LABEL_7:
      *a3 = v12(v5);
LABEL_4:
      winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::AddRef();
      return 0LL;
    }
    if ( winrt::impl::is_guid_of<winrt::impl::IWeakReferenceSource>(v16) )
    {
      weak_ref = winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::make_weak_ref(v5);
      *a3 = weak_ref;
      v18 = weak_ref == 0;
      result = (unsigned int)winrt::impl::error_ok;
      if ( v18 )
        return (unsigned int)winrt::impl::error_bad_alloc;
    }
    else
    {
      return 2147500034LL;
    }
  }
  return result;
}
