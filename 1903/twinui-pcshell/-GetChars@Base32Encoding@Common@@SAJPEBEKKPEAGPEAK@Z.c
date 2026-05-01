/*
 * XREFs of ?GetChars@Base32Encoding@Common@@SAJPEBEKKPEAGPEAK@Z @ 0x1800B0A1C
 * Callers:
 *     ?Base32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAEK@Z @ 0x1800B0350 (-Base32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAEK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Common::Base32Encoding::GetChars(
        const unsigned __int8 *a1,
        __int64 a2,
        int a3,
        unsigned __int16 *a4,
        unsigned int *a5)
{
  __int64 v5; // rdx
  unsigned int v8; // r8d
  const unsigned __int8 *v9; // r9
  __int64 v10; // rbp
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // r11
  __int64 v13; // rdx
  unsigned __int8 v14; // r10
  __int64 v15; // rdx
  unsigned __int8 v16; // r11
  unsigned __int8 v17; // r10
  __int64 v18; // rdx

  v5 = 0LL;
  if ( (unsigned int)(a3 - 13) > 0x7FFFFFF1 )
    return 2147942487LL;
  v8 = 2;
  v9 = a1 + 2;
  v10 = 2LL;
  do
  {
    v11 = *(v9 - 2);
    if ( v8 - 1 >= 8 )
      v12 = 0;
    else
      v12 = *(v9 - 1);
    a4[v5] = a0123456789abcd[(unsigned __int64)v11 >> 3];
    v13 = (unsigned int)(v5 + 1);
    a4[v13] = a0123456789abcd[((unsigned __int64)v12 >> 6) | (unsigned __int8)(4 * (v11 & 7))];
    v5 = (unsigned int)(v13 + 1);
    if ( v8 - 1 < 8 )
    {
      v14 = v8 >= 8 ? 0 : *v9;
      a4[v5] = a0123456789abcd[((unsigned __int64)v12 >> 1) & 0x1F];
      v15 = (unsigned int)(v5 + 1);
      a4[v15] = a0123456789abcd[((unsigned __int64)v14 >> 4) | (unsigned __int8)(16 * (v12 & 1))];
      v5 = (unsigned int)(v15 + 1);
      if ( v8 < 8 )
      {
        v16 = v8 + 1 >= 8 ? 0 : v9[1];
        a4[v5] = a0123456789abcd[((unsigned __int64)v16 >> 7) | (unsigned __int8)(2 * (v14 & 0xF))];
        v5 = (unsigned int)(v5 + 1);
        if ( v8 + 1 < 8 )
        {
          if ( v8 + 2 >= 8 )
            v17 = 0;
          else
            v17 = v9[2];
          a4[v5] = a0123456789abcd[((unsigned __int64)v16 >> 2) & 0x1F];
          v18 = (unsigned int)(v5 + 1);
          a4[v18] = a0123456789abcd[((unsigned __int64)v17 >> 5) | (unsigned __int8)(8 * (v16 & 3))];
          v5 = (unsigned int)(v18 + 1);
          if ( v8 + 2 < 8 )
          {
            a4[v5] = a0123456789abcd[v17 & 0x1F];
            v5 = (unsigned int)(v5 + 1);
          }
        }
      }
    }
    v8 += 5;
    v9 += 5;
    --v10;
  }
  while ( v10 );
  *a5 = 13;
  return 0LL;
}
