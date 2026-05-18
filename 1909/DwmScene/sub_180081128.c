/*
 * XREFs of sub_180081128 @ 0x180081128
 * Callers:
 *     sub_180081128 @ 0x180081128 (sub_180081128.c)
 *     sub_1800813F0 @ 0x1800813F0 (sub_1800813F0.c)
 * Callees:
 *     sub_180080214 @ 0x180080214 (sub_180080214.c)
 *     sub_180080370 @ 0x180080370 (sub_180080370.c)
 *     sub_180080B94 @ 0x180080B94 (sub_180080B94.c)
 *     sub_180081128 @ 0x180081128 (sub_180081128.c)
 */

void __fastcall sub_180081128(
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
      sub_180081128((_DWORD)a1, v11, v10, a4, a5, (__int64)a6);
      sub_180081128((_DWORD)a1 + 16 * v10, (_DWORD)a2, v9, a4, a5, (__int64)a6);
    }
    else
    {
      sub_180080370((__int64)a1, v11, v10, a4, (__int64)a6);
      sub_180080370((__int64)&a1[2 * v10], (__int64)a2, v9, a4, (__int64)a6);
    }
    sub_180080214((__int64)a1, (__int64)&a1[2 * v10], (__int64)a2, v10, v9, a4, a5, a6);
  }
  else
  {
    sub_180080B94(a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a6);
  }
}
