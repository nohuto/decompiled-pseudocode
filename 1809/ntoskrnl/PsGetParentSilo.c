/*
 * XREFs of PsGetParentSilo @ 0x140886710
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x14068E550 (CmpGetRegistryNamespaceRootForSilo.c)
 *     VRegEnabledInJob @ 0x1408082FC (VRegEnabledInJob.c)
 *     PspConvertSiloToServerSilo @ 0x140886E04 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140905EF0 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140906218 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402E965C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1072));
  else
    return 0LL;
}
