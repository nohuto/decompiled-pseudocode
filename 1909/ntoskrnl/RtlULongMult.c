/*
 * XREFs of RtlULongMult @ 0x1401BE860
 * Callers:
 *     CmpCheckKey @ 0x140664430 (CmpCheckKey.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongMult(ULONG ulMultiplicand, ULONG ulMultiplier, ULONG *pulResult)
{
  unsigned __int64 v3; // r9
  ULONG v4; // ecx

  v3 = ulMultiplier * (unsigned __int64)ulMultiplicand;
  v4 = -1;
  if ( v3 <= 0xFFFFFFFF )
    v4 = v3;
  *pulResult = v4;
  return v3 > 0xFFFFFFFF ? 0xC0000095 : 0;
}
