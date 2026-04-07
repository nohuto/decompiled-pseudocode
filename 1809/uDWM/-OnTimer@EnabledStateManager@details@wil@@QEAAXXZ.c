/*
 * XREFs of ?OnTimer@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800340EC
 * Callers:
 *     _lambda_694cf3250e255c878c64dabf1ae2e40c_::_lambda_invoker_cdecl_ @ 0x18004D610 (_lambda_694cf3250e255c878c64dabf1ae2e40c_--_lambda_invoker_cdecl_.c)
 *     _lambda_d920a0a3d4a387d1d77e21b11a8b43bc_::_lambda_invoker_cdecl_ @ 0x18004D630 (_lambda_d920a0a3d4a387d1d77e21b11a8b43bc_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180034110 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 */

void __fastcall wil::details::EnabledStateManager::OnTimer(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)this);
    LOBYTE(this[3].Ptr) = 0;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
