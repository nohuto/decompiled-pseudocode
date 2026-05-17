/*
 * XREFs of RtlpFreeReadOnlyHeap @ 0x180104520
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180065EC0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 */

__int64 __fastcall RtlpFreeReadOnlyHeap(__int64 a1)
{
  void *ProcessHeap; // rcx

  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  return RtlFreeHeap((__int64)ProcessHeap, 0, a1);
}
