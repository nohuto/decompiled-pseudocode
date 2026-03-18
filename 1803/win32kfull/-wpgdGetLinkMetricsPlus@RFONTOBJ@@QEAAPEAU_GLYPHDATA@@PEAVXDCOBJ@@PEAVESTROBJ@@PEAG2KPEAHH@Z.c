/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0086740
 * Callers:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00031C0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0084AD4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0094400 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0094860 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0094D40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0002F00 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000399C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C000426C (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0004664 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000476C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0085928 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0086598 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C013C904 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C013CAD8 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ??0RFONTTMPOBJ@@QEAA@XZ @ 0x1C0197230 (--0RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C0277338 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0277400 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::wpgdGetLinkMetricsPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned int a6,
        int *a7,
        int a8)
{
  struct XDCOBJ *v11; // r14
  unsigned __int16 *v12; // rcx
  unsigned __int16 *v13; // r8
  __int64 v14; // r10
  unsigned __int16 v15; // r9
  struct RFONTOBJ *v16; // rdx
  struct RFONTOBJ *v17; // r8
  struct RFONTOBJ *v18; // rdx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v20; // r14
  __int64 v21; // rax
  struct _GLYPHDATA *result; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  struct RFONTOBJ *v25; // r8
  _QWORD v26[2]; // [rsp+50h] [rbp-38h] BYREF

  v11 = a2;
  v12 = a4;
  v13 = &a5[a6];
  if ( !a2 )
    return RFONTOBJ::pgdDefault(this, a2);
  a2 = *(struct XDCOBJ **)a2;
  if ( *((_DWORD *)a2 + 79) || !gbAnyLinkedFonts && *(_OWORD *)&gappfeSysEUDC == 0LL && !*((_DWORD *)a2 + 78) )
    return RFONTOBJ::pgdDefault(this, a2);
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
    return RFONTOBJ::pgdDefault(this, a2);
  if ( !*((_DWORD *)a2 + 78) && *(_DWORD *)(*(_QWORD *)this + 692LL) && !*(_QWORD *)(*(_QWORD *)this + 704LL) )
    RFONTOBJ::bInitSystemTT(this, v11);
  v14 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 832LL) )
    return RFONTOBJ::pgdDefault(this, a2);
  if ( !*(_DWORD *)(*(_QWORD *)v11 + 312LL) )
  {
    v15 = *a4;
    if ( *(_DWORD *)(v14 + 692) )
    {
      if ( v15 >= gqlTTSystem && v15 <= (unsigned __int16)word_1C032AE7A )
      {
        a2 = (struct XDCOBJ *)((v15 - gqlTTSystem) / 32);
        if ( ((0x80000000 >> ((v15 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C032AE80 + 4LL * (_QWORD)a2)) != 0 )
        {
          if ( *(_QWORD *)(v14 + 704) )
          {
            GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 832LL));
            RFONTOBJ::vLockSystemTTGlyphCache(this);
            EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 832LL));
            GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 832LL));
            if ( a3 && (*((_DWORD *)a3 + 58) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(a3, a6, 0, 0);
            RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v26);
            v26[0] = *(_QWORD *)(*(_QWORD *)this + 704LL);
            if ( v26[0]
              && ((v18 = (struct RFONTOBJ *)*a4, !a8)
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)v26, (unsigned __int16)v18, v17))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)v26, v18, v17)),
                  (v20 = EudcMetrics) != 0LL) )
            {
              if ( a3 )
              {
                v21 = *((_QWORD *)a3 + 26);
                ++*((_DWORD *)a3 + 62);
                *(_DWORD *)(v21 + 4 * (a4 - a5)) = 1;
                *a7 = 0;
              }
            }
            else
            {
              v20 = RFONTOBJ::pgdDefault(this, v16);
            }
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v26);
            return v20;
          }
          return RFONTOBJ::pgdDefault(this, a2);
        }
      }
    }
    if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v15) )
    {
      if ( *(_QWORD *)(*(_QWORD *)this + 704LL) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 832LL));
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 832LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 832LL));
      }
      return RFONTOBJ::pgdDefault(this, a2);
    }
  }
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 832LL));
  v23 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 696LL) & 1) == 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::vInitEUDC(this, v11);
    RFONTOBJ::vLockEUDCFontsGlyphCache(this, 1);
    *(_DWORD *)(*(_QWORD *)this + 696LL) |= 1u;
    v23 = *(_QWORD *)this;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(v23 + 832));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 832LL));
  if ( a3
    && (*((_DWORD *)a3 + 58) & 0x400) == 0
    && !(unsigned int)ESTROBJ::bPartitionInit(a3, a6, *(_DWORD *)(*(_QWORD *)this + 824LL), 1) )
  {
    return RFONTOBJ::pgdDefault(this, a2);
  }
  v24 = a4 - a5;
  result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v11, a3, *a4, v24, a6, a7, 0, a8);
  if ( !result )
  {
    result = a8
           ? RFONTOBJ::pgdGetEudcMetricsPlus(this, (struct RFONTOBJ *)EudcDefaultChar, v25)
           : RFONTOBJ::pgdGetEudcMetrics(this, EudcDefaultChar, v25);
    if ( !result )
    {
      result = RFONTOBJ::FindLinkedGlyphDataPlus(this, v11, a3, EudcDefaultChar, v24, a6, a7, 1, a8);
      if ( !result )
        return RFONTOBJ::pgdDefault(this, a2);
    }
  }
  return result;
}
