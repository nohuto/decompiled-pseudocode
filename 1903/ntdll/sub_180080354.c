/*
 * XREFs of sub_180080354 @ 0x180080354
 * Callers:
 *     sub_180080290 @ 0x180080290 (sub_180080290.c)
 * Callees:
 *     sub_18010D540 @ 0x18010D540 (sub_18010D540.c)
 */

void __fastcall sub_180080354(__int64 a1)
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
        sub_18010D540(i, a1);
    }
  }
}
