/*
 * XREFs of MiIdentifyPfnWrapper @ 0x1400A7E10
 * Callers:
 *     MiLogAllocateWsleEvent @ 0x1402A7BB4 (MiLogAllocateWsleEvent.c)
 *     MiQueryLeafPte @ 0x1402BEF70 (MiQueryLeafPte.c)
 *     PfpPfnPrioRequest @ 0x14062A220 (PfpPfnPrioRequest.c)
 *     MmIdentifyPhysicalMemory @ 0x14084E2F4 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x14085F328 (MmRelocatePfnList.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     MiIdentifyPfn @ 0x1400A7EC0 (MiIdentifyPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v7, a2, a3);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  MiIdentifyPfn(BugCheckParameter2);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
