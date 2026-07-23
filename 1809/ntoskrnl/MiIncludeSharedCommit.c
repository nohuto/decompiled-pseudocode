/*
 * XREFs of MiIncludeSharedCommit @ 0x140076770
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x140079C58 (MiReleaseControlAreaCharges.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x14061EF18 (MiUpdateProcessSharedCommit.c)
 *     MiVadHasSharedCommit @ 0x14085FBF4 (MiVadHasSharedCommit.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 56);
  return (v1 & 0x20) != 0
      || (v1 & 0x400) == 0 && a1 != qword_140439ED0 && a1 != qword_140439EC0 && !*(_QWORD *)(a1 + 64);
}
