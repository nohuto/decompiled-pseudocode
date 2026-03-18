/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C000426C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0086740 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0002F00 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0004664 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000476C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0085928 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C013C088 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
 *     ??0RFONTTMPOBJ@@QEAA@XZ @ 0x1C0197230 (--0RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0277400 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
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
  struct RFONTOBJ *v14; // r8
  __int64 v15; // r9
  struct _GLYPHDATA *EudcMetrics; // rax
  struct _GLYPHDATA *v17; // rdi
  __int64 v18; // rdx
  unsigned int v19; // r13d
  __int64 v20; // rdx
  struct RFONTOBJ *v21; // r8
  struct RFONTOBJ *v22; // r15
  __int64 v23; // rax
  struct _GLYPHDATA *v24; // rax
  struct _GLYPHDATA *v25; // r14
  __int64 v26; // rax
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  unsigned int v28; // r15d
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r9
  struct RFONTOBJ *v32; // r8
  struct _GLYPHDATA *v33; // rax
  struct _GLYPHDATA *v34; // rax
  __int64 v35; // [rsp+20h] [rbp-10h] BYREF
  int v36; // [rsp+28h] [rbp-8h]
  __int64 v37; // [rsp+68h] [rbp+38h]

  v10 = a3;
  if ( a3 )
    v12 = *((_QWORD *)a3 + 26);
  else
    v12 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)a2 + 312LL) )
  {
    if ( a8 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 692LL) )
      {
        if ( a4 >= gqlTTSystem && a4 <= (unsigned __int16)word_1C032AE7A )
        {
          a3 = (struct ESTROBJ *)(0x80000000 >> ((a4 - gqlTTSystem) % 32));
          if ( ((unsigned int)a3 & *(_DWORD *)(qword_1C032AE80 + 4LL * ((a4 - gqlTTSystem) / 32))) != 0 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)this + 704LL) )
              return RFONTOBJ::pgdDefault(this);
            if ( v10 && (*((_DWORD *)v10 + 58) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(v10, a6, 0, 0);
            RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
            v35 = *(_QWORD *)(v15 + 704);
            if ( !v35
              || (!a9
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v35, a4, v14))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v35, a4, v14)),
                  (v17 = EudcMetrics) == 0LL) )
            {
              v17 = RFONTOBJ::pgdDefault(this);
              goto LABEL_24;
            }
            if ( !v10 )
            {
LABEL_24:
              RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
              return v17;
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
  v18 = *(_QWORD *)this;
  v19 = *(_DWORD *)(*(_QWORD *)this + 824LL);
  if ( v19 )
  {
    RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
    v21 = (struct RFONTOBJ *)(v19 - 1);
    v22 = v21;
    v23 = *(_QWORD *)(*(_QWORD *)(v20 + 728) + 8LL * (_QWORD)v21);
    v35 = v23;
    if ( v23 && (*(_DWORD *)(*(_QWORD *)(v23 + 112) + 52LL) & 0xA) == 8 )
    {
      v19 = (unsigned int)v21;
      v24 = a9
          ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v35, a4, v21)
          : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v35, a4, v21);
      v25 = v24;
      if ( v24 )
      {
        if ( v24->fxD )
        {
          if ( !v10 )
          {
LABEL_36:
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
            return v25;
          }
          *(_DWORD *)(v12 + 4LL * a5) = v19 + 4;
          ++*(_DWORD *)(*((_QWORD *)v10 + 33) + 4LL * (_QWORD)v22);
LABEL_35:
          *a7 = 0;
          goto LABEL_36;
        }
      }
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
    v18 = *(_QWORD *)this;
  }
  v26 = *(_QWORD *)(v18 + 712);
  if ( v26 )
  {
    v36 = 0;
    v35 = v26;
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v35, a4, a3);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v35, a4, a3);
    v25 = EudcMetricsPlus;
    if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
    {
      if ( !v10 )
        goto LABEL_36;
      *(_DWORD *)(v12 + 4LL * a5) = 2;
      ++*((_DWORD *)v10 + 63);
      goto LABEL_35;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
  }
  v28 = 0;
  if ( v19 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
      v29 = *(_QWORD *)this;
      v31 = *(_QWORD *)(v30 + *(_QWORD *)(*(_QWORD *)this + 728LL));
      v35 = v31;
      if ( v31 )
      {
        if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                              this,
                              a4,
                              *(struct PFF **)(v29 + 112),
                              *(struct PFF **)(v31 + 112)) )
        {
          v33 = a9
              ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v35, a4, v32)
              : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v35, a4, v32);
          v25 = v33;
          if ( v33 )
          {
            if ( v33->fxD )
              break;
          }
        }
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
      ++v28;
      v37 += 8LL;
      if ( v28 >= v19 )
        goto LABEL_57;
    }
    if ( !v10 )
      goto LABEL_36;
    *(_DWORD *)(v12 + 4LL * a5) = v28 + 4;
    ++*(_DWORD *)(*((_QWORD *)v10 + 33) + 4LL * v28);
    goto LABEL_35;
  }
LABEL_57:
  if ( *(_QWORD *)(*(_QWORD *)this + 720LL) )
  {
    v35 = *(_QWORD *)(*(_QWORD *)this + 720LL);
    v36 = 0;
    if ( a9 )
      v34 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v35, a4, a3);
    else
      v34 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v35, a4, a3);
    v17 = v34;
    if ( v34 && v34->fxD )
    {
      if ( !v10 )
        goto LABEL_24;
      *(_DWORD *)(v12 + 4LL * a5) = 3;
      ++*((_DWORD *)v10 + 64);
      goto LABEL_22;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v35);
  }
  return 0LL;
}
