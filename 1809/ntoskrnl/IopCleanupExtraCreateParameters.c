/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x14070F25C
 * Callers:
 *     NtDeleteFile @ 0x14070F110 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x14081C560 (IoQueryInformationByName.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x14060B7E4 (FsRtlpCleanupEcps.c)
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
