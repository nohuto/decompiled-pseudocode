/*
 * XREFs of MmMapMemoryDumpMdl @ 0x1402AE860
 * Callers:
 *     <none>
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x140144520 (MmMapMemoryDumpMdlEx.c)
 */

void __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  MmMapMemoryDumpMdlEx(qword_14043B890 << 25 >> 16, a2, a1, 0);
}
