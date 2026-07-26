/*
 * XREFs of ndisGetNodeIdForProcessor @ 0x1C00CEC84
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C00CEA18 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetNodeIdForProcessor(ULONG ProcIndex)
{
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-58h] BYREF
  ULONG Length; // [rsp+80h] [rbp+8h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp+10h] BYREF

  if ( ProcIndex >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 0LL;
  if ( KeGetProcessorNumberFromIndex(ProcIndex, &ProcNumber) < 0 )
    return 0LL;
  Length = 80;
  if ( KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) < 0 )
    return 0LL;
  else
    return Information.NumaNode.NodeNumber;
}
