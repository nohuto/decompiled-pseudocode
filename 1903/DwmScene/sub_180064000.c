/*
 * XREFs of sub_180064000 @ 0x180064000
 * Callers:
 *     sub_18006445C @ 0x18006445C (sub_18006445C.c)
 * Callees:
 *     sub_1800D0C60 @ 0x1800D0C60 (sub_1800D0C60.c)
 *     sub_1800D0C78 @ 0x1800D0C78 (sub_1800D0C78.c)
 */

__int64 __fastcall sub_180064000(unsigned int *a1, unsigned int *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax

  v3 = -*((_QWORD *)a1 + 1);
  v5 = sub_1800D0C78(a1);
  sub_1800D0C60(v5, *a1, 2LL, v3);
  v6 = *a2;
  *a1 = *a2;
  v7 = *((_QWORD *)a2 + 1);
  *((_QWORD *)a1 + 1) = v7;
  v9 = sub_1800D0C78(v8);
  return sub_1800D0C60(v9, v6, 2LL, v7);
}
