/*
 * XREFs of ?Release@CWARPDrawListEntry@@WJA@EAAKXZ @ 0x1800F1110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWARPDrawListEntry::Release(__int64 a1)
{
  return CHolographicInteropTaskQueue::Release((CDirtyRegion *)(a1 - 144));
}
