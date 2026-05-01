/*
 * XREFs of wil::details::lambda_call__lambda_ec226e2b10177a1c830e03558f6e8bf6___::_lambda_call__lambda_ec226e2b10177a1c830e03558f6e8bf6___ @ 0x180205F88
 * Callers:
 *     _ViewGroup::AddView_::_1_::dtor$3 @ 0x1802065D3 (_ViewGroup--AddView_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_ec226e2b10177a1c830e03558f6e8bf6___::_lambda_call__lambda_ec226e2b10177a1c830e03558f6e8bf6___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[24] )
  {
    a1[24] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 80LL) + 40LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 80LL),
             **((_QWORD **)a1 + 1),
             **((unsigned int **)a1 + 2));
  }
  return result;
}
