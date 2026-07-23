/*
 * XREFs of RtlAddSIDToBoundaryDescriptor @ 0x18007E3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddSIDToBoundaryDescriptor(POBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptor, PSID RequiredSid)
{
  return sub_18007E3F0(BoundaryDescriptor, RequiredSid, 0LL);
}
