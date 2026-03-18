/*
 * XREFs of MiIncludeSharedCommit @ 0x140071A00
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14007105C (MiReleaseControlAreaCharges.c)
 *     MiRemoveSharedCommitNode @ 0x14060A200 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x14060A470 (MiInsertSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x1406CE5E8 (MiUpdateProcessSharedCommit.c)
 *     MiVadHasSharedCommit @ 0x14089B074 (MiVadHasSharedCommit.c)
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
  if ( (v1 & 0x400) == 0 && a1 != qword_140464528 && !*(_QWORD *)(a1 + 64) )
  {
    v2 = 0;
    for ( i = &unk_1404644C0; a1 != *i; i += 8 )
    {
      if ( ++v2 )
        return 1LL;
    }
  }
  return 0LL;
}
