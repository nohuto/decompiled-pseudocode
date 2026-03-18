/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x1406C6F90
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140007708 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140046520 (FsRtlCheckOplockEx.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
