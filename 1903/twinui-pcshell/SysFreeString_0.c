/*
 * XREFs of SysFreeString_0 @ 0x180088464
 * Callers:
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1801DE3DC (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1801DE7DB (_winrt--to_hresult_--_1_--catch$17.c)
 *     _winrt::to_hresult_::_1_::catch$18 @ 0x1801DE87B (_winrt--to_hresult_--_1_--catch$18.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SysFreeString_0(BSTR bstrString)
{
  SysFreeString(bstrString);
}
