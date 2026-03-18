/*
 * XREFs of vProcessEntry @ 0x1C00C2010
 * Callers:
 *     QueryRegistryFontSubstituteListRoutine @ 0x1C036DAA0 (QueryRegistryFontSubstituteListRoutine.c)
 * Callees:
 *     cCapString @ 0x1C007FB68 (cCapString.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00824F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     vCheckCharSet @ 0x1C00C20E4 (vCheckCharSet.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall vProcessEntry(unsigned __int16 *a1, WCHAR *a2, void *a3)
{
  unsigned __int16 *v3; // rax
  unsigned __int16 *v5; // rcx
  unsigned int v6; // edi
  _WORD *v9; // rbx
  __int64 v10; // rsi

  v3 = a1;
  v5 = a1 + 32;
  v6 = 0;
  if ( *v3 )
  {
    do
    {
      if ( v3 >= v5 )
        break;
      v9 = v3 + 1;
      if ( *v3 == 44 )
        goto LABEL_6;
      ++v3;
    }
    while ( *v9 );
  }
  v9 = 0LL;
LABEL_6:
  if ( v9 )
  {
    v10 = v9 - a1;
    vCheckCharSet(a2, v9);
  }
  else
  {
    LODWORD(v10) = 32;
    a2[32] = 257;
  }
  cCapString(a2, a1, v10);
  if ( a3 )
  {
    if ( v9 )
    {
      memmove(a3, a1, 2LL * (int)v10 - 2);
      *((_WORD *)a3 + (int)v10 - 1) = 0;
    }
    else
    {
      return (unsigned int)StringCchCopyW((char *)a3, (int)v10, (char *)a1);
    }
  }
  return v6;
}
