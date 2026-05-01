/*
 * XREFs of wil::details::lambda_call__lambda_80d53a17387df673864a338822552b6d___::_lambda_call__lambda_80d53a17387df673864a338822552b6d___ @ 0x180205EE8
 * Callers:
 *     _ViewGroup::AddView_::_1_::dtor$2 @ 0x1802065C7 (_ViewGroup--AddView_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_80d53a17387df673864a338822552b6d___::_lambda_call__lambda_80d53a17387df673864a338822552b6d___(
        _BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1[16] )
  {
    a1[16] = 0;
    if ( !*(_BYTE *)(*(_QWORD *)a1 + 220LL) )
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 88LL) + 40LL))(
               *(_QWORD *)(*(_QWORD *)a1 + 88LL),
               **((_QWORD **)a1 + 1),
               *(_QWORD *)a1 + 112LL);
  }
  return result;
}
