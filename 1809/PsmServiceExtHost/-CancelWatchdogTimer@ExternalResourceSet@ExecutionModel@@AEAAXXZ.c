/*
 * XREFs of ?CancelWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18000654C
 * Callers:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800064BC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ @ 0x180062F70 (-OnHostFrozen@ExternalResourceSet@ExecutionModel@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ExternalResourceSet::CancelWatchdogTimer(ExecutionModel::ExternalResourceSet *this)
{
  __int64 v2; // rax

  if ( (unsigned int)TpSetTimerEx(*((_QWORD *)this + 183), 0LL, 0LL, 0LL) )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 368) &= ~8u;
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(v2 + 16))(this);
  }
}
