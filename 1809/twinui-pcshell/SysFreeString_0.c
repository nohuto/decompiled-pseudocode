/*
 * XREFs of SysFreeString_0 @ 0x180085764
 * Callers:
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x180384E34 (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x180398659 (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x180398727 (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x1803987CC (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x180398871 (_winrt--to_hresult_--_1_--catch$29.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SysFreeString_0(BSTR bstrString)
{
  SysFreeString(bstrString);
}
