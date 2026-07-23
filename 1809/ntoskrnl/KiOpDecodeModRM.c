/*
 * XREFs of KiOpDecodeModRM @ 0x1401933F0
 * Callers:
 *     KiOpDecode @ 0x1400A3588 (KiOpDecode.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x1400A36E8 (KiOpFetchNextByte.c)
 *     KiOpFetchBytes @ 0x14029C790 (KiOpFetchBytes.c)
 */

__int64 __fastcall KiOpDecodeModRM(__int64 a1)
{
  unsigned __int8 v2; // cl
  char v3; // al
  __int64 result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 80) )
  {
    result = KiOpFetchNextByte(a1, (_BYTE *)(a1 + 65));
    if ( (int)result < 0 )
      return result;
    *(_BYTE *)(a1 + 80) = 1;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0xC0) == 0xC0
    || (*(_BYTE *)(a1 + 65) & 7) != 4
    || (result = KiOpFetchNextByte(a1, (_BYTE *)(a1 + 66)), (int)result >= 0) )
  {
    v2 = *(_BYTE *)(a1 + 65);
    v3 = v2 >> 6;
    if ( v2 < 0x40u && (v2 & 7) == 5 || v3 == 2 )
    {
      result = KiOpFetchBytes(a1, 4LL, a1 + 68);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      if ( v3 != 1 )
        return 0LL;
      result = KiOpFetchBytes(a1, 1LL, &v5);
      if ( (int)result >= 0 )
      {
        *(_DWORD *)(a1 + 68) = v5;
        return 0LL;
      }
    }
  }
  return result;
}
