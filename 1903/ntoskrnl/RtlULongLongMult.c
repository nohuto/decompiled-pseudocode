/*
 * XREFs of RtlULongLongMult @ 0x1400935D4
 * Callers:
 *     SepCaptureTokenSecurityOperations @ 0x14012836C (SepCaptureTokenSecurityOperations.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  ULONGLONG v4; // rcx
  NTSTATUS result; // eax

  v4 = ullMultiplicand * ullMultiplier;
  result = 0;
  if ( is_mul_ok(ullMultiplicand, ullMultiplier) )
  {
    *pullResult = v4;
  }
  else
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  return result;
}
