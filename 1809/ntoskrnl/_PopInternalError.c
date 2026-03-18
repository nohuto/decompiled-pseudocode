/*
 * XREFs of _PopInternalError @ 0x1402D3638
 * Callers:
 *     PopWriteHiberPages @ 0x140569C48 (PopWriteHiberPages.c)
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x14056A410 (PopCreateDumpMdl.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
