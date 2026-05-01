/*
 * XREFs of wistd::__function::__func__lambda_025d670431b0b6098eb2d1c47c9e9598__void___cdecl(unsigned_char_const_&)_::_scalar_deleting_destructor_ @ 0x18022D1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_025d670431b0b6098eb2d1c47c9e9598__void___cdecl_unsigned_char_const____::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  std::_Ref_count_base *v4; // rcx

  v4 = (std::_Ref_count_base *)a1[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *a1 = &wistd::__function::__base<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
