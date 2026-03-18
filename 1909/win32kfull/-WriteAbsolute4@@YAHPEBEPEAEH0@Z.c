/*
 * XREFs of ?WriteAbsolute4@@YAHPEBEPEAEH0@Z @ 0x1C02C53BC
 * Callers:
 *     EncodeRLE4 @ 0x1C02C6CCC (EncodeRLE4.c)
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall WriteAbsolute4(unsigned __int8 *Src, unsigned __int8 *a2, int a3, unsigned __int8 *a4)
{
  __int64 v4; // r14
  unsigned int v5; // edi
  int v6; // edi
  __int64 result; // rax
  unsigned __int8 *v8; // rsi
  char v9; // bl
  unsigned __int8 *v10; // rsi

  v4 = a3;
  if ( a3 >= 3 )
  {
    v6 = a3 + 1;
    if ( (((_BYTE)a3 + 1) & 2) != 0 )
      v5 = (v6 >> 1) + 3;
    else
      v5 = (v6 >> 1) + 2;
  }
  else
  {
    v5 = 2;
  }
  if ( !a2 )
    return v5;
  if ( &a2[v5] > a4 )
    return 0LL;
  if ( a3 >= 3 )
  {
    *a2 = 0;
    a2[1] = a3;
    v8 = a2 + 2;
    v9 = a3 + 1;
    memmove(a2 + 2, Src, (a3 + 1) >> 1);
    v10 = &v8[(v4 + 1) >> 1];
    result = v5;
    if ( (v9 & 2) != 0 )
      *v10 = 0;
  }
  else
  {
    *a2 = a3;
    a2[1] = *Src;
    return 2LL;
  }
  return result;
}
