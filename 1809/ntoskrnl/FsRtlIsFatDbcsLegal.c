/*
 * XREFs of FsRtlIsFatDbcsLegal @ 0x1406B50F0
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x1406B50F0 (FsRtlIsFatDbcsLegal.c)
 * Callees:
 *     FsRtlIsFatDbcsLegal @ 0x1406B50F0 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlDissectDbcs @ 0x140816B10 (FsRtlDissectDbcs.c)
 *     FsRtlDoesDbcsContainWildCards @ 0x140816C00 (FsRtlDoesDbcsContainWildCards.c)
 */

BOOLEAN __stdcall FsRtlIsFatDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // bx
  char v6; // si
  char *v7; // rdi
  unsigned int v8; // r8d
  unsigned __int8 v9; // r9
  __int64 v10; // rcx
  char v12; // dl
  char *Buffer; // rax
  __m128i v14; // xmm1
  __int16 v15; // ax
  int v16; // edx
  unsigned __int8 v17; // cl
  _STRING RemainingName; // [rsp+20h] [rbp-48h] BYREF
  ANSI_STRING Path; // [rsp+30h] [rbp-38h] BYREF
  _STRING FirstName; // [rsp+40h] [rbp-28h] BYREF

  Length = DbcsName->Length;
  v6 = 0;
  if ( !DbcsName->Length )
    return 0;
  if ( WildCardsPermissible )
  {
    if ( Length == 1 )
    {
      v12 = *DbcsName->Buffer;
      if ( v12 == 46 || v12 == 34 )
        return 1;
    }
    if ( Length == 2 )
    {
      Buffer = DbcsName->Buffer;
      if ( *(_WORD *)Buffer == 11822 || *Buffer == 34 && Buffer[1] == 34 )
        return 1;
    }
  }
  v7 = DbcsName->Buffer;
  if ( *v7 != 92 )
    goto LABEL_4;
  if ( !LeadingBackslashPermissible )
    return 0;
  if ( Length <= 1u )
    return 1;
  ++v7;
  --Length;
  DbcsName->Buffer = v7;
  --DbcsName->MaximumLength;
  DbcsName->Length = Length;
LABEL_4:
  if ( PathNamePermissible )
  {
    v14 = *(__m128i *)DbcsName;
    v15 = _mm_cvtsi128_si32(*(__m128i *)DbcsName);
    RemainingName = *DbcsName;
    if ( v15 )
    {
      while ( *(_BYTE *)_mm_srli_si128(v14, 8).m128i_i8[0] != 92 )
      {
        Path = (ANSI_STRING)v14;
        FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
        Path = FirstName;
        if ( !FsRtlIsFatDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
          break;
        if ( !RemainingName.Length )
          return 1;
        v14 = (__m128i)RemainingName;
      }
      return 0;
    }
    return 1;
  }
  if ( WildCardsPermissible && FsRtlDoesDbcsContainWildCards(DbcsName) )
  {
    v16 = 0;
    if ( Length )
    {
      while ( 1 )
      {
        v17 = v7[v16];
        if ( v17 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v17] )
        {
          ++v16;
        }
        else if ( (v17 & 0x80u) == 0 && (byte_14035D610[v17] & 9) == 0 )
        {
          return 0;
        }
        if ( ++v16 >= (unsigned int)Length )
          return 1;
      }
    }
    return 1;
  }
  if ( Length <= 0xCu )
  {
    v8 = 0;
    if ( !Length )
      return 1;
    do
    {
      v9 = v7[v8];
      if ( v9 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v9] )
      {
        if ( !v6 && v8 >= 7 || v8 == Length - 1 )
          return 0;
        ++v8;
      }
      else
      {
        if ( (v9 & 0x80u) == 0
          && ((unsigned __int8)(WildCardsPermissible != 0 ? 9 : 1) & byte_14035D610[(unsigned __int8)v7[v8]]) == 0 )
        {
          return 0;
        }
        if ( v9 == 46 || v9 == 34 )
        {
          if ( !v8 || v6 || Length - v8 - 1 > 3 || v7[v8 - 1] == 32 )
            return 0;
          v6 = 1;
        }
        if ( v8 >= 8 && !v6 )
          return 0;
      }
      ++v8;
    }
    while ( v8 < Length );
    if ( v9 > 0x2Eu )
      return 1;
    v10 = 0x400500000000LL;
    if ( !_bittest64(&v10, v9) )
      return 1;
  }
  return 0;
}
