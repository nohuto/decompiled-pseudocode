/*
 * XREFs of sub_18010772C @ 0x18010772C
 * Callers:
 *     sub_18010772C @ 0x18010772C (sub_18010772C.c)
 *     sub_180107B54 @ 0x180107B54 (sub_180107B54.c)
 * Callees:
 *     sub_1801068B8 @ 0x1801068B8 (sub_1801068B8.c)
 *     sub_180106AC0 @ 0x180106AC0 (sub_180106AC0.c)
 *     sub_18010730C @ 0x18010730C (sub_18010730C.c)
 *     sub_18010772C @ 0x18010772C (sub_18010772C.c)
 */

unsigned __int8 __fastcall sub_18010772C(char *a1, char *a2, __int64 a3, void *a4, __int64 a5, char a6)
{
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx

  if ( a3 <= 32 )
    return (unsigned __int8)sub_18010730C(a1, a2);
  v10 = a3 >> 1;
  v11 = a3 - (a3 >> 1);
  v12 = (__int64)&a1[16 * v11];
  if ( v11 > a5 )
  {
    sub_18010772C((_DWORD)a1, v12, v11, (_DWORD)a4, a5, a6);
    sub_18010772C((_DWORD)a1 + 16 * v11, (_DWORD)a2, v10, (_DWORD)a4, a5, a6);
  }
  else
  {
    sub_180106AC0(a1, v12, v11, a4);
    sub_180106AC0(&a1[16 * v11], (__int64)a2, v10, a4);
  }
  return sub_1801068B8((float *)a1, (float *)&a1[16 * v11], (float *)a2, v11, v10, a4, a5, a6);
}
