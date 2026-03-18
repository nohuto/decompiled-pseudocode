/*
 * XREFs of MmMapMemoryDumpMdl @ 0x1402C64B0
 * Callers:
 *     <none>
 * Callees:
 *     MmMapMemoryDumpMdlEx @ 0x14015F264 (MmMapMemoryDumpMdlEx.c)
 */

void __fastcall MmMapMemoryDumpMdl(__int64 a1, __int64 a2)
{
  MmMapMemoryDumpMdlEx(qword_140466270 << 25 >> 16, a2, a1, 0);
}
