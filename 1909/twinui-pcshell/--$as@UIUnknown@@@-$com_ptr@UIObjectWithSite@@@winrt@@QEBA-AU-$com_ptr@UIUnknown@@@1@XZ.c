/*
 * XREFs of ??$as@UIUnknown@@@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AU?$com_ptr@UIUnknown@@@1@XZ @ 0x1800BFAE4
 * Callers:
 *     ?CreateInstance@?$wrl_class_factory@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C0A40 (-CreateInstance@-$wrl_class_factory@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::com_ptr<IObjectWithSite>::as<IUnknown>(
        __int64 (__fastcall ****a1)(_QWORD, void *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, void *, _QWORD *); // rcx
  int v4; // eax

  v3 = *a1;
  *a2 = 0LL;
  if ( v3 )
  {
    v4 = (**v3)(v3, &winrt::impl::guid_storage<IUnknown>::value, a2);
    if ( v4 < 0 )
      winrt::throw_hresult((unsigned int)v4);
  }
  return a2;
}
