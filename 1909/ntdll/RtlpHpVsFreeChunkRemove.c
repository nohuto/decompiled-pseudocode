/*
 * XREFs of RtlpHpVsFreeChunkRemove @ 0x1800687C4
 * Callers:
 *     RtlpHpVsChunkCoalesce @ 0x180039500 (RtlpHpVsChunkCoalesce.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     RtlpHpVsChunkComputeCost @ 0x180068830 (RtlpHpVsChunkComputeCost.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkRemove(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode((unsigned __int64 *)(a1 + 16), (unsigned __int64)(a3 + 2));
  v6 = RtlpHpVsChunkComputeCost(a3, a2, &v8, &v9);
  result = v8 - (unsigned int)(unsigned __int16)((unsigned __int16)a3 ^ RtlpHpHeapGlobals ^ *a3) + v6;
  *(_QWORD *)(a1 + 56) -= result;
  return result;
}
