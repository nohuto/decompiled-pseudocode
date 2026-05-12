/*
 * XREFs of PortPassThroughExGetBasicStructureSize @ 0x1C00529EC
 * Callers:
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0052A14 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     PortPassThroughExNormalize @ 0x1C0052BF4 (PortPassThroughExNormalize.c)
 *     PortPassThroughExSendAsync @ 0x1C006F178 (PortPassThroughExSendAsync.c)
 * Callees:
 *     RtlULongAdd @ 0x1C001D248 (RtlULongAdd.c)
 */

NTSTATUS __fastcall PortPassThroughExGetBasicStructureSize(__int64 a1, ULONG *a2)
{
  return RtlULongAdd(0x40u, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 1, a2);
}
