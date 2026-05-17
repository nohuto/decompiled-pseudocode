/*
 * XREFs of sub_180068574 @ 0x180068574
 * Callers:
 *     sub_180039500 @ 0x180039500 (sub_180039500.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     sub_1800685E0 @ 0x1800685E0 (sub_1800685E0.c)
 */

__int64 __fastcall sub_180068574(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode((unsigned __int64 *)(a1 + 16), (unsigned __int64)(a3 + 2));
  v6 = sub_1800685E0(a3, a2, &v8, &v9);
  result = v8 - (unsigned int)(unsigned __int16)((unsigned __int16)a3 ^ qword_180163540 ^ *a3) + v6;
  *(_QWORD *)(a1 + 56) -= result;
  return result;
}
