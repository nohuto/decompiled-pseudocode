/*
 * XREFs of _winrt::make_winrt::details::module_count_wrapper_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher____::_1_::dtor$0 @ 0x1800C0353
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ @ 0x1800A1994 (--1-$com_ptr@UIObjectWithSite@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::make_winrt::details::module_count_wrapper_winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::com_ptr<IObjectWithSite>::~com_ptr<IObjectWithSite>(*(__int64 **)(a2 + 64));
  }
  return result;
}
