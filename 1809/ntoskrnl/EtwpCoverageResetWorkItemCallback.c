/*
 * XREFs of EtwpCoverageResetWorkItemCallback @ 0x1408B6F00
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageReset @ 0x1408B6A48 (EtwpCoverageReset.c)
 */

struct _KTHREAD *__fastcall EtwpCoverageResetWorkItemCallback(__int64 a1)
{
  *(_DWORD *)(EtwpCoverageNonPagedContext + 8) = 0;
  return EtwpCoverageReset(a1, 2);
}
