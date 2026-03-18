/*
 * XREFs of EtwpIsWow64Logger @ 0x1406B97A8
 * Callers:
 *     EtwpFinalizeHeader @ 0x1406B827C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406B8B08 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406B91F0 (EtwpAddLogHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 832) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
