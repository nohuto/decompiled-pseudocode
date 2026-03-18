/*
 * XREFs of ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02A63E8
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C007FDB4 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02A612C (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vFlushCache(RFONTOBJ *this)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r9
  int v4; // r11d
  _QWORD *v5; // rcx
  _QWORD *i; // rcx
  _QWORD *v7; // r8
  _QWORD *j; // r9

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)this + 504LL;
  v3 = *(_QWORD *)(*(_QWORD *)this + 560LL);
  if ( v3 && *(_DWORD *)(*(_QWORD *)this + 552LL) == *(_DWORD *)(*(_QWORD *)this + 548LL) )
  {
    *(_QWORD *)(*(_QWORD *)this + 568LL) = v3;
    *(_QWORD *)(v2 + 72) = v3 + 8;
    *(_QWORD *)(v2 + 80) = *(unsigned int *)(v2 + 36) + v3 - 8;
    v1 = *(_QWORD *)this;
  }
  v4 = *(_DWORD *)(v1 + 628);
  v5 = *(_QWORD **)(*(_QWORD *)(v1 + 472) + 8LL);
  if ( v5 )
    *v5 = 0LL;
  for ( i = *(_QWORD **)(v2 + 24); i; i = (_QWORD *)*i )
  {
    if ( i == *(_QWORD **)(v2 + 24) )
    {
      v7 = *(_QWORD **)v2;
    }
    else if ( *i )
    {
      v7 = i + 228;
    }
    else
    {
      v7 = *(_QWORD **)(v2 + 16);
    }
    for ( j = i + 2; j < v7; j = (_QWORD *)((char *)j + (-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64) )
      *j = 0LL;
  }
}
