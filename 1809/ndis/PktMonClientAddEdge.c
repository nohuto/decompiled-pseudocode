/*
 * XREFs of PktMonClientAddEdge @ 0x1C0083E64
 * Callers:
 *     ndisPktMonMiniportRegister @ 0x1C00BDA64 (ndisPktMonMiniportRegister.c)
 *     ndisPktMonFilterRegister @ 0x1C00C36AC (ndisPktMonFilterRegister.c)
 *     ndisPktMonOpenRegister @ 0x1C00C37D0 (ndisPktMonOpenRegister.c)
 * Callees:
 *     PktMonClientAddEdgeEx @ 0x1C0026818 (PktMonClientAddEdgeEx.c)
 *     MediaTypeToPacketType @ 0x1C0083C84 (MediaTypeToPacketType.c)
 */

__int64 __fastcall PktMonClientAddEdge(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // r10

  v6 = MediaTypeToPacketType(a5);
  return PktMonClientAddEdgeEx(v8, v7, (__int64)a6, v7, v6, a6);
}
