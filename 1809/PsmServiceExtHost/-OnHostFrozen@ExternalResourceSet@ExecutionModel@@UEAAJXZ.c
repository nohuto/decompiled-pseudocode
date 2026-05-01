/*
 * XREFs of ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180062F70
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000654C (-CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180062F94 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::OnHostFrozen(ExecutionModel::ExternalResourceSet *this)
{
  ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(this);
  ExecutionModel::ExternalResourceSet::RunWatchdog(this);
  return 0LL;
}
