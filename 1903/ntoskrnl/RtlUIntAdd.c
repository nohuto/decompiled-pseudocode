/*
 * XREFs of RtlUIntAdd @ 0x140003EA8
 * Callers:
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
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
