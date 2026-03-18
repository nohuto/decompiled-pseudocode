/*
 * XREFs of PsGetParentSilo @ 0x140886730
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x14068E570 (CmpGetRegistryNamespaceRootForSilo.c)
 *     VRegEnabledInJob @ 0x14080831C (VRegEnabledInJob.c)
 *     PspConvertSiloToServerSilo @ 0x140886E24 (PspConvertSiloToServerSilo.c)
 *     ObCreateSiloRootDirectory @ 0x140905F10 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x140906238 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402E955C (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetParentSilo(__int64 a1)
{
  if ( a1 )
    return PspGetJobSilo(*(_QWORD *)(a1 + 1072));
  else
    return 0LL;
}
