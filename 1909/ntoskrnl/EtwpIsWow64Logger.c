/*
 * XREFs of EtwpIsWow64Logger @ 0x1406AEE98
 * Callers:
 *     EtwpFinalizeHeader @ 0x1406AD96C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1406AE298 (EtwpUpdateFileHeader.c)
 *     EtwpAddLogHeader @ 0x1406AE8E0 (EtwpAddLogHeader.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpIsWow64Logger(__int64 a1)
{
  return (*(_DWORD *)(a1 + 832) & 0x10) != 0 && (*(_DWORD *)(a1 + 12) & 0x2000000) == 0;
}
