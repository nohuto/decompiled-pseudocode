/*
 * XREFs of ?_EncodeJsonString@JsonWriter@@AEAAXPEBGPEADPEAK2@Z @ 0x18014181C
 * Callers:
 *     ?_AppendValue@JsonWriter@@AEAAJPEBG@Z @ 0x18014172C (-_AppendValue@JsonWriter@@AEAAJPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

void __fastcall JsonWriter::_EncodeJsonString(
        JsonWriter *this,
        const unsigned __int16 *a2,
        char *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int v5; // r10d
  __m128i si128; // xmm0
  __int64 v7; // rbx
  int v8; // eax
  int v9; // ecx
  __int64 v10; // [rsp+0h] [rbp-30h]
  int v11; // [rsp+8h] [rbp-28h]
  __int16 v12; // [rsp+Ch] [rbp-24h]
  __m128i v13; // [rsp+10h] [rbp-20h]

  v5 = *a4;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *a4 = 0;
  v13 = si128;
  *a5 = 0;
  v10 = 0LL;
  v11 = 7238754;
  v12 = 29286;
  while ( 1 )
  {
    v9 = *a2;
    if ( !(_WORD)v9 )
      break;
    if ( (unsigned __int16)(v9 - 34) <= 0x3Au )
    {
      v7 = 0x400000000002001LL;
      if ( _bittest64(&v7, (unsigned int)(v9 - 34)) )
      {
        if ( v5 <= 1 )
          return;
        *a3++ = 92;
        *a3 = *(_BYTE *)a2;
LABEL_13:
        v8 = 2;
        goto LABEL_16;
      }
    }
    if ( (unsigned __int16)(v9 - 32) > 0x5Fu )
    {
      if ( (unsigned __int16)v9 < 0xEu && *((_BYTE *)&v10 + (unsigned __int16)v9) )
      {
        if ( v5 <= 1 )
          return;
        *a3++ = 92;
        *a3 = *((_BYTE *)&v10 + *a2);
        goto LABEL_13;
      }
      if ( v5 <= 5 )
        return;
      *(_WORD *)a3 = 30044;
      a3[2] = v13.m128i_i8[(unsigned __int64)*a2 >> 12];
      a3[3] = v13.m128i_i8[*((_BYTE *)a2 + 1) & 0xF];
      a3[4] = v13.m128i_i8[((unsigned __int64)*a2 >> 4) & 0xF];
      a3 += 5;
      *a3 = v13.m128i_i8[*a2 & 0xF];
      v8 = 6;
    }
    else
    {
      if ( !v5 )
        return;
      *a3 = v9;
      v8 = 1;
    }
LABEL_16:
    ++*a5;
    ++a2;
    *a4 += v8;
    v5 -= v8;
    ++a3;
  }
}
