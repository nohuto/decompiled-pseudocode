/*
 * XREFs of FsRtlIsHpfsDbcsLegal @ 0x14084F2C0
 * Callers:
 *     FsRtlIsHpfsDbcsLegal @ 0x14084F2C0 (FsRtlIsHpfsDbcsLegal.c)
 * Callees:
 *     FsRtlDissectDbcs @ 0x14084EB20 (FsRtlDissectDbcs.c)
 *     FsRtlIsHpfsDbcsLegal @ 0x14084F2C0 (FsRtlIsHpfsDbcsLegal.c)
 */

BOOLEAN __stdcall FsRtlIsHpfsDbcsLegal(
        ANSI_STRING *DbcsName,
        BOOLEAN WildCardsPermissible,
        BOOLEAN PathNamePermissible,
        BOOLEAN LeadingBackslashPermissible)
{
  unsigned __int16 Length; // r10
  char v6; // dl
  char *Buffer; // rax
  char *v8; // rbx
  _STRING v9; // xmm1
  unsigned int v11; // edx
  unsigned __int8 v12; // r8
  int v13; // r9d
  __int64 v14; // rcx
  _STRING FirstName; // [rsp+20h] [rbp-30h] BYREF
  _STRING RemainingName; // [rsp+30h] [rbp-20h] BYREF
  ANSI_STRING Path; // [rsp+40h] [rbp-10h] BYREF

  Length = DbcsName->Length;
  if ( DbcsName->Length )
  {
    if ( WildCardsPermissible )
    {
      if ( Length == 1 )
      {
        v6 = *DbcsName->Buffer;
        if ( v6 == 46 || v6 == 34 )
          return 1;
      }
      if ( Length == 2 )
      {
        Buffer = DbcsName->Buffer;
        if ( *(_WORD *)Buffer == 11822 || *Buffer == 34 && Buffer[1] == 34 )
          return 1;
      }
    }
    v8 = DbcsName->Buffer;
    if ( *v8 != 92 )
      goto LABEL_14;
    if ( LeadingBackslashPermissible )
    {
      if ( Length <= 1u )
        return 1;
      ++v8;
      --Length;
      DbcsName->Buffer = v8;
      --DbcsName->MaximumLength;
      DbcsName->Length = Length;
LABEL_14:
      if ( PathNamePermissible )
      {
        v9 = *DbcsName;
        *(_QWORD *)&FirstName.Length = 0LL;
        FirstName.Buffer = 0LL;
        RemainingName = v9;
        if ( (unsigned __int16)_mm_cvtsi128_si32((__m128i)v9) )
        {
          while ( *(_BYTE *)_mm_srli_si128((__m128i)v9, 8).m128i_i8[0] != 92 )
          {
            Path = v9;
            FsRtlDissectDbcs(&Path, &FirstName, &RemainingName);
            Path = FirstName;
            if ( !FsRtlIsHpfsDbcsLegal(&Path, WildCardsPermissible, 0, 0) )
              break;
            if ( !RemainingName.Length )
              return 1;
            v9 = RemainingName;
          }
          return 0;
        }
      }
      else
      {
        if ( Length > 0xFFu )
          return 0;
        v11 = 0;
        if ( Length )
        {
          do
          {
            v12 = v8[v11];
            if ( v12 >= 0x80u && (_BYTE)NlsMbOemCodePageTag && NlsOemLeadByteInfoTable[v12] )
            {
              if ( v11 == Length - 1 )
                return 0;
              ++v11;
            }
            else
            {
              if ( (v12 & 0x80u) == 0 )
                v13 = (WildCardsPermissible != 0 ? 10 : 2) & byte_14037CAE0[(unsigned __int8)v8[v11]];
              else
                v13 = 1;
              if ( !v13 )
                return 0;
            }
            ++v11;
          }
          while ( v11 < Length );
          if ( v12 <= 0x2Eu )
          {
            v14 = 0x400500000000LL;
            if ( _bittest64(&v14, v12) )
              return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}
