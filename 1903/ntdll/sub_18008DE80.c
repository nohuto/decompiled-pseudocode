/*
 * XREFs of sub_18008DE80 @ 0x18008DE80
 * Callers:
 *     vsprintf @ 0x18008DF00 (vsprintf.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     sub_180092D20 @ 0x180092D20 (sub_180092D20.c)
 *     sub_180092D30 @ 0x180092D30 (sub_180092D30.c)
 */

__int64 __fastcall sub_18008DE80(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  bool v5; // sf
  unsigned int v6; // ebx
  _BYTE *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  _BYTE *v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  if ( a2 && a1 )
  {
    v10 = a1;
    v8 = a1;
    v9 = 0x7FFFFFFF;
    v11 = 66;
    v4 = sub_180092D30(&v8, a2, a3, a4);
    v5 = --v9 < 0;
    v6 = v4;
    if ( v5 )
      sub_180092D20(0LL, &v8);
    else
      *v8 = 0;
    return v6;
  }
  else
  {
    sub_18008C6D8();
    return 0xFFFFFFFFLL;
  }
}
