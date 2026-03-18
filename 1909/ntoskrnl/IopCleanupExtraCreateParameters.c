/*
 * XREFs of IopCleanupExtraCreateParameters @ 0x1406F08C0
 * Callers:
 *     NtDeleteFile @ 0x1406F0760 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x140855C60 (IoQueryInformationByName.c)
 * Callees:
 *     FsRtlpCleanupEcps @ 0x1406189CC (FsRtlpCleanupEcps.c)
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
