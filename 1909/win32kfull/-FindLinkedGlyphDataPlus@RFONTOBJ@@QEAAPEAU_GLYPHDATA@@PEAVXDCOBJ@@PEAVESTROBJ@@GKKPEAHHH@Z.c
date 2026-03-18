/*
 * XREFs of ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C00FA5E4
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C0090FA8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C009C5BC (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C00FA980 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bPartitionInit@ESTROBJ@@QEAAHKIH@Z @ 0x1C0115244 (-bPartitionInit@ESTROBJ@@QEAAHKIH@Z.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C0142F30 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0152CD0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0155344 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z @ 0x1C0167210 (-bSkipCHSFontSegUISymFallback@RFONTOBJ@@QEAAHGPEAVPFF@@0@Z.c)
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
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // r13d
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  struct _GLYPHDATA *v25; // rax
  struct _GLYPHDATA *v26; // r14
  unsigned int v27; // ecx
  struct _GLYPHDATA *EudcMetricsPlus; // rax
  RFONTOBJ *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r9
  struct RFONTOBJ *v33; // r8
  struct _GLYPHDATA *v34; // rax
  struct _GLYPHDATA *v35; // rax
  __int64 v36; // [rsp+68h] [rbp+48h] BYREF
  __int64 v37; // [rsp+70h] [rbp+50h]

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
        if ( a4 >= gqlTTSystem && a4 <= (unsigned __int16)word_1C032C032 )
        {
          a3 = (struct ESTROBJ *)(0x80000000 >> ((a4 - gqlTTSystem) % 32));
          if ( ((unsigned int)a3 & *(_DWORD *)(qword_1C032C038 + 4LL * ((a4 - gqlTTSystem) / 32))) != 0 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)this + 720LL) )
              return RFONTOBJ::pgdDefault(this);
            if ( v10 && (*((_DWORD *)v10 + 58) & 0x1000) == 0 )
              ESTROBJ::bPartitionInit(v10, a6, 0, 0);
            Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v36);
            v36 = *(_QWORD *)(v15 + 720);
            if ( !v36
              || (!a9
                ? (EudcMetrics = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, a4, v14))
                : (EudcMetrics = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, a4, v14)),
                  (v17 = EudcMetrics) == 0LL) )
            {
              v17 = RFONTOBJ::pgdDefault(this);
              goto LABEL_24;
            }
            if ( !v10 )
            {
LABEL_24:
              RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
              return v17;
            }
            v18 = a5;
            ++*((_DWORD *)v10 + 62);
            *(_DWORD *)(v12 + 4 * v18) = 1;
LABEL_22:
            *a7 = 0;
            goto LABEL_24;
          }
        }
      }
    }
  }
  v19 = *(_QWORD *)this;
  v20 = *(_DWORD *)(*(_QWORD *)this + 840LL);
  if ( v20 )
  {
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v36);
    v22 = v20 - 1;
    v23 = v22;
    v24 = *(_QWORD *)(*(_QWORD *)(v21 + 744) + 8 * v22);
    v36 = v24;
    if ( v24 && (*(_DWORD *)(*(_QWORD *)(v24 + 128) + 52LL) & 0xA) == 8 )
    {
      v20 = v22;
      v25 = a9
          ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, a4, (struct RFONTOBJ *)v22)
          : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, a4, (struct RFONTOBJ *)v22);
      v26 = v25;
      if ( v25 )
      {
        if ( v25->fxD )
        {
          if ( !v10 )
          {
LABEL_37:
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
            return v26;
          }
          v27 = v20 + 4;
          goto LABEL_35;
        }
      }
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
    v19 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)(v19 + 728) )
  {
    v36 = *(_QWORD *)(v19 + 728);
    if ( a9 )
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, a4, a3);
    else
      EudcMetricsPlus = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, a4, a3);
    v26 = EudcMetricsPlus;
    if ( EudcMetricsPlus && EudcMetricsPlus->fxD )
    {
      if ( !v10 )
        goto LABEL_37;
      *(_DWORD *)(v12 + 4LL * a5) = 2;
      ++*((_DWORD *)v10 + 63);
      goto LABEL_36;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
  }
  v23 = 0LL;
  if ( v20 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v36);
      v30 = *(_QWORD *)this;
      v32 = *(_QWORD *)(v31 + *(_QWORD *)(*(_QWORD *)this + 744LL));
      v36 = v32;
      if ( v32 )
      {
        if ( !(unsigned int)RFONTOBJ::bSkipCHSFontSegUISymFallback(
                              v29,
                              a4,
                              *(struct PFF **)(v30 + 128),
                              *(struct PFF **)(v32 + 128)) )
        {
          v34 = a9
              ? RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, a4, v33)
              : RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, a4, v33);
          v26 = v34;
          if ( v34 )
          {
            if ( v34->fxD )
              break;
          }
        }
      }
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
      v23 = (unsigned int)(v23 + 1);
      v37 += 8LL;
      if ( (unsigned int)v23 >= v20 )
        goto LABEL_58;
    }
    if ( !v10 )
      goto LABEL_37;
    v27 = v23 + 4;
LABEL_35:
    *(_DWORD *)(v12 + 4LL * a5) = v27;
    ++*(_DWORD *)(*((_QWORD *)v10 + 33) + 4 * v23);
LABEL_36:
    *a7 = 0;
    goto LABEL_37;
  }
LABEL_58:
  if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
  {
    v36 = *(_QWORD *)(*(_QWORD *)this + 736LL);
    if ( a9 )
      v35 = RFONTOBJ::pgdGetEudcMetricsPlus((RFONTOBJ *)&v36, a4, a3);
    else
      v35 = RFONTOBJ::pgdGetEudcMetrics((RFONTOBJ *)&v36, a4, a3);
    v17 = v35;
    if ( v35 && v35->fxD )
    {
      if ( !v10 )
        goto LABEL_24;
      *(_DWORD *)(v12 + 4LL * a5) = 3;
      ++*((_DWORD *)v10 + 64);
      goto LABEL_22;
    }
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v36);
  }
  return 0LL;
}
