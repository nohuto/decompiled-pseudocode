/*
 * XREFs of DxgkGetPresentHistory @ 0x1C025C570
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetPresentHistoryInternal @ 0x1C0103F20 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall DxgkGetPresentHistory(ULONG64 a1, __int64 a2, const GUID *a3)
{
  return DxgkGetPresentHistoryInternal(a1, 1, a3);
}
