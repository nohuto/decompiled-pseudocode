/*
 * XREFs of ?CacheGlyphBits@UMPDOBJ@@QEAAPEAU_GLYPHBITS@@PEAU2@@Z @ 0x1C028DD90
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02AD160 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

struct _GLYPHBITS *__fastcall UMPDOBJ::CacheGlyphBits(char **this, struct _GLYPHBITS *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  char *v7; // rbx
  char *v8; // rax

  v6 = a2->sizlBitmap.cy * ((unsigned int)(a2->sizlBitmap.cx + 7) >> 3) + 16;
  if ( v6 > *((_DWORD *)this + 92) )
  {
    v8 = UMPDOBJ::_AllocUserMem((UMPDOBJ *)this, v6, 0LL, a4);
    v7 = v8;
    if ( !v8 )
      return (struct _GLYPHBITS *)v7;
    this[43] = v8;
    *((_DWORD *)this + 92) = v6;
  }
  else
  {
    v7 = this[43];
  }
  if ( v7 )
    memmove(v7, a2, v6);
  return (struct _GLYPHBITS *)v7;
}
