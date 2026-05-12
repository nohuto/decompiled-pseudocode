/*
 * XREFs of StorpGetLogicalProcessorRelationship @ 0x1C003D24C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E990 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1C001E624 (RaidNtStatusToStorStatus.c)
 */

__int64 __fastcall StorpGetLogicalProcessorRelationship(
        __int64 a1,
        struct _PROCESSOR_NUMBER *a2,
        LOGICAL_PROCESSOR_RELATIONSHIP a3,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *a4,
        ULONG *Length)
{
  NTSTATUS LogicalProcessorRelationship; // eax

  LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(a2, a3, a4, Length);
  if ( LogicalProcessorRelationship == -1073741820 )
    return 3238002692LL;
  if ( LogicalProcessorRelationship == -1073741811 )
    return 3238002694LL;
  return RaidNtStatusToStorStatus(LogicalProcessorRelationship);
}
