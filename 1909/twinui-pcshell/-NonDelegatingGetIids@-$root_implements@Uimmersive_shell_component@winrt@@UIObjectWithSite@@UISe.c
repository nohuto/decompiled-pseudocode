/*
 * XREFs of ?NonDelegatingGetIids@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800C1080
 * Callers:
 *     ?GetIids@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800C0CC0 (-GetIids@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@i.c)
 *     ?GetIids@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800C0D00 (-GetIids@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAKPEA.c)
 * Callees:
 *     __Platform_CoTaskMemAlloc @ 0x18008ADBB (__Platform_CoTaskMemAlloc.c)
 *     ??$_Ptr_move_cat@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U12345@@std@@YA?AU_Really_trivial_ptr_iterator_tag@0@AEBQEAUDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@0@Z @ 0x1800BFA04 (--$_Ptr_move_cat@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@U12345.c)
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetIids(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  unsigned int v5; // eax
  LPVOID v6; // rax
  char *v8; // rbx
  void *v9; // [rsp+20h] [rbp-28h]
  unsigned int v10; // [rsp+30h] [rbp-18h] BYREF
  char *v11; // [rsp+38h] [rbp-10h]
  char v12; // [rsp+50h] [rbp+8h] BYREF
  void *Src; // [rsp+68h] [rbp+20h]

  if ( !a1 )
    a1 = 32LL;
  (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 16LL))(a1, &v10);
  v5 = v10;
  if ( v10 )
  {
    *a2 = v10;
    v6 = _Platform_CoTaskMemAlloc(16LL * v5);
    *a3 = v6;
    if ( !v6 )
      return 2147942414LL;
    v9 = v6;
    v8 = &v11[16 * v10];
    Src = v11;
    std::_Ptr_move_cat<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId,Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>(&v12);
    memmove_0(v9, Src, v8 - (_BYTE *)Src);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
  }
  return 0LL;
}
