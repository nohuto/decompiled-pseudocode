/*
 * XREFs of ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C004D128
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C004B5E0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C0051F40 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0053010 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0068D50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0069880 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0109D98 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 * Callees:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C004D83C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0104A14 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C011F9B4 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C011FD50 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C0124D0C (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C0124DF8 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C013B244 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0151F10 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0154584 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A0930 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
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
  unsigned int v8; // r13d
  const unsigned __int16 *v9; // r12
  unsigned __int16 *v14; // rcx
  const unsigned __int16 *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r11
  unsigned __int16 v18; // r10
  struct _GLYPHDATA *result; // rax
  __int64 v20; // rdx
  __int64 v21; // r15
  int v22; // r12d
  __int64 v23; // r15
  struct RFONTOBJ *v24; // r8
  struct RFONTOBJ *v25; // r8
  unsigned __int16 v26; // dx
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v28; // r14
  __int64 v29; // rax

  v8 = a6;
  v9 = a5;
  v14 = a4;
  v15 = &a5[a6];
  if ( !a2 )
    return RFONTOBJ::pgdDefault(this);
  v16 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v16 + 308) || !gbAnyLinkedFonts && *(_OWORD *)&gappfeSysEUDC == 0LL && !*(_DWORD *)(v16 + 304) )
    return RFONTOBJ::pgdDefault(this);
  if ( a4 < v15 )
  {
    do
    {
      if ( (unsigned __int16)(*v14 - 128) > 0x1Fu )
        break;
      ++v14;
    }
    while ( v14 < v15 );
  }
  if ( v14 == v15 )
    return RFONTOBJ::pgdDefault(this);
  if ( !*(_DWORD *)(v16 + 304) && *(_DWORD *)(*(_QWORD *)this + 708LL) && !*(_QWORD *)(*(_QWORD *)this + 720LL) )
    RFONTOBJ::bInitSystemTT(this, a2);
  v17 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 848LL) )
    return RFONTOBJ::pgdDefault(this);
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 304LL) )
  {
    v18 = *a4;
    if ( *(_DWORD *)(v17 + 708)
      && v18 >= gqlTTSystem
      && v18 <= (unsigned __int16)word_1C032E042
      && ((0x80000000 >> ((v18 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C032E048 + 4LL * ((v18 - gqlTTSystem) / 32))) != 0 )
    {
      if ( *(_QWORD *)(v17 + 720) )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 848LL));
        RFONTOBJ::vLockSystemTTGlyphCache(this);
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 848LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
        if ( a3 && (*((_DWORD *)a3 + 58) & 0x1000) == 0 )
          ESTROBJ::bPartitionInit(a3, v8, 0, 0);
        a5 = *(const unsigned __int16 **)(*(_QWORD *)this + 720LL);
        if ( a5
          && ((v26 = *a4, !a8)
            ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&a5, v26, v25))
            : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&a5, v26, v25)),
              (v28 = EudcMetrics) != 0LL) )
        {
          if ( a3 )
          {
            v29 = *((_QWORD *)a3 + 26);
            ++*((_DWORD *)a3 + 62);
            *(_DWORD *)(v29 + 4 * (a4 - v9)) = 1;
            *a7 = 0;
          }
        }
        else
        {
          v28 = RFONTOBJ::pgdDefault(this);
        }
        a5 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a5);
        return v28;
      }
      return RFONTOBJ::pgdDefault(this);
    }
    if ( !(unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v18) )
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
  v20 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 1) == 0 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    RFONTOBJ::vInitEUDC(this, a2);
    RFONTOBJ::vLockEUDCFontsGlyphCache(this, 1);
    *(_DWORD *)(*(_QWORD *)this + 712LL) |= 1u;
    v20 = *(_QWORD *)this;
  }
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(v20 + 848));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 848LL));
  if ( a3
    && (*((_DWORD *)a3 + 58) & 0x400) == 0
    && !(unsigned int)ESTROBJ::bPartitionInit(a3, v8, *(_DWORD *)(*(_QWORD *)this + 840LL), 1) )
  {
    return RFONTOBJ::pgdDefault(this);
  }
  v21 = (char *)a4 - (char *)v9;
  v22 = a8;
  v23 = v21 >> 1;
  result = RFONTOBJ::FindLinkedGlyphDataPlus(this, a2, a3, *a4, v23, v8, a7, 0, a8);
  if ( !result )
  {
    result = v22
           ? RFONTOBJ::pgdGetEudcMetricsPlus(this, EudcDefaultChar, v24)
           : RFONTOBJ::pgdGetEudcMetrics(this, EudcDefaultChar, v24);
    if ( !result )
    {
      result = RFONTOBJ::FindLinkedGlyphDataPlus(this, a2, a3, EudcDefaultChar, v23, v8, a7, 1, v22);
      if ( !result )
        return RFONTOBJ::pgdDefault(this);
    }
  }
  return result;
}
