/*
 * XREFs of PsGetParentSilo @ 0x1408C4AD0
 * Callers:
 *     CmpParseKey @ 0x1405F8510 (CmpParseKey.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 *     VRegEnabledInJob @ 0x140841BBC (VRegEnabledInJob.c)
 *     PspConvertSiloToServerSilo @ 0x1408C51D4 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140944520 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x14094485C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x140306C3C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1072));
  else
    return 0LL;
}
