/*
 * XREFs of sub_180068574 @ 0x180068574
 * Callers:
 *     sub_180039500 @ 0x180039500 (sub_180039500.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     sub_1800685E0 @ 0x1800685E0 (sub_1800685E0.c)
 */

__int64 __fastcall sub_180068574(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+40h] [rbp+18h] BYREF

  RtlRbRemoveNode(a1 + 1, (PRTL_BALANCED_NODE)(a3 + 8));
  v6 = sub_1800685E0(a3, a2, &v8, &v9);
  result = v8 - (unsigned int)(unsigned __int16)(a3 ^ qword_180163540 ^ *(_DWORD *)a3) + v6;
  a1[3].Min = (PRTL_BALANCED_NODE)((char *)a1[3].Min - result);
  return result;
}
