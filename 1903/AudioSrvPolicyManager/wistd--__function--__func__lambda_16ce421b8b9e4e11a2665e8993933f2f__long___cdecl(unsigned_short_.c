/*
 * XREFs of wistd::__function::__func__lambda_16ce421b8b9e4e11a2665e8993933f2f__long___cdecl(unsigned_short___unsigned___int64_unsigned___int64__)_::_scalar_deleting_destructor_ @ 0x180033370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800016DC (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_16ce421b8b9e4e11a2665e8993933f2f__long___cdecl_unsigned_short___unsigned___int64_unsigned___int64____::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
