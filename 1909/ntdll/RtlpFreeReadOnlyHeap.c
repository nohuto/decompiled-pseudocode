/*
 * XREFs of RtlpFreeReadOnlyHeap @ 0x180104520
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180065EC0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 */

LOGICAL __fastcall RtlpFreeReadOnlyHeap(void *a1)
{
  int v2; // eax
  PVOID ProcessHeap; // rcx

  LOBYTE(v2) = LdrControlFlowGuardEnforced();
  if ( v2 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  return RtlFreeHeap(ProcessHeap, 0, a1);
}
