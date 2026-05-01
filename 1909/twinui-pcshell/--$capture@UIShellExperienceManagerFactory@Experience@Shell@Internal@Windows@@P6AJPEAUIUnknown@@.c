/*
 * XREFs of ??$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAU6@AEBU7@@winrt@@YA?AU?$com_ptr@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@0@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAU2@1@Z @ 0x1800BFE78
 * Callers:
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800C4D30 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::capture<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory,long (*)(IUnknown *,_GUID const &,_GUID const &,void * *),IUnknown *,_GUID const &>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD, void *, void *, _QWORD *),
        _QWORD *a3)
{
  int v4; // eax

  *a1 = 0LL;
  v4 = a2(
         *a3,
         &unk_1804A6908,
         &winrt::impl::guid_storage<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory>::value,
         a1);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  return a1;
}
