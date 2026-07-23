/*
 * XREFs of RtlAddIntegrityLabelToBoundaryDescriptor @ 0x1800E8920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlAddIntegrityLabelToBoundaryDescriptor(
        POBJECT_BOUNDARY_DESCRIPTOR *BoundaryDescriptor,
        PSID IntegrityLabel)
{
  return sub_18007E3F0((__int64)BoundaryDescriptor, (unsigned __int8 *)IntegrityLabel, 1);
}
