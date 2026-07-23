/*
 * XREFs of FsRtlIsHpfsDbcsLegal @ 0x1408172B0
 * Callers:
 *     FsRtlIsHpfsDbcsLegal @ 0x1408172B0 (FsRtlIsHpfsDbcsLegal.c)
 * Callees:
 *     FsRtlDissectDbcs @ 0x140816B10 (FsRtlDissectDbcs.c)
 *     FsRtlIsHpfsDbcsLegal @ 0x1408172B0 (FsRtlIsHpfsDbcsLegal.c)
 */

BOOLEAN __stdcall FsRtlIsHpfsDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // r10
  char v7; // cl
  char *Buffer; // rax
  char *v9; // rbx
  __m128i v10; // xmm1
  __int16 v11; // ax
  unsigned int v13; // r8d
  unsigned __int8 v14; // r9
  __int64 v15; // rcx
  _STRING RemainingName; // [rsp+20h] [rbp-48h] BYREF
  ANSI_STRING Path; // [rsp+30h] [rbp-38h] BYREF
  _STRING FirstName; // [rsp+40h] [rbp-28h] BYREF

  Length = DbcsName->Length;
  if ( DbcsName->Length )
  {
    if ( WildCardsPermissible )
    {
      if ( Length == 1 )
      {
        v7 = *DbcsName->Buffer;
        if ( v7 == 46 || v7 == 34 )
          return 1;
      }
      if ( Length == 2 )
      {
        Buffer = DbcsName->Buffer;
        if ( *Buffer == 46 && Buffer[1] == 46 )
          return 1;
        if ( *Buffer == 34 && Buffer[1] == 34 )
          return 1;
      }
    }
    v9 = DbcsName->Buffer;
    if ( *v9 != 92 )
      goto LABEL_15;
    if ( LeadingBackslashPermissible )
    {
      if ( Length <= 1u )
        return 1;
      ++v9;
      --Length;
      DbcsName->Buffer = v9;
      --DbcsName->MaximumLength;
      DbcsName->Length = Length;
LABEL_15:
      if ( PathNamePermissible )
      {
        v10 = *(__m128i *)DbcsName;
        v11 = _mm_cvtsi128_si32(*(__m128i *)DbcsName);
        RemainingName = *DbcsName;
        if ( v11 )
        {
          while ( *(_BYTE *)_mm_srli_si128(v10, 8).m128i_i8[0] != 92 )
          {
            Path = (ANSI_STRING)v10;
            FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
            Path = FirstName;
            if ( !FsRtlIsHpfsDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
              break;
            if ( !RemainingName.Length )
              return 1;
            v10 = (__m128i)RemainingName;
          }
          return 0;
        }
      }
      else
      {
        if ( Length > 0xFFu )
          return 0;
        v13 = 0;
        if ( Length )
        {
          do
          {
            v14 = v9[v13];
            if ( v14 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v14] )
            {
              if ( v13 == DbcsName->Length - 1 )
                return 0;
              ++v13;
            }
            else if ( (v14 & 0x80u) == 0
                   && ((unsigned __int8)(WildCardsPermissible != 0 ? 10 : 2) & byte_14035D610[(unsigned __int8)v9[v13]]) == 0 )
            {
              return 0;
            }
            ++v13;
          }
          while ( v13 < Length );
          if ( v14 <= 0x2Eu )
          {
            v15 = 0x400500000000LL;
            if ( _bittest64(&v15, v14) )
              return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}
