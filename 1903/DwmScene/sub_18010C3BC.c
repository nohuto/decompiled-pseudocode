/*
 * XREFs of sub_18010C3BC @ 0x18010C3BC
 * Callers:
 *     sub_18010C4D8 @ 0x18010C4D8 (sub_18010C4D8.c)
 * Callees:
 *     sub_18010BF2C @ 0x18010BF2C (sub_18010BF2C.c)
 *     sub_18010C148 @ 0x18010C148 (sub_18010C148.c)
 */

void __fastcall sub_18010C3BC(__int64 *a1, char *a2, char *a3)
{
  signed __int64 v3; // rax
  char *v4; // rsi
  __int64 *v6; // rbp
  char *v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v8; // [rsp+28h] [rbp-10h]

  if ( a2 != a3 )
  {
    v3 = a3 - (char *)a1;
    v4 = a3;
    v6 = a1;
    while ( (__int64)(v3 & 0xFFFFFFFFFFFFFFF0uLL) > 512 )
    {
      sub_18010C148(&v7, (unsigned __int64)v6, v4);
      if ( v8 > (__int64 *)a2 )
      {
        v4 = v7;
        if ( v7 <= a2 )
          return;
      }
      else
      {
        v6 = v8;
      }
      v3 = v4 - (char *)v6;
    }
    sub_18010BF2C(v6, (__int64 *)v4);
  }
}
