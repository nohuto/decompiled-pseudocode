/*
 * XREFs of wil::details::ScopeExitFn__lambda_5da245b49a191d162f2553426e88ba5e___::_ScopeExitFn__lambda_5da245b49a191d162f2553426e88ba5e___ @ 0x180331D8C
 * Callers:
 *     __lambda_46851bff5b4673daf3d019eee80c73b2_::operator()_::_1_::dtor$1 @ 0x1800AE38F (__lambda_46851bff5b4673daf3d019eee80c73b2_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_5da245b49a191d162f2553426e88ba5e___::_ScopeExitFn__lambda_5da245b49a191d162f2553426e88ba5e___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 128LL) + 32LL))(
             *(_QWORD *)(*(_QWORD *)a1 + 128LL),
             **((_QWORD **)a1 + 1));
  }
  return result;
}
