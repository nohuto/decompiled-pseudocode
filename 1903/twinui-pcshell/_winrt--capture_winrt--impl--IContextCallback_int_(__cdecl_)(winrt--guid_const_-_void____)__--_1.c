/*
 * XREFs of _winrt::capture_winrt::impl::IContextCallback_int_(__cdecl_)(winrt::guid_const_&_void____)__::_1_::dtor$0 @ 0x180094392
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UIContextCallback@impl@winrt@@@winrt@@QEAA@XZ @ 0x180094724 (--1-$com_ptr@UIContextCallback@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::capture_winrt::impl::IContextCallback_int____cdecl___winrt::guid_const___void_______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return winrt::com_ptr<winrt::impl::IContextCallback>::~com_ptr<winrt::impl::IContextCallback>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
