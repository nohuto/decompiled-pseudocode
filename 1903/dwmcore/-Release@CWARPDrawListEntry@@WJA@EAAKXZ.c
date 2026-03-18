/*
 * XREFs of ?Release@CWARPDrawListEntry@@WJA@EAAKXZ @ 0x1800ED450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWARPDrawListEntry::Release(__int64 a1)
{
  return CHolographicInteropTaskQueue::Release((CHolographicInteropTaskQueue *)(a1 - 144));
}
