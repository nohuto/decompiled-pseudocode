/*
 * XREFs of MiIdentifyPfnWrapper @ 0x140005420
 * Callers:
 *     MiLogAllocateWsleEvent @ 0x1402BF528 (MiLogAllocateWsleEvent.c)
 *     MiQueryLeafPte @ 0x1402D8A10 (MiQueryLeafPte.c)
 *     PfpPfnPrioRequest @ 0x1405CED50 (PfpPfnPrioRequest.c)
 *     MmIdentifyPhysicalMemory @ 0x14088A168 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x140892CEC (MmRelocatePfnList.c)
 * Callees:
 *     MiIdentifyPfn @ 0x1400054D0 (MiIdentifyPfn.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  MiIdentifyPfn(BugCheckParameter2);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v3);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
