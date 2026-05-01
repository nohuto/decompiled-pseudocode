/*
 * XREFs of wistd::__function::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl(unsigned_int_unsigned___int64___int64)_::_scalar_deleting_destructor_ @ 0x180092CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall wistd::__function::__func__lambda_66f8cb2e4a745a42959e69ed39c49775__long___cdecl_unsigned_int_unsigned___int64___int64__::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 1);
  *a1 = (__int64)&wistd::__function::__base<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
