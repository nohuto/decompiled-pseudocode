/*
 * XREFs of FsRtlAcknowledgeEcp @ 0x1406C1FE0
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x140018B74 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x1400B7C60 (FsRtlCheckOplockEx.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlAcknowledgeEcp(PVOID EcpContext)
{
  *((_DWORD *)EcpContext - 6) |= 8u;
}
