/*
 * XREFs of sub_18010764C @ 0x18010764C
 * Callers:
 *     sub_18010764C @ 0x18010764C (sub_18010764C.c)
 *     sub_180107A64 @ 0x180107A64 (sub_180107A64.c)
 * Callees:
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 *     sub_1801069D8 @ 0x1801069D8 (sub_1801069D8.c)
 *     sub_180107270 @ 0x180107270 (sub_180107270.c)
 *     sub_18010764C @ 0x18010764C (sub_18010764C.c)
 */

unsigned __int8 __fastcall sub_18010764C(char *a1, char *a2, __int64 a3, void *a4, __int64 a5, char a6)
{
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx

  if ( a3 <= 32 )
    return (unsigned __int8)sub_180107270(a1, a2);
  v10 = a3 >> 1;
  v11 = a3 - (a3 >> 1);
  v12 = (__int64)&a1[16 * v11];
  if ( v11 > a5 )
  {
    sub_18010764C((_DWORD)a1, v12, v11, (_DWORD)a4, a5, a6);
    sub_18010764C((_DWORD)a1 + 16 * v11, (_DWORD)a2, v10, (_DWORD)a4, a5, a6);
  }
  else
  {
    sub_1801069D8(a1, v12, v11, a4);
    sub_1801069D8(&a1[16 * v11], (__int64)a2, v10, a4);
  }
  return sub_180106798((float *)a1, (float *)&a1[16 * v11], (float *)a2, v11, v10, a4, a5, a6);
}
