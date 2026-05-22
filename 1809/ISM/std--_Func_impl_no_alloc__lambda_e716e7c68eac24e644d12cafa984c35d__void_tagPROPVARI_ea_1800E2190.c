/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e716e7c68eac24e644d12cafa984c35d__void_tagPROPVARIANT_const_&___ptr64_::_Move @ 0x1800E2190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_e716e7c68eac24e644d12cafa984c35d__void_tagPROPVARIANT_const_____ptr64_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx

  *a2 = off_180141C08;
  a2[1] = a1[1];
  v2 = a1[2];
  v3 = a1 + 3;
  a2[2] = v2;
  a2[3] = 0LL;
  if ( a2 + 3 != v3 )
  {
    a2[3] = *v3;
    *v3 = 0LL;
  }
  return a2;
}
