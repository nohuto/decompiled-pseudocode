/*
 * XREFs of MmMapMemoryDumpMdl @ 0x1402C6210
 * Callers:
 *     <none>
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x14015F904 (MmMapMemoryDumpMdlEx.c)
 */

void __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  MmMapMemoryDumpMdlEx(qword_140465F70 << 25 >> 16, a2, a1, 0);
}
