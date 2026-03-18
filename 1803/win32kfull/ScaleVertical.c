/*
 * XREFs of ScaleVertical @ 0x1C02B88E4
 * Callers:
 *     sbit_GetBitmap @ 0x1C02B9DC0 (sbit_GetBitmap.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void *__fastcall ScaleVertical(char *a1, unsigned __int16 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  unsigned __int16 v5; // bx
  char *v8; // r14
  void *result; // rax
  char *v10; // rbp
  size_t v11; // r15
  __int64 v12; // r13
  __int64 v13; // rdi
  char *v14; // rbp
  char *v15; // r15
  size_t v16; // r14
  __int64 v17; // r12

  v5 = a3 >> 1;
  v8 = a1;
  if ( a3 <= a4 )
  {
    if ( a4 > a3 )
    {
      v14 = &a1[a2 * (a3 - 1)];
      result = 0LL;
      v15 = &a1[a2 * (a4 - 1)];
      if ( a3 )
      {
        v16 = a2;
        v17 = a3;
        do
        {
          for ( v5 += a4; v5 >= a3; v5 -= a3 )
          {
            if ( v14 != v15 )
              result = memmove(v15, v14, v16);
            v15 -= v16;
          }
          v14 -= v16;
          --v17;
        }
        while ( v17 );
      }
    }
  }
  else
  {
    result = 0LL;
    v10 = a1;
    if ( a4 )
    {
      v11 = a2;
      v12 = a4;
      do
      {
        while ( v5 >= a4 )
        {
          v8 += v11;
          v5 -= a4;
        }
        if ( v8 != v10 )
          result = memmove(v10, v8, v11);
        v10 += v11;
        v5 += a3;
        --v12;
      }
      while ( v12 );
    }
    if ( a4 < a3 )
    {
      v13 = (unsigned __int16)(a3 - a4);
      do
      {
        result = memset(v10, 0, a2);
        v10 += a2;
        --v13;
      }
      while ( v13 );
    }
  }
  return result;
}
