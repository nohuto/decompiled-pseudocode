/*
 * XREFs of ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1801DE3DC
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$19 @ 0x1801DE91B (_winrt--to_hresult_--_1_--catch$19.c)
 * Callees:
 *     SysFreeString_0 @ 0x180088464 (SysFreeString_0.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801DEA40 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::hresult_out_of_bounds::~hresult_out_of_bounds(BSTR *this)
{
  _QWORD *v2; // rcx

  v2 = this + 2;
  if ( *v2 )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(v2);
  if ( *this )
  {
    SysFreeString_0(*this);
    *this = 0LL;
  }
}
