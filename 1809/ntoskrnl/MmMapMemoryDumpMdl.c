/*
 * XREFs of MmMapMemoryDumpMdl @ 0x1402AE670
 * Callers:
 *     <none>
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x140144420 (MmMapMemoryDumpMdlEx.c)
 */

void __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  MmMapMemoryDumpMdlEx(qword_14043A7D0 << 25 >> 16, a2, a1, 0);
}
