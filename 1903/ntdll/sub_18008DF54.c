/*
 * XREFs of sub_18008DF54 @ 0x18008DF54
 * Callers:
 *     _vswprintf @ 0x18008DF40 (_vswprintf.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 *     sub_1800936C0 @ 0x1800936C0 (sub_1800936C0.c)
 */

__int64 __fastcall sub_18008DF54(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  bool v5; // sf
  unsigned int v6; // ebx
  _BYTE *v7; // rcx
  _BYTE *v9; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h]
  _BYTE *v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]

  if ( a2 && a1 )
  {
    v11 = a1;
    v9 = a1;
    v12 = 66;
    v10 = 0x7FFFFFFF;
    v4 = sub_1800936C0(&v9, a2, a3, a4);
    v5 = --v10 < 0;
    v6 = v4;
    if ( v5 )
    {
      sub_180092D20(0LL, &v9);
      v7 = v9;
    }
    else
    {
      *v9 = 0;
      v7 = ++v9;
    }
    if ( --v10 < 0 )
      sub_180092D20(0LL, &v9);
    else
      *v7 = 0;
    return v6;
  }
  else
  {
    sub_18008C6D8();
    return 0xFFFFFFFFLL;
  }
}
