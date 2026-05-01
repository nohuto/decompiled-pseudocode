/*
 * XREFs of _winrt::to_hresult_::_1_::catch$19 @ 0x1801DE91B
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1801DE128 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1801DE2D0 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1801DE3DC (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801DE414 (--1hstring@winrt@@QEAA@XZ.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1801DE720 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall winrt::to_hresult_::_1_::catch_19(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  *(_QWORD *)(a2 + 152) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 120) + 8LL))(*(_QWORD *)(a2 + 120));
  *(_QWORD *)(a2 + 56) = *winrt::to_hstring<char const *,void>((_QWORD *)(a2 + 160), (const CHAR **)(a2 + 152));
  v3 = winrt::hresult_error::hresult_error(a2 + 32, winrt::impl::error_fail, (_QWORD *)(a2 + 56));
  winrt::hresult_error::to_abi(v3, *(_DWORD **)(a2 + 144));
  winrt::hresult_out_of_bounds::~hresult_out_of_bounds((BSTR *)(a2 + 32));
  winrt::hstring::~hstring((HSTRING *)(a2 + 160));
  return &loc_1801DE777;
}
