/*
 * XREFs of EtwpCoverageResetWorkItemCallback @ 0x1408B6EE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageReset @ 0x1408B6A28 (EtwpCoverageReset.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageResetWorkItemCallback(__int64 a1)
{
  *(_DWORD *)(EtwpCoverageNonPagedContext + 8) = 0;
  return EtwpCoverageReset(a1, 2);
}
