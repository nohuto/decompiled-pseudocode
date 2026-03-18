/*
 * XREFs of ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C0006FCC
 * Callers:
 *     STROBJ_bEnum @ 0x1C008B570 (STROBJ_bEnum.c)
 * Callees:
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C008B640 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02B80EC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

__int64 __fastcall STROBJ_bEnumLinked(struct ESTROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  int v3; // eax
  unsigned int v4; // edi
  _DWORD *v8; // rax
  int v9; // edx
  struct _GLYPHPOS *i; // rcx
  __int64 v11; // r9
  _DWORD *v14; // rax
  int v15; // edx

  v3 = *((_DWORD *)a1 + 12);
  v4 = 0;
  if ( v3 )
  {
    if ( v3 == *(_DWORD *)a1 )
      goto LABEL_14;
    *((_QWORD *)a1 + 27) += 4LL;
    *((_QWORD *)a1 + 28) += 24LL;
    v14 = (_DWORD *)*((_QWORD *)a1 + 27);
    i = (struct _GLYPHPOS *)*((_QWORD *)a1 + 28);
    v15 = *((_DWORD *)a1 + 59);
    while ( *v14 != v15 )
    {
      ++i;
      ++v14;
      *((_QWORD *)a1 + 28) = i;
      *((_QWORD *)a1 + 27) = v14;
    }
  }
  else
  {
    v8 = (_DWORD *)*((_QWORD *)a1 + 26);
    v9 = *((_DWORD *)a1 + 59);
    *((_QWORD *)a1 + 27) = v8;
    for ( i = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8); ; ++i )
    {
      *((_QWORD *)a1 + 28) = i;
      if ( *v8 == v9 )
        break;
      *((_QWORD *)a1 + 27) = ++v8;
    }
  }
  v11 = *((_QWORD *)a1 + 7);
  if ( v11 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v11 + 84LL) & 1) != 0
       ? (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(
                         *((RFONTOBJ **)a1 + 7),
                         i,
                         *(_DWORD *)(*(_QWORD *)v11 + 88LL)) != 0
       : RFONTOBJ::cGetGlyphDataCache(*((RFONTOBJ **)a1 + 7), 1u, i) )
    {
      ++*((_DWORD *)a1 + 12);
      *a2 = 1;
      *a3 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 28);
      LOBYTE(v4) = *((_DWORD *)a1 + 12) < *(_DWORD *)a1;
      return v4;
    }
  }
LABEL_14:
  *a2 = 0;
  return 0LL;
}
