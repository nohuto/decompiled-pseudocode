/*
 * XREFs of _winrt::to_hresult_::_1_::catch$18 @ 0x1801FDA5F
 * Callers:
 *     <none>
 * Callees:
 *     SysFreeString_0 @ 0x18008AFE1 (SysFreeString_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1801FD748 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1801FD834 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1801FD868 (--1hstring@winrt@@QEAA@XZ.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1801FD904 (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

void *__fastcall winrt::to_hresult_::_1_::catch_18(__int64 a1, __int64 a2)
{
  OLECHAR *v3; // rcx

  *(_QWORD *)(a2 + 152) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 8LL))(*(_QWORD *)(a2 + 112));
  *(_QWORD *)(a2 + 56) = *winrt::to_hstring<char const *,void>((_QWORD *)(a2 + 160), (const CHAR **)(a2 + 152));
  winrt::hresult_error::hresult_error(a2 + 32, winrt::impl::error_invalid_argument);
  winrt::hresult_error::to_abi(a2 + 32, *(_DWORD **)(a2 + 144));
  if ( *(_QWORD *)(a2 + 48) )
    winrt::com_ptr<IInspectable>::unconditional_release_ref((__int64 *)(a2 + 48));
  v3 = *(OLECHAR **)(a2 + 32);
  if ( v3 )
  {
    SysFreeString_0(v3);
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  winrt::hstring::~hstring((HSTRING *)(a2 + 160));
  return &loc_1801FD95B;
}
