/*
 * XREFs of MiSectionClose @ 0x1405F0B80
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x140075E70 (MiSectionControlArea.c)
 *     MiRemoveSharedCommitNode @ 0x1405F0650 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MiSectionClose(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r9

  v2 = MiSectionControlArea(a2);
  MiRemoveSharedCommitNode(v2, v3, 0);
}
