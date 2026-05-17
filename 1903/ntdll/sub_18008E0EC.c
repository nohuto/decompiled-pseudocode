/*
 * XREFs of sub_18008E0EC @ 0x18008E0EC
 * Callers:
 *     _vsnwprintf @ 0x18008E0D0 (_vsnwprintf.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 *     sub_1800936C0 @ 0x1800936C0 (sub_1800936C0.c)
 */

__int64 __fastcall sub_18008E0EC(_BYTE *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  _BYTE *v7; // rcx
  _BYTE *v9; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h]
  _BYTE *v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]

  if ( a3 && (!a2 || a1) )
  {
    v12 = 66;
    v11 = a1;
    v9 = a1;
    if ( a2 <= 0x3FFFFFFF )
      v10 = 2 * a2;
    else
      v10 = 0x7FFFFFFF;
    v6 = sub_1800936C0(&v9, a3, a4, a5);
    if ( a1 )
    {
      if ( --v10 < 0 )
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
    }
    return v6;
  }
  else
  {
    sub_18008C6D8();
    return 0xFFFFFFFFLL;
  }
}
