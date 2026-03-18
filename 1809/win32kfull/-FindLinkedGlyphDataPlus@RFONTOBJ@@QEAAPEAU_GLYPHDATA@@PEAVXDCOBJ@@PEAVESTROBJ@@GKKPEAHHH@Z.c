/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C00C5D64
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C00C51A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C00C6130 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C00C645C (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C0161770 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ??0RFONTTMPOBJ@@QEAA@XZ @ 0x1C027BC4C (--0RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C028A970 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 */

struct _GLYPHDATA *__fastcall RFONTOBJ::FindLinkedGlyphDataPlus(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct ESTROBJ *a3,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned int a6,
        int *a7,
        int a8,
        int a9)
{
  struct ESTROBJ *v10; // rbx
  __int64 v12; // r12
  struct RFONTOBJ *v13; // rdx
  struct RFONTOBJ *v15; // rdx
  struct RFONTOBJ *v16; // r8
  __int64 v17; // r9
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // r13d
  __int64 v22; // rdx
  struct RFONTOBJ *v23; // r8
  struct RFONTOBJ *v24; // r15
  __int64 v25; // rax
  struct _GLYPHDATA *v26; // rax
  struct _GLYPHDATA *v27; // r14
  __int64 v28; // rax
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  unsigned int v30; // r15d
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r9
  struct RFONTOBJ *v34; // r8
  struct _GLYPHDATA *v35; // rax
  struct _GLYPHDATA *v36; // rax
  __int64 v37; // [rsp+20h] [rbp-10h] BYREF
  int v38; // [rsp+28h] [rbp-8h]
  __int64 v39; // [rsp+68h] [rbp+38h]

  v10 = a3;
  if ( a3 )
    v12 = *((_QWORD *)a3 + 26);
  else
    v12 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 304LL) )
  {
    if ( a8 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 708LL) )
      {
        if ( a4 >= gqlTTSystem && a4 <= (unsigned __int16)word_1C0319AD2 )
        {
          v13 = (struct RFONTOBJ *)((a4 - gqlTTSystem) / 32);
          a3 = (struct ESTROBJ *)(0x80000000 >> ((a4 - gqlTTSystem) % 32));
          if ( ((unsigned int)a3 & *(_DWORD *)(qword_1C0319AD8 + 4LL * (_QWORD)v13)) != 0 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)this + 720LL) )
              return RFONTOBJ::pgdDefault(this, v13);
            if ( v10 && (*((_DWORD *)v10 + 58) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(v10, a6, 0, 0);
            RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)&v37);
            v37 = *(_QWORD *)(v17 + 720);
            if ( !v37
              || (!a9
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v37, a4, v16))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v37, a4, v16)),
                  (v19 = EudcMetrics) == 0LL) )
            {
              v19 = RFONTOBJ::pgdDefault(this, v15);
              goto LABEL_24;
            }
            if ( !v10 )
            {
LABEL_24:
              RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v37);
              return v19;
            }
            ++*((_DWORD *)v10 + 62);
            *(_DWORD *)(v12 + 4LL * a5) = 1;
LABEL_22:
            *a7 = 0;
            goto LABEL_24;
          }
        }
      }
    }
  }
  v20 = *(_QWORD *)this;
  v21 = *(_DWORD *)(*(_QWORD *)this + 840LL);
  if ( v21 )
  {
    RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)&v37);
    v23 = (struct RFONTOBJ *)(v21 - 1);
    v24 = v23;
    v25 = *(_QWORD *)(*(_QWORD *)(v22 + 744) + 8LL * (_QWORD)v23);
    v37 = v25;
    if ( v25 && (*(_DWORD *)(*(_QWORD *)(v25 + 128) + 52LL) & 0xA) == 8 )
    {
      v21 = (unsigned int)v23;
      v26 = a9
          ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v37, a4, v23)
          : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v37, a4, v23);
      v27 = v26;
      if ( v26 )
      {
        if ( v26->fxD )
        {
          if ( !v10 )
          {
LABEL_36:
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v37);
            return v27;
          }
          *(_DWORD *)(v12 + 4LL * a5) = v21 + 4;
          ++*(_DWORD *)(*((_QWORD *)v10 + 33) + 4LL * (_QWORD)v24);
LABEL_35:
          *a7 = 0;
          goto LABEL_36;
        }
      }
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v37);
    v20 = *(_QWORD *)this;
  }
  v28 = *(_QWORD *)(v20 + 728);
  if ( v28 )
  {
    v38 = 0;
    v37 = v28;
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v37, a4, a3);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v37, a4, a3);
    v27 = EudcMetricsPlus;
    if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
    {
      if ( !v10 )
        goto LABEL_36;
      *(_DWORD *)(v12 + 4LL * a5) = 2;
      ++*((_DWORD *)v10 + 63);
      goto LABEL_35;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v37);
  }
  v30 = 0;
  if ( v21 )
  {
    v39 = 0LL;
    while ( 1 )
    {
      RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)&v37);
      v31 = *(_QWORD *)this;
      v33 = *(_QWORD *)(v32 + *(_QWORD *)(*(_QWORD *)this + 744LL));
      v37 = v33;
      if ( v33 )
      {
        if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                              this,
                              a4,
                              *(struct PFF **)(v31 + 128),
                              *(struct PFF **)(v33 + 128)) )
        {
          v35 = a9
              ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v37, a4, v34)
              : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v37, a4, v34);
          v27 = v35;
          if ( v35 )
          {
            if ( v35->fxD )
              break;
          }
        }
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v37);
      ++v30;
      v39 += 8LL;
      if ( v30 >= v21 )
        goto LABEL_57;
    }
    if ( !v10 )
      goto LABEL_36;
    *(_DWORD *)(v12 + 4LL * a5) = v30 + 4;
    ++*(_DWORD *)(*((_QWORD *)v10 + 33) + 4LL * v30);
    goto LABEL_35;
  }
LABEL_57:
  if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
  {
    v37 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    v38 = 0;
    if ( a9 )
      v36 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v37, a4, a3);
    else
      v36 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v37, a4, a3);
    v19 = v36;
    if ( v36 && v36->fxD )
    {
      if ( !v10 )
        goto LABEL_24;
      *(_DWORD *)(v12 + 4LL * a5) = 3;
      ++*((_DWORD *)v10 + 64);
      goto LABEL_22;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v37);
  }
  return 0LL;
}
