/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800F21E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F2878 @ 0x1800F2878 (sub_1800F2878.c)
 */

ULONG64 __cdecl RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx)
{
  return *(_QWORD *)sub_1800F2878(ContextEx) & 0xFFFFFFFFFFFFFFFCuLL;
}
