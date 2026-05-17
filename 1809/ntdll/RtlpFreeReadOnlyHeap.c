/*
 * XREFs of RtlpFreeReadOnlyHeap @ 0x180106E40
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x18006F8F0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 */

__int64 __fastcall RtlpFreeReadOnlyHeap(unsigned __int64 a1)
{
  void *ProcessHeap; // rcx

  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  return RtlFreeHeap((__int64)ProcessHeap, 0, a1);
}
