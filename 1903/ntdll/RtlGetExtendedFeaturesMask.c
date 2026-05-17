/*
 * XREFs of RtlGetExtendedFeaturesMask @ 0x1800F21E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F2878 @ 0x1800F2878 (sub_1800F2878.c)
 */

unsigned __int64 __fastcall RtlGetExtendedFeaturesMask(__int64 a1)
{
  return *(_QWORD *)sub_1800F2878(a1) & 0xFFFFFFFFFFFFFFFCuLL;
}
