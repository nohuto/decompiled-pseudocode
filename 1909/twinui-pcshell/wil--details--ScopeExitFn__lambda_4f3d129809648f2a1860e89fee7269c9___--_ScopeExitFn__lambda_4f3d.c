/*
 * XREFs of wil::details::ScopeExitFn__lambda_4f3d129809648f2a1860e89fee7269c9___::_ScopeExitFn__lambda_4f3d129809648f2a1860e89fee7269c9___ @ 0x18009704C
 * Callers:
 *     _CBaseTrayFlyoutExperienceManager::OnPriorityBoostRequested_::_1_::dtor$0 @ 0x18009901E (_CBaseTrayFlyoutExperienceManager--OnPriorityBoostRequested_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_4f3d129809648f2a1860e89fee7269c9___::_ScopeExitFn__lambda_4f3d129809648f2a1860e89fee7269c9___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  }
  return result;
}
