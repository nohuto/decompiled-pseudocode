/*
 * XREFs of _PopInternalError @ 0x1402D3928
 * Callers:
 *     PopWriteHiberPages @ 0x14056AC48 (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x14056B410 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
