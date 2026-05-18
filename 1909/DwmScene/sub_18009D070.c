/*
 * XREFs of sub_18009D070 @ 0x18009D070
 * Callers:
 *     sub_18009E6A0 @ 0x18009E6A0 (sub_18009E6A0.c)
 * Callees:
 *     sub_18009CE24 @ 0x18009CE24 (sub_18009CE24.c)
 */

unsigned __int64 __fastcall sub_18009D070(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7)
{
  __int64 v7; // rbx
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r10d
  int v14; // r8d
  unsigned __int64 result; // rax

  v7 = a1[1];
  if ( a1[2] == v7 )
    return sub_18009CE24(a1, (char *)v7, a2, a3, a4, a5, a6, a7);
  v10 = *a7;
  v11 = *a3;
  v12 = *a4;
  v13 = *a6;
  v14 = *a5;
  result = *a2;
  *(_QWORD *)v7 = *a2;
  *(_QWORD *)(v7 + 8) = v11;
  *(_DWORD *)(v7 + 16) = v12;
  *(_DWORD *)(v7 + 20) = v14;
  *(_DWORD *)(v7 + 24) = v13;
  *(_DWORD *)(v7 + 28) = v10;
  a1[1] += 32LL;
  return result;
}
