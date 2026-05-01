/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler @ 0x1800A430C
 * Callers:
 *     _winrt::impl::make_marshaler_::_2_::marshaler::marshaler @ 0x1800A1844 (_winrt--impl--make_marshaler_--_2_--marshaler--marshaler.c)
 * Callees:
 *     CoCreateFreeThreadedMarshaler_0 @ 0x18008AB02 (CoCreateFreeThreadedMarshaler_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1801ED780 (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  char v4; // di
  __int64 v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+28h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+68h] [rbp+30h] BYREF
  __int64 v10; // [rsp+70h] [rbp+38h] BYREF
  __int64 v11; // [rsp+78h] [rbp+40h] BYREF

  v7[1] = -2LL;
  LODWORD(v8) = 0;
  ppunkMarshal = 0LL;
  CoCreateFreeThreadedMarshaler_0(0LL, &ppunkMarshal);
  if ( ppunkMarshal )
  {
    v8 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN, void *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &winrt::impl::guid_storage<winrt::impl::IMarshal>::value,
      &v8);
    v2 = v8;
    v8 = 0LL;
    v3 = v7;
    v4 = 3;
    v5 = v11;
  }
  else
  {
    v5 = 0LL;
    v11 = 0LL;
    v3 = &v10;
    v4 = 12;
    v2 = 0LL;
  }
  *v3 = 0LL;
  *a1 = v2;
  if ( (v4 & 8) != 0 )
  {
    v4 &= ~8u;
    if ( v10 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(&v10);
  }
  if ( (v4 & 4) != 0 )
  {
    v4 &= ~4u;
    if ( v5 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(&v11);
  }
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v7[0] )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(v7);
  }
  if ( (v4 & 1) != 0 && v8 )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(&v8);
  if ( ppunkMarshal )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(&ppunkMarshal);
  return a1;
}
