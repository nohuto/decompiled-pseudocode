/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::marshaler @ 0x1800A1844
 * Callers:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@@12@PEAPEAX@Z @ 0x1801FD8B0 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@@12@PEAPEAX@Z.c)
 * Callees:
 *     _winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler @ 0x1800A430C (_winrt--impl--make_marshaler_--_2_--marshaler--get_marshaler.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::make_marshaler_::_2_::marshaler::marshaler(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 *marshaler; // rax
  __int64 v6; // r8
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)a1 = off_18044D7A0;
  v4 = (_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = 0LL;
  marshaler = (__int64 *)winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler(&v8);
  v6 = *marshaler;
  *marshaler = 0LL;
  *(_QWORD *)(a1 + 16) = v6;
  if ( v8 )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(&v8);
  *(_DWORD *)(a1 + 24) = 1;
  if ( *v4 != a2 )
  {
    if ( *v4 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v4);
    *v4 = a2;
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  return a1;
}
