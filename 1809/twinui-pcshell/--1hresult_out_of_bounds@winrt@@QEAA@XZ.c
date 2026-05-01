/*
 * XREFs of ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x180384E34
 * Callers:
 *     <none>
 * Callees:
 *     SysFreeString_0 @ 0x180085764 (SysFreeString_0.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1803850DC (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
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
