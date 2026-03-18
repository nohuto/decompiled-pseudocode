/*
 * XREFs of PsGetParentSilo @ 0x1408C43A0
 * Callers:
 *     CmpParseKey @ 0x1405F9560 (CmpParseKey.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x140613C40 (NtQueryInformationJobObject.c)
 *     VRegEnabledInJob @ 0x14084121C (VRegEnabledInJob.c)
 *     PspConvertSiloToServerSilo @ 0x1408C4AA4 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140943F90 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409442CC (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x1403066EC (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1072));
  else
    return 0LL;
}
