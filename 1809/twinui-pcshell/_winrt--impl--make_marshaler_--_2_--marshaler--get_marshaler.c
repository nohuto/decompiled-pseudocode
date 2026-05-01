/*
 * XREFs of _winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler @ 0x18039837C
 * Callers:
 *     _winrt::impl::make_marshaler_::_2_::marshaler::marshaler @ 0x180396ED4 (_winrt--impl--make_marshaler_--_2_--marshaler--marshaler.c)
 * Callees:
 *     CoCreateFreeThreadedMarshaler_0 @ 0x1800852DC (CoCreateFreeThreadedMarshaler_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIInspectable@@@winrt@@AEAAXXZ @ 0x1803850DC (-unconditional_release_ref@-$com_ptr@UIInspectable@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall winrt::impl::make_marshaler_::_2_::marshaler::get_marshaler(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 *v4; // rcx
  char v5; // si
  __int64 v6; // rbx
  __int64 v8[2]; // [rsp+20h] [rbp-10h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+60h] [rbp+30h] BYREF
  __int64 v10; // [rsp+68h] [rbp+38h] BYREF
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF
  __int64 v12; // [rsp+78h] [rbp+48h] BYREF

  v8[1] = -2LL;
  ppunkMarshal = 0LL;
  CoCreateFreeThreadedMarshaler_0(0LL, &ppunkMarshal);
  if ( ppunkMarshal )
  {
    v10 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN, void *, __int64 *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
      &winrt::impl::guid_storage<winrt::impl::IMarshal>::value,
      &v10);
    v2 = 0LL;
    v8[0] = 0LL;
    v3 = v10;
    v11 = v10;
    v4 = &v11;
    v5 = 3;
    v6 = v12;
  }
  else
  {
    v6 = 0LL;
    v12 = 0LL;
    v10 = 0LL;
    v4 = &v10;
    v5 = 12;
    v3 = 0LL;
    v2 = v8[0];
  }
  *v4 = 0LL;
  *a1 = v3;
  if ( (v5 & 8) != 0 )
  {
    v5 &= ~8u;
    if ( v10 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(&v10);
  }
  if ( (v5 & 4) != 0 )
  {
    v5 &= ~4u;
    if ( v6 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(&v12);
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( v11 )
      winrt::com_ptr<IInspectable>::unconditional_release_ref(&v11);
  }
  if ( (v5 & 1) != 0 && v2 )
    winrt::com_ptr<IInspectable>::unconditional_release_ref(v8);
  if ( ppunkMarshal )
    winrt::com_ptr<IInspectable>::unconditional_release_ref((__int64 *)&ppunkMarshal);
  return a1;
}
