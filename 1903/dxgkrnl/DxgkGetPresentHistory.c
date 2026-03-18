/*
 * XREFs of DxgkGetPresentHistory @ 0x1C025BEE0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetPresentHistoryInternal @ 0x1C00FEDD0 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall DxgkGetPresentHistory(ULONG64 a1, __int64 a2, const GUID *a3)
{
  return DxgkGetPresentHistoryInternal(a1, 1, a3);
}
