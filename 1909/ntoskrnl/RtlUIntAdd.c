/*
 * XREFs of RtlUIntAdd @ 0x140003F38
 * Callers:
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     EtwpGetTraceGuidInfo @ 0x1406EE26C (EtwpGetTraceGuidInfo.c)
 *     EtwpGetTraceGroupInfo @ 0x1408F2344 (EtwpGetTraceGroupInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // eax
  UINT v4; // edx
  NTSTATUS result; // eax

  v3 = uAugend + uAddend;
  v4 = -1;
  if ( v3 >= uAugend )
    v4 = v3;
  result = v3 < uAugend ? 0xC0000095 : 0;
  *puResult = v4;
  return result;
}
