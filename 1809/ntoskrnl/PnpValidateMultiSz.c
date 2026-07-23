/*
 * XREFs of PnpValidateMultiSz @ 0x14068C658
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x14059193C (PiDqQueryValidateQueryData.c)
 *     PiSwValidateCreateData @ 0x1406D8610 (PiSwValidateCreateData.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 */

__int64 __fastcall PnpValidateMultiSz(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  NTSTATUS v5; // r8d
  size_t v6; // r11
  unsigned __int64 v7; // rcx
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v5 = -1073741811;
  if ( a1 )
  {
    do
    {
      v5 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 2 * v2), a2 - v2, &pcchLength);
      if ( v5 < 0 )
        break;
      v7 = -1LL;
      if ( pcchLength + v6 >= v6 )
        v7 = pcchLength + v6;
      v5 = pcchLength + v6 < v6 ? 0xC0000095 : 0;
      if ( pcchLength + v6 < v6 )
        break;
      v2 = -1LL;
      if ( v7 + 1 >= v7 )
        v2 = v7 + 1;
      v5 = v7 + 1 < v7 ? 0xC0000095 : 0;
      if ( v7 + 1 < v7 )
        break;
    }
    while ( pcchLength );
  }
  return (unsigned int)v5;
}
