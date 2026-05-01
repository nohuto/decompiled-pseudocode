/*
 * XREFs of _winrt::to_hresult_::_1_::catch$25 @ 0x180398659
 * Callers:
 *     <none>
 * Callees:
 *     WindowsDeleteString_0 @ 0x1800855EE (WindowsDeleteString_0.c)
 *     SysFreeString_0 @ 0x180085764 (SysFreeString_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1803850DC (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x180396CC8 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x180396EA0 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 *     ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x1803985BC (-to_abi@hresult_error@winrt@@QEBA-AUhresult@2@XZ.c)
 */

void *__fastcall winrt::to_hresult_::_1_::catch_25(__int64 a1, __int64 a2)
{
  int *v3; // rbx
  __int64 v4; // rax
  OLECHAR *v5; // rcx
  HSTRING v6; // rcx

  v3 = *(int **)(a2 + 104);
  *(_QWORD *)(a2 + 168) = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)(a2 + 56) = *winrt::to_hstring<char const *,void>((_QWORD *)(a2 + 176), (const CHAR **)(a2 + 168));
  v4 = winrt::hresult_error::hresult_error(a2 + 32, v3[7]);
  winrt::hresult_error::to_abi(v4, *(_DWORD **)(a2 + 160));
  if ( *(_QWORD *)(a2 + 48) )
    winrt::com_ptr<IInspectable>::unconditional_release_ref((__int64 *)(a2 + 48));
  v5 = *(OLECHAR **)(a2 + 32);
  if ( v5 )
  {
    SysFreeString_0(v5);
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  v6 = *(HSTRING *)(a2 + 176);
  if ( v6 )
    WindowsDeleteString_0(v6);
  return &loc_180398623;
}
