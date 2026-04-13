/*
 * XREFs of wistd::__function::__func__lambda_cc048563a57b57a885d4bf4143ff221c__long___cdecl(wchar_t___unsigned___int64_unsigned___int64__)_::_scalar_deleting_destructor_ @ 0x180017570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wistd::__function::__func__lambda_cc048563a57b57a885d4bf4143ff221c__long___cdecl_wchar_t___unsigned___int64_unsigned___int64____::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<long (wchar_t *,unsigned __int64,unsigned __int64 *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
