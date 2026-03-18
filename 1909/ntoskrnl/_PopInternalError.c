/*
 * XREFs of _PopInternalError @ 0x1402EDAB4
 * Callers:
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140599A34 (PopCreateDumpMdl.c)
 *     PopWriteHiberPages @ 0x14059A8E8 (PopWriteHiberPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn PopInternalError(ULONG_PTR BugCheckParameter2)
{
  KeBugCheckEx(0xA0u, 2uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
}
