/*
 * XREFs of RtlULongLongMult @ 0x1400D08F4
 * Callers:
 *     SepCaptureTokenSecurityOperations @ 0x140128D8C (SepCaptureTokenSecurityOperations.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
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
