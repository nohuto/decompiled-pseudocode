/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1407104DC
 * Callers:
 *     NtDeleteFile @ 0x140710390 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x14081D740 (IoQueryInformationByName.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x14060C7E4 (FsRtlpCleanupEcps.c)
 */

void __fastcall IopCleanupExtraCreateParameters(__int64 a1)
{
  struct _ECP_LIST *v2; // rcx

  v2 = *(struct _ECP_LIST **)(a1 + 168);
  if ( v2 )
  {
    if ( FsRtlpCleanupEcps(v2) )
      *(_QWORD *)(a1 + 168) = 0LL;
  }
}
