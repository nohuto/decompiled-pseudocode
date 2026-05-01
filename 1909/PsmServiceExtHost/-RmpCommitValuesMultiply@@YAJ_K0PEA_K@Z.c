/*
 * XREFs of ?RmpCommitValuesMultiply@@YAJ_K0PEA_K@Z @ 0x1800626C8
 * Callers:
 *     ?RmpCommitThresholdsMultiplyByValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x1800625B4 (-RmpCommitThresholdsMultiplyByValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCommitValuesMultiply(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 == -1LL || a2 == -1LL )
  {
    result = 0LL;
  }
  else
  {
    v4 = a1 * a2;
    result = 0LL;
    if ( is_mul_ok(a1, a2) )
    {
      *a3 = v4;
      return result;
    }
    result = 3221225621LL;
  }
  *a3 = -1LL;
  return result;
}
