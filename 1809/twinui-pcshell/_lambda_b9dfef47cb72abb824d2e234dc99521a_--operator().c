/*
 * XREFs of _lambda_b9dfef47cb72abb824d2e234dc99521a_::operator() @ 0x1802B135C
 * Callers:
 *     _lambda_b9dfef47cb72abb824d2e234dc99521a_::_lambda_invoker_cdecl_ @ 0x1802B0250 (_lambda_b9dfef47cb72abb824d2e234dc99521a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_b9dfef47cb72abb824d2e234dc99521a_::operator()(__int64 a1, unsigned __int64 a2, __int64 **a3)
{
  __int64 *v4; // rcx
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 result; // rax

  v4 = *a3;
  v5 = (__int64 *)(*a3)[1];
  v6 = *a3;
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_8;
  do
  {
    if ( v5[4] >= a2 )
    {
      v6 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v6 == v4 || a2 < v6[4] )
LABEL_8:
    v6 = *a3;
  try
  {
    if ( v6 != v4 )
      (*(void (__fastcall **)(__int64 *, __int64))(*a3[2] + 104))(a3[2], v6[5]);
    result = 1LL;
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
