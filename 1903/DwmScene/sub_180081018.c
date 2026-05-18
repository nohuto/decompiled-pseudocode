/*
 * XREFs of sub_180081018 @ 0x180081018
 * Callers:
 *     sub_180081018 @ 0x180081018 (sub_180081018.c)
 *     sub_1800812E0 @ 0x1800812E0 (sub_1800812E0.c)
 * Callees:
 *     sub_180080104 @ 0x180080104 (sub_180080104.c)
 *     sub_180080260 @ 0x180080260 (sub_180080260.c)
 *     sub_180080A84 @ 0x180080A84 (sub_180080A84.c)
 *     sub_180081018 @ 0x180081018 (sub_180081018.c)
 */

void __fastcall sub_180081018(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__int64, __int64))
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = a3 >> 1;
    v10 = a3 - (a3 >> 1);
    v11 = (__int64)&a1[2 * v10];
    if ( v10 > a5 )
    {
      sub_180081018((_DWORD)a1, v11, v10, a4, a5, (__int64)a6);
      sub_180081018((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, (__int64)a6);
    }
    else
    {
      sub_180080260((__int64)a1, v11, v10, a4, (__int64)a6);
      sub_180080260((__int64)&a1[2 * v10], (__int64)a2, v9, a4, (__int64)a6);
    }
    sub_180080104((__int64)a1, (__int64)&a1[2 * v10], (__int64)a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_180080A84(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a6);
  }
}
