/*
 * XREFs of ??$make@V?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800C02F8
 * Callers:
 *     ?CreateInstance@?$wrl_class_factory@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C0A40 (-CreateInstance@-$wrl_class_factory@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     ??0?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@QEAA@XZ @ 0x1800C0478 (--0-$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@w.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall winrt::make<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>,>(
        __int64 *a1)
{
  __int64 v2; // rbx
  void *v3; // rcx
  __int64 v4; // rax

  v2 = 0LL;
  *a1 = 0LL;
  v3 = operator new(0x70uLL);
  v4 = winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>(v3);
  if ( v4 )
    v2 = v4 + 8;
  *a1 = v2;
  return a1;
}
