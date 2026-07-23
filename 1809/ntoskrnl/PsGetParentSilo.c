/*
 * XREFs of PsGetParentSilo @ 0x140887970
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x14068F710 (CmpGetRegistryNamespaceRootForSilo.c)
 *     VRegEnabledInJob @ 0x1408094FC (VRegEnabledInJob.c)
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x1409071B0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409074D8 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402E984C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1072));
  else
    return 0LL;
}
