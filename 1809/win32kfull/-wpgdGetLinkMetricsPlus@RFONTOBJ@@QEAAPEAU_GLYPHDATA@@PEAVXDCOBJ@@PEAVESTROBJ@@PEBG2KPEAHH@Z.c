/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C
 * Callers:
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C005B1C0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C005B6A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C00811F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008350C (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0083C88 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C01140EC (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00C3E78 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C00C4CF4 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C00C51A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C00C5D64 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C00C6130 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C00C645C (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C01618E4 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C0161AD0 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ??0RFONTTMPOBJ@@QEAA@XZ @ 0x1C027BC4C (--0RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028A810 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C028A970 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::wpgdGetLinkMetricsPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        unsigned __int16 *a4,
        const unsigned __int16 *a5,
        unsigned int a6,
        int *a7,
        int a8)
{
  unsigned __int16 *v12; // rcx
  const unsigned __int16 *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r10
  unsigned __int16 v16; // r9
  __int64 v17; // kr00_8
  struct RFONTOBJ *v18; // r8
  unsigned __int16 v19; // dx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v21; // r14
  __int64 v22; // rax
  struct _GLYPHDATA *result; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  struct RFONTOBJ *v26; // r8
  _QWORD v27[2]; // [rsp+50h] [rbp-38h] BYREF

  v12 = a4;
  v13 = &a5[a6];
  if ( !a2 )
    return RFONTOBJ::pgdDefault(this);
  v14 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v14 + 308) || !gbAnyLinkedFonts && *(_OWORD *)&gappfeSysEUDC == 0LL && !*(_DWORD *)(v14 + 304) )
    return RFONTOBJ::pgdDefault(this);
  if ( a4 < v13 )
  {
    do
    {
      if ( (unsigned __int16)(*v12 - 128) > 0x1Fu )
        break;
      ++v12;
    }
    while ( v12 < v13 );
  }
  if ( v12 == v13 )
    return RFONTOBJ::pgdDefault(this);
  if ( !*(_DWORD *)(v14 + 304) && *(_DWORD *)(*(_QWORD *)this + 708LL) && !*(_QWORD *)(*(_QWORD *)this + 720LL) )
    RFONTOBJ::bInitSystemTT(this, a2);
  v15 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 848LL) )
    return RFONTOBJ::pgdDefault(this);
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 304LL) )
  {
    v16 = *a4;
    if ( *(_DWORD *)(v15 + 708) )
    {
      if ( v16 >= gqlTTSystem && v16 <= (unsigned __int16)word_1C0319AD2 )
      {
        v17 = v16 - gqlTTSystem;
        if ( ((0x80000000 >> ((((BYTE4(v17) & 0x1F) + v17) & 0x1F) - (BYTE4(v17) & 0x1F))) & *(_DWORD *)(qword_1C0319AD8 + 4LL * (((BYTE4(v17) & 0x1F) + (int)v17) >> 5))) != 0 )
        {
          if ( *(_QWORD *)(v15 + 720) )
          {
            GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
            RFONTOBJ::vLockSystemTTGlyphCache(this);
            EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
            GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
            if ( a3 && (*((_DWORD *)a3 + 58) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(a3, a6, 0, 0);
            RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v27);
            v27[0] = *(_QWORD *)(*(_QWORD *)this + 720LL);
            if ( v27[0]
              && ((v19 = *a4, !a8)
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v27, v19, v18))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)v27, v19, v18)),
                  (v21 = EudcMetrics) != 0LL) )
            {
              if ( a3 )
              {
                v22 = *((_QWORD *)a3 + 26);
                ++*((_DWORD *)a3 + 62);
                *(_DWORD *)(v22 + 4 * (a4 - a5)) = 1;
                *a7 = 0;
              }
            }
            else
            {
              v21 = RFONTOBJ::pgdDefault(this);
            }
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v27);
            return v21;
          }
          return RFONTOBJ::pgdDefault(this);
        }
      }
    }
    if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v16) )
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 720LL) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
      }
      return RFONTOBJ::pgdDefault(this);
    }
  }
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
  v24 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 1) == 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::vInitEUDC(this, a2);
    RFONTOBJ::vLockEUDCFontsGlyphCache(this, 1);
    *(_DWORD *)(*(_QWORD *)this + 712LL) |= 1u;
    v24 = *(_QWORD *)this;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(v24 + 848));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
  if ( a3
    && (*((_DWORD *)a3 + 58) & 0x400) == 0
    && !(unsigned int)ESTROBJ::bPartitionInit(a3, a6, *(_DWORD *)(*(_QWORD *)this + 840LL), 1) )
  {
    return RFONTOBJ::pgdDefault(this);
  }
  v25 = a4 - a5;
  result = RFONTOBJ::FindLinkedGlyphDataPlus(this, a2, a3, *a4, v25, a6, a7, 0, a8);
  if ( !result )
  {
    result = a8
           ? RFONTOBJ::pgdGetEudcMetricsPlus(this, EudcDefaultChar, v26)
           : RFONTOBJ::pgdGetEudcMetrics(this, EudcDefaultChar, v26);
    if ( !result )
    {
      result = RFONTOBJ::FindLinkedGlyphDataPlus(this, a2, a3, EudcDefaultChar, v25, a6, a7, 1, a8);
      if ( !result )
        return RFONTOBJ::pgdDefault(this);
    }
  }
  return result;
}
