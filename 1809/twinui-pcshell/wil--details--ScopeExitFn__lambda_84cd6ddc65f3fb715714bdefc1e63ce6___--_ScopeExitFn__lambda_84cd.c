/*
 * XREFs of wil::details::ScopeExitFn__lambda_84cd6ddc65f3fb715714bdefc1e63ce6___::_ScopeExitFn__lambda_84cd6ddc65f3fb715714bdefc1e63ce6___ @ 0x1802115B4
 * Callers:
 *     __lambda_2042965200248d0a427160a096d62bcd_::operator()_::_1_::dtor$0 @ 0x180212454 (__lambda_2042965200248d0a427160a096d62bcd_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_84cd6ddc65f3fb715714bdefc1e63ce6___::_ScopeExitFn__lambda_84cd6ddc65f3fb715714bdefc1e63ce6___(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 368LL) + 8LL * **(_QWORD **)(a1 + 8));
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v1 + 872LL))(v1, 0LL);
  }
  return result;
}
