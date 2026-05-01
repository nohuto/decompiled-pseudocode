/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1803985BC
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$24 @ 0x18039862D (_winrt--to_hresult_--_1_--catch$24.c)
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x180398659 (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x180398727 (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x1803987CC (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x180398871 (_winrt--to_hresult_--_1_--catch$29.c)
 * Callees:
 *     WINRT_SetRestrictedErrorInfo @ 0x1800856CD (WINRT_SetRestrictedErrorInfo.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    WINRT_SetRestrictedErrorInfo();
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
