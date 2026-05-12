/*
 * XREFs of RtlULongAdd @ 0x1C001D248
 * Callers:
 *     RaUnitStreamsIoctl @ 0x1C00216B4 (RaUnitStreamsIoctl.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0045420 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C00455A4 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     PortPassThroughExBasicValidation @ 0x1C00528D4 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C00529EC (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughValidateNormalizedRequest @ 0x1C006F9E0 (PortPassThroughValidateNormalizedRequest.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C0075DB4 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExValidateNormalizedRequest @ 0x1C0076170 (PortPassThroughExValidateNormalizedRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  ULONG v3; // eax
  ULONG v4; // edx
  NTSTATUS result; // eax

  v3 = ulAugend + ulAddend;
  v4 = -1;
  if ( v3 >= ulAugend )
    v4 = v3;
  result = v3 < ulAugend ? 0xC0000095 : 0;
  *pulResult = v4;
  return result;
}
