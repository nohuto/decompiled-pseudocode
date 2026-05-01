/*
 * XREFs of wil::details::lambda_call__lambda_f9d38391ebd372f434f22a0dcd333905___::_lambda_call__lambda_f9d38391ebd372f434f22a0dcd333905___ @ 0x18025E85C
 * Callers:
 *     _ViewGroup::AddView_::_1_::dtor$2 @ 0x18025EE99 (_ViewGroup--AddView_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_f9d38391ebd372f434f22a0dcd333905___::_lambda_call__lambda_f9d38391ebd372f434f22a0dcd333905___(
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
