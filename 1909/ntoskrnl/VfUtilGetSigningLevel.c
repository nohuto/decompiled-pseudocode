/*
 * XREFs of VfUtilGetSigningLevel @ 0x1403270A0
 * Callers:
 *     <none>
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140973FBC (VfTargetDriversGetVerifierData.c)
 */

char VfUtilGetSigningLevel()
{
  __int64 VerifierData; // rax

  VerifierData = VfTargetDriversGetVerifierData();
  if ( VerifierData )
    LOBYTE(VerifierData) = *(_BYTE *)(VerifierData + 48);
  return VerifierData;
}
