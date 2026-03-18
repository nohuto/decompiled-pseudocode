/*
 * XREFs of MiIncludeSharedCommit @ 0x140071790
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x140070DEC (MiReleaseControlAreaCharges.c)
 *     MiRemoveSharedCommitNode @ 0x1406086F0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140608960 (MiInsertSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x14066FD8C (MiUpdateProcessSharedCommit.c)
 *     MiVadHasSharedCommit @ 0x14089B854 (MiVadHasSharedCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  _QWORD *i; // rax

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 )
    return 1LL;
  if ( (v1 & 0x400) == 0 && a1 != qword_140464828 && !*(_QWORD *)(a1 + 64) )
  {
    v2 = 0;
    for ( i = &unk_1404647C0; a1 != *i; i += 8 )
    {
      if ( ++v2 )
        return 1LL;
    }
  }
  return 0LL;
}
