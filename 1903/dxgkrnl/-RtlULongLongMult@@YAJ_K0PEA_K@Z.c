/*
 * XREFs of ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1C00427D4
 * Callers:
 *     ?GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z @ 0x1C0243CE0 (-GetElapsed@TimeInterval@DripsBlockerTrackingHelper@@SA_K_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1 * a2;
  result = 0LL;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = v4;
  }
  else
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  return result;
}
