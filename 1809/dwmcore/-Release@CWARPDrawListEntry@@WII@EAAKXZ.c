/*
 * XREFs of ?Release@CWARPDrawListEntry@@WII@EAAKXZ @ 0x1800F0910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWARPDrawListEntry::Release(__int64 a1)
{
  return CHolographicInteropTaskQueue::Release((CHolographicInteropTaskQueue *)(a1 - 136));
}
