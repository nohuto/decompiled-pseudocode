/*
 * XREFs of _PopInternalError @ 0x1402EDD54
 * Callers:
 *     PopSaveHiberContext @ 0x140599640 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140599A54 (PopCreateDumpMdl.c)
 *     PopWriteHiberPages @ 0x14059A908 (PopWriteHiberPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
