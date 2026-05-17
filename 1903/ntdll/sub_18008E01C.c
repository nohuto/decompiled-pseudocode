/*
 * XREFs of sub_18008E01C @ 0x18008E01C
 * Callers:
 *     _vsnprintf @ 0x18008E000 (_vsnprintf.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 *     sub_180092D30 @ 0x180092D30 (sub_180092D30.c)
 */

__int64 __fastcall sub_18008E01C(_BYTE *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  _BYTE *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  _BYTE *v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  if ( a3 && (!a2 || a1) )
  {
    v11 = 66;
    v10 = a1;
    if ( a2 > 0x7FFFFFFF )
      LODWORD(a2) = 0x7FFFFFFF;
    v8 = a1;
    v9 = a2;
    v6 = sub_180092D30(&v8, a3, a4, a5);
    if ( a1 )
    {
      if ( --v9 < 0 )
        sub_180092D20(0LL, &v8);
      else
        *v8 = 0;
    }
    return v6;
  }
  else
  {
    sub_18008C6D8();
    return 0xFFFFFFFFLL;
  }
}
