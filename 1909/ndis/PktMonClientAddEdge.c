/*
 * XREFs of PktMonClientAddEdge @ 0x1C00C976C
 * Callers:
 *     ndisPktMonFilterRegister @ 0x1C010242C (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C0102588 (ndisPktMonOpenRegister.c)
 *     ndisPktMonMiniportRegister @ 0x1C0106F3C (ndisPktMonMiniportRegister.c)
 * Callees:
 *     PktMonClientAddEdgeEx @ 0x1C0040F14 (PktMonClientAddEdgeEx.c)
 *     MediaTypeToPacketType @ 0x1C00C95C8 (MediaTypeToPacketType.c)
 */

__int64 __fastcall PktMonClientAddEdge(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  int v6; // eax
  __int64 v7; // r9
  _QWORD *v8; // r10

  v6 = MediaTypeToPacketType(a5);
  return PktMonClientAddEdgeEx(v8, v7, (__int64)a6, v7, v6, a6);
}
