/*
 * XREFs of ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C00916BC
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C0090FA8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C009B008 (GreGetGlyphOutlineInternal.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C009C870 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C009D0E0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 * Callees:
 *     ?pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ @ 0x1C0091884 (-pql@PFEOBJ@@QEAAPEAU_QUICKLOOKUP@@XZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0092BB0 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bIsLinkedGlyph(RFONTOBJ *this, unsigned __int16 a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rax
  BOOL v6; // r13d
  int v7; // ebx
  struct _LIST_ENTRY *i; // rsi
  int v9; // edi
  __int64 v10; // rbx
  int v12; // r10d
  unsigned int v13; // edx
  BOOL v14; // r8d
  __int64 v15; // rcx
  int v16; // edi
  __int64 v17; // kr00_8
  int v18; // edi
  __int64 v19; // kr08_8
  struct PFE *v20; // [rsp+70h] [rbp+50h] BYREF
  __int64 v21; // [rsp+78h] [rbp+58h] BYREF

  GreAcquireSemaphore(ghsemEUDC1);
  v4 = 0;
  if ( (unsigned __int16)(a2 + 0x2000) <= 0x18FFu
    || *(_OWORD *)&gappfeSysEUDC != 0LL
    && a2 >= gqlEUDC
    && a2 <= *(&gqlEUDC + 1)
    && ((0x80000000 >> (a2 & 0x1F)) & *(_DWORD *)(qword_1C0329FE8 + 4 * ((unsigned __int64)a2 >> 5))) != 0 )
  {
    v4 = 1;
    goto LABEL_4;
  }
  if ( !bFinallyInitializeFontAssocDefault )
  {
LABEL_4:
    if ( gbSystemDBCSFontEnabled )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 12LL) & 0x10) != 0 )
      {
        v20 = gappfeSystemDBCS;
        if ( *((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) )
        {
          if ( a2 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v20) && a2 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) )
          {
            v18 = *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20);
            v19 = a2 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20);
            if ( ((0x80000000 >> ((a2 - v18) % 32)) & *(_DWORD *)(*((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1)
                                                                + 4LL * (int)(v19 / 32))) != 0 )
              v4 = 1;
          }
        }
      }
    }
    if ( v4 )
      goto LABEL_15;
    goto LABEL_6;
  }
  v12 = *(_DWORD *)(*(_QWORD *)this + 844LL);
  v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 45LL) >> 4;
  if ( v13 >= 7 || !*((_DWORD *)&FontAssocDefaultTable + 166 * v13) )
    v13 = 6;
  v14 = v12 != 0;
  if ( v12 )
  {
    v15 = 664LL * v13;
    if ( !*(_QWORD *)((char *)&FontAssocDefaultTable + v15 + 656) )
    {
      if ( *(_QWORD *)((char *)&FontAssocDefaultTable + v15 + 648) )
        v14 = 0;
    }
  }
  v20 = (struct PFE *)*((_QWORD *)&FontAssocDefaultTable + 83 * v13 + v14 + 81);
  if ( v20 )
  {
    if ( *((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) )
    {
      if ( a2 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v20) && a2 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) )
      {
        v16 = *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20);
        v17 = a2 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20);
        if ( ((0x80000000 >> ((a2 - v16) % 32)) & *(_DWORD *)(*((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1)
                                                            + 4LL * (int)(v17 / 32))) != 0 )
        {
LABEL_14:
          v4 = 1;
          goto LABEL_15;
        }
      }
    }
  }
LABEL_6:
  v5 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  v6 = *(_DWORD *)(*(_QWORD *)this + 844LL) != 0;
  v21 = v5;
  v7 = a2;
  for ( i = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v21)->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v21); i = i->Flink )
  {
    v20 = (struct PFE *)*((_QWORD *)&i[2].Flink + (v6 & (unsigned int)-(*((_QWORD *)&i[2].Flink + v6) != 0LL)));
    if ( *((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1)
      && a2 >= *(_WORD *)PFEOBJ::pql((PFEOBJ *)&v20)
      && a2 <= *((_WORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) )
    {
      v9 = *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20);
      v10 = (v7 - *(unsigned __int16 *)PFEOBJ::pql((PFEOBJ *)&v20)) / 32;
      if ( ((0x80000000 >> ((a2 - v9) % 32)) & *(_DWORD *)(*((_QWORD *)PFEOBJ::pql((PFEOBJ *)&v20) + 1) + 4 * v10)) != 0 )
        goto LABEL_14;
      v7 = a2;
    }
  }
LABEL_15:
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  return v4;
}
