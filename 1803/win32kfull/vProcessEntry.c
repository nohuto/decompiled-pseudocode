/*
 * XREFs of vProcessEntry @ 0x1C0055E00
 * Callers:
 *     QueryRegistryFontSubstituteListRoutine @ 0x1C037E910 (QueryRegistryFontSubstituteListRoutine.c)
 * Callees:
 *     vCheckCharSet @ 0x1C0055ED4 (vCheckCharSet.c)
 *     cCapString @ 0x1C00CA9C4 (cCapString.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00D0654 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall vProcessEntry(unsigned __int16 *a1, __int64 a2, char *a3)
{
  unsigned __int16 *v3; // rax
  unsigned __int16 *v5; // rcx
  unsigned int v6; // edi
  _WORD *v9; // rsi
  __int64 v10; // rbx
  size_t v11; // rbx

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
    *(_WORD *)(a2 + 64) = 257;
  }
  cCapString(a2, a1, (unsigned int)v10);
  if ( a3 )
  {
    if ( v9 )
    {
      v11 = 2LL * ((int)v10 - 1);
      memmove(a3, a1, v11);
      *(_WORD *)&a3[v11] = 0;
    }
    else
    {
      return (unsigned int)StringCchCopyW((unsigned __int16 *)a3, (int)v10, a1);
    }
  }
  return v6;
}
