/*
 * XREFs of wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned___int64_void___unsigned___int64_unsigned_int)_::_scalar_deleting_destructor_ @ 0x180154EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl_void___unsigned___int64_void___unsigned___int64_unsigned_int__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
