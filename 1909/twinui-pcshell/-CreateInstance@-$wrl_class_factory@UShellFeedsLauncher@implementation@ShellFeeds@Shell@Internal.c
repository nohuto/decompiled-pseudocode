/*
 * XREFs of ?CreateInstance@?$wrl_class_factory@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@winrt@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800C0A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ @ 0x18009FE64 (-unconditional_release_ref@-$com_ptr@UIAgileObject@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??$as@UIUnknown@@@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AU?$com_ptr@UIUnknown@@@1@XZ @ 0x1800BFAE4 (--$as@UIUnknown@@@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AU-$com_ptr@UIUnknown@@@1@XZ.c)
 *     ??$make@V?$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@@details@winrt@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800C02F8 (--$make@V-$module_count_wrapper@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Win.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::wrl_class_factory<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 result; // rax
  int v7; // eax
  const char *v8; // r9
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, __int64, _QWORD *); // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, void *, _QWORD *); // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"internal\\shellcommonshell\\inc\\winrt\\wrl_class_factory.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    try
    {
      winrt::make<winrt::details::module_count_wrapper<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher>,>((__int64 *)&v12);
      winrt::com_ptr<IObjectWithSite>::as<IUnknown>(&v12, &v11);
      v7 = (**v11)(v11, a3, a4);
      v9 = v7;
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"internal\\shellcommonshell\\inc\\winrt\\wrl_class_factory.h",
          (const char *)(unsigned int)v7);
      if ( v11 )
        winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v11);
      if ( v12 )
        winrt::com_ptr<winrt::impl::IAgileObject>::unconditional_release_ref((__int64 *)&v12);
      result = v9;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x3F,
                             (unsigned int)"internal\\shellcommonshell\\inc\\winrt\\wrl_class_factory.h",
                             v8);
    }
  }
  return result;
}
