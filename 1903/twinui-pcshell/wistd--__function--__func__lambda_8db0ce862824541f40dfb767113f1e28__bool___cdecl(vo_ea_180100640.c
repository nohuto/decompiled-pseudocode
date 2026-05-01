/*
 * XREFs of wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned___int64_void___unsigned___int64_unsigned_int)_::_scalar_deleting_destructor_ @ 0x180100640
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl_void___unsigned___int64_void___unsigned___int64_unsigned_int__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
