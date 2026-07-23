/*
 * XREFs of EtwpTrackRegBinaryInfo @ 0x18008D3C8
 * Callers:
 *     EtwpTrackProviderBinary @ 0x18008D304 (EtwpTrackProviderBinary.c)
 * Callees:
 *     EtwpGetUmProcessImageInfo @ 0x18010F5A0 (EtwpGetUmProcessImageInfo.c)
 */

void __fastcall EtwpTrackRegBinaryInfo(__int64 a1)
{
  unsigned __int8 i; // bl
  unsigned int v3; // ecx
  _BYTE *v4; // rax
  __int64 v5; // rax

  if ( *(__int16 *)(a1 + 98) < 0 )
  {
    for ( i = 0; i < 0x40u; ++i )
    {
      v3 = 0;
      v4 = (_BYTE *)(a1 + 150);
      while ( !*(v4 - 2) || *v4 != i )
      {
        ++v3;
        v4 += 24;
        if ( v3 >= 4 )
        {
          v5 = 0LL;
          goto LABEL_7;
        }
      }
      v5 = a1 + 8 * (3LL * v3 + 16);
LABEL_7:
      if ( v5 )
        EtwpGetUmProcessImageInfo(i, a1);
    }
  }
}
