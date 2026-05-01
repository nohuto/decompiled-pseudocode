/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1800C1140
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@Windows@2@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800C0D50 (-GetRuntimeClassName@-$produce_base@Uimmersive_shell_component@winrt@@UIInspectable@Foundation@W.c)
 *     ?GetRuntimeClassName@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800C0D90 (-GetRuntimeClassName@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801FD868 (--1hstring@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    a1 = 32LL;
  try
  {
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    v4 = *v3;
    *v3 = 0LL;
    *a2 = v4;
    winrt::hstring::~hstring((winrt::hstring *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    winrt::to_hresult(&v6);
  }
  return result;
}
