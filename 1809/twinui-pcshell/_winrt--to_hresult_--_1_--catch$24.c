/*
 * XREFs of _winrt::to_hresult_::_1_::catch$24 @ 0x18039862D
 * Callers:
 *     <none>
 * Callees:
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1803985BC (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall winrt::to_hresult_::_1_::catch_24(__int64 a1, __int64 a2)
{
  winrt::hresult_error::to_abi(*(_QWORD *)(a2 + 96), *(_DWORD **)(a2 + 160));
  return &loc_180398613;
}
