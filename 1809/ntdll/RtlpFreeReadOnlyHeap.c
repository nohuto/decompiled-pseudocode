/*
 * XREFs of RtlpFreeReadOnlyHeap @ 0x180106E40
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x18006F8F0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
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
