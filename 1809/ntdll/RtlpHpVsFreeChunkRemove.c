/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x180001008
 * Callers:
 *     RtlpHpVsChunkCoalesce @ 0x18001F778 (RtlpHpVsChunkCoalesce.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x180001074 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbRemoveNode @ 0x18001ECC0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode(a1 + 16, a3 + 2);
  v6 = RtlpHpVsChunkComputeCost(a3, a2, &v8, &v9);
  result = v8 - (unsigned int)(unsigned __int16)((unsigned __int16)a3 ^ RtlpHpHeapGlobals ^ *a3) + v6;
  *(_QWORD *)(a1 + 56) -= result;
  return result;
}
