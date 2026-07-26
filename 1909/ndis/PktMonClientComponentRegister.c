/*
 * XREFs of PktMonClientComponentRegister @ 0x1C0023D2C
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0102588 (ndisPktMonOpenRegister.c)
 *     ndisPktMonMiniportRegister @ 0x1C0106F3C (ndisPktMonMiniportRegister.c)
 * Callees:
 *     PktMonClientComponentRegisterEx @ 0x1C0040FE4 (PktMonClientComponentRegisterEx.c)
 *     MediaTypeToPacketType @ 0x1C00C95C8 (MediaTypeToPacketType.c)
 */

__int64 __fastcall PktMonClientComponentRegister(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // eax
  int v6; // r8d
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d

  v5 = MediaTypeToPacketType(a5);
  return PktMonClientComponentRegisterEx(v9, v8, v6, v7, v5);
}
