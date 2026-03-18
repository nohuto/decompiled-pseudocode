/*
 * XREFs of ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C00843B8
 * Callers:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C007FDB4 (xInsertGlyphbitsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C007FECC (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0127EC4 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02A612C (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 */

unsigned __int64 __fastcall RFONTOBJ::pgbCheckGlyphCache(RFONTOBJ *this, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  __int64 *v5; // rcx
  unsigned int v6; // r8d
  size_t v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx

  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)(*(_QWORD *)this + 576LL);
  if ( v3 + a2 < v3 )
    return 0LL;
  if ( v3 + a2 > *(_QWORD *)(v2 + 584) )
  {
    v5 = *(__int64 **)(v2 + 568);
    if ( v5 && (v12 = *v5) != 0 )
    {
      v3 = v12 + 8;
      v13 = *(unsigned int *)(v2 + 544) - 8LL;
      *(_QWORD *)(v2 + 568) = v12;
      v14 = v13 + v12;
      *(_QWORD *)(v2 + 576) = v3;
      *(_QWORD *)(v2 + 584) = v14;
      if ( v3 + a2 > v14 )
        return 0LL;
    }
    else
    {
      v6 = *(_DWORD *)(v2 + 552);
      if ( v6 )
        v7 = *(unsigned int *)(v2 + 544);
      else
        v7 = *(unsigned int *)(v2 + 540);
      if ( (*(_DWORD *)(v2 + 68) & 1) != 0 )
        return 0LL;
      if ( v6 >= *(_DWORD *)(v2 + 548) )
        return 0LL;
      v8 = (unsigned int)v7;
      if ( a2 + 8 > (unsigned __int64)(unsigned int)v7 )
        return 0LL;
      v9 = (_QWORD *)PALLOCMEM2(v7);
      if ( !v9 )
      {
        EngSetLastError(8u);
        return 0LL;
      }
      ++*(_DWORD *)(v2 + 552);
      v10 = *(_QWORD **)(v2 + 568);
      if ( v10 )
        *v10 = v9;
      else
        *(_QWORD *)(v2 + 560) = v9;
      *(_QWORD *)(v2 + 568) = v9;
      *v9 = 0LL;
      v11 = *(_QWORD *)(v2 + 568);
      v3 = v11 + 8;
      *(_QWORD *)(v2 + 576) = v11 + 8;
      *(_QWORD *)(v2 + 584) = v8 + v11 - 8;
    }
  }
  return v3;
}
