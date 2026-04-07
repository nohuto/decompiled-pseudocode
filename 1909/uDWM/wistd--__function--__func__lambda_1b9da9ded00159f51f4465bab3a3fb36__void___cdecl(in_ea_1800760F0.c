/*
 * XREFs of wistd::__function::__func__lambda_1b9da9ded00159f51f4465bab3a3fb36__void___cdecl(int_const_&)_::_scalar_deleting_destructor_ @ 0x1800760F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_1b9da9ded00159f51f4465bab3a3fb36__void___cdecl_int_const____::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &WPF::HeapBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, _QWORD *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, a1);
  return a1;
}
