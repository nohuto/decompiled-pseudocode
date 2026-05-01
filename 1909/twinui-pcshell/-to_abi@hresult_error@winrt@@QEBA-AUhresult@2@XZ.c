/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1801FD904
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$15 @ 0x1801FD96B (_winrt--to_hresult_--_1_--catch$15.c)
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1801FD9BF (_winrt--to_hresult_--_1_--catch$17.c)
 *     _winrt::to_hresult_::_1_::catch$18 @ 0x1801FDA5F (_winrt--to_hresult_--_1_--catch$18.c)
 *     _winrt::to_hresult_::_1_::catch$19 @ 0x1801FDAFF (_winrt--to_hresult_--_1_--catch$19.c)
 * Callees:
 *     WINRT_SetRestrictedErrorInfo @ 0x18008AF4A (WINRT_SetRestrictedErrorInfo.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    WINRT_SetRestrictedErrorInfo();
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
