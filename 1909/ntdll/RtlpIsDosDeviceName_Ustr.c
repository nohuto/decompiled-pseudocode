/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x1800285E0
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180027B70 (RtlGetFullPathName_Ustr.c)
 *     RtlIsDosDeviceName_U @ 0x1800292C0 (RtlIsDosDeviceName_U.c)
 *     RtlSetCurrentDirectory_U @ 0x1800769C0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18002891C (RtlDetermineDosPathNameType_Ustr.c)
 *     iswdigit @ 0x180090720 (iswdigit.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__int64 a1)
{
  __int32 v1; // ebp
  __int16 v2; // di
  int v3; // eax
  __m128i *v4; // r11
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // dx
  unsigned __int16 *v8; // rbx
  __int16 i; // cx
  _WORD *v10; // rax
  __int16 v11; // cx
  unsigned __int16 *v12; // rcx
  __int16 v13; // ax
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  int v17; // ecx
  unsigned __int16 *v18; // rcx
  unsigned __int16 *v19; // rdx
  unsigned __int16 *v20; // rax
  __int64 v21; // rcx
  int v22; // esi
  __int16 v23; // di
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  void *v27; // rdx
  __m128i v28; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = RtlDetermineDosPathNameType_Ustr(a1);
  if ( (v3 >= 6 || v3 < 2) && v3 >= 0 && (v3 == 6 || v3 <= 1) )
    return 0LL;
  v5 = _mm_cvtsi128_si32(*v4);
  v28 = *v4;
  v6 = v5;
  v7 = v5 >> 1;
  if ( !(v5 >> 1) )
    return 0LL;
  v8 = (unsigned __int16 *)v28.m128i_i64[1];
  if ( *(_WORD *)(v28.m128i_i64[1] + 2LL * v7 - 2) == 58 )
  {
    v5 -= 2;
    --v7;
    v2 = 1;
  }
  if ( !v7 )
    return 0LL;
  for ( i = *(_WORD *)(v28.m128i_i64[1] + 2LL * v7 - 2); i == 46 || i == 32; i = *(_WORD *)(v28.m128i_i64[1]
                                                                                          + 2LL * v7
                                                                                          - 2) )
  {
    v5 -= 2;
    ++v2;
    if ( !--v7 )
      break;
  }
  if ( v7 )
  {
    v10 = (_WORD *)(v28.m128i_i64[1] + 2 * (v7 - 1LL));
    if ( (unsigned __int64)v10 >= v28.m128i_i64[1] )
    {
      while ( 1 )
      {
        v11 = *v10;
        if ( *v10 == 92 || v11 == 47 || v11 == 58 && v10 == (_WORD *)(v28.m128i_i64[1] + 2) )
          break;
        if ( (unsigned __int64)--v10 < v28.m128i_i64[1] )
          goto LABEL_26;
      }
      v12 = v10 + 1;
      if ( (unsigned __int64)(v10 + 1) >= v28.m128i_i64[1] + (unsigned __int64)(v6 & 0xFFFE) )
        return 0LL;
      v13 = *v12 | 0x20;
      if ( v13 != 112 && v13 != 99 && v13 != 97 && v13 != 108 && v13 != 110 )
        return 0LL;
      v1 = (_DWORD)v12 - v28.m128i_i32[2];
      v15 = v6 + v28.m128i_i16[4] - (_WORD)v12;
      v28.m128i_i64[1] = (__int64)v12;
      v8 = v12;
      v7 = (v15 >> 1) - v2;
      v28.m128i_i16[0] = v15 - 2 * v2;
    }
LABEL_26:
    v16 = *v8;
    LOWORD(v16) = (v16 | 0x20) - 97;
    if ( (unsigned __int16)v16 > 0xFu )
      return 0LL;
    v17 = 43013;
    if ( !_bittest(&v17, v16) )
      return 0LL;
  }
  v18 = v8;
  v19 = &v8[v7];
  if ( v8 < v19 )
  {
    do
    {
      if ( *v18 == 46 )
        break;
      if ( *v18 == 58 )
        break;
      ++v18;
    }
    while ( v18 < v19 );
    if ( v18 > v8 )
    {
      do
      {
        v20 = v18 - 1;
        if ( *(v18 - 1) != 32 )
          break;
        --v18;
      }
      while ( v20 > v8 );
    }
  }
  v21 = v18 - v8;
  v22 = (unsigned __int16)v21;
  v23 = 2 * v21;
  v28.m128i_i16[0] = 2 * v21;
  if ( (unsigned __int16)v21 == 5 )
    return 0LL;
  v24 = (unsigned __int16)v21 - 3;
  if ( v22 == 3 )
  {
    if ( RtlEqualUnicodeString((unsigned __int16 *)&v28, (__int64)&RtlpDosPRNDevice, 1)
      || RtlEqualUnicodeString((unsigned __int16 *)&v28, (__int64)&RtlpDosAUXDevice, 1)
      || RtlEqualUnicodeString((unsigned __int16 *)&v28, (__int64)&RtlpDosNULDevice, 1)
      || RtlEqualUnicodeString((unsigned __int16 *)&v28, (__int64)&RtlpDosCONDevice, 1) )
    {
      return (v1 << 16) | (unsigned int)(2 * v22);
    }
    return 0LL;
  }
  v25 = v24 - 1;
  if ( v25 )
  {
    v26 = v25 - 2;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        v27 = &RtlpDosCONOUTDevice;
        goto LABEL_40;
      }
      return 0LL;
    }
    v27 = &RtlpDosCONINDevice;
  }
  else
  {
    if ( !iswdigit(v8[3]) || v8[3] == 48 )
      return 0LL;
    v28.m128i_i16[0] = v23 - 2;
    if ( RtlEqualUnicodeString((unsigned __int16 *)&v28, (__int64)&RtlpDosLPTDevice, 1) )
      return (v1 << 16) | (unsigned int)(2 * v22);
    v27 = &RtlpDosCOMDevice;
  }
LABEL_40:
  if ( !RtlEqualUnicodeString((unsigned __int16 *)&v28, (__int64)v27, 1) )
    return 0LL;
  return (v1 << 16) | (unsigned int)(2 * v22);
}
