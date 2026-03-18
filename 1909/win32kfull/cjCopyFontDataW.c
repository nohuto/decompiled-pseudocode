/*
 * XREFs of cjCopyFontDataW @ 0x1C0091E70
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C0091C78 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C0092340 (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C0092878 (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C00928B8 (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C009DF28 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C009DF64 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C013F6C8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     InitializeScripts @ 0x1C037F080 (InitializeScripts.c)
 */

__int64 __fastcall cjCopyFontDataW(__int64 a1, __int64 a2, __int64 a3, int a4, wchar_t *Src, int a6, int a7)
{
  unsigned int v8; // esi
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // r8
  char CurrentThreadDpiAwarenessContext; // al
  __m128i v18; // xmm1
  __m128i v19; // xmm6
  __int64 v20; // rdi
  unsigned int v21; // eax
  _DWORD *v22; // r8
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // eax
  _DWORD *v27; // rcx
  _WORD *v28; // rdi
  unsigned int v29; // ecx
  _DWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int16 v33; // ax
  const wchar_t *v34; // r8
  int v35; // edx
  int v36; // eax
  int v37; // ecx
  unsigned int v39; // edx
  int v40; // ecx
  _DWORD *v41; // rdx
  _BOOL8 v42; // rdx
  struct HLFONT__ *v43; // rdx
  signed int v44; // eax
  __m128i v45; // xmm1
  __m128i v46; // xmm0
  __m128 v47; // xmm1
  __int64 v48; // rdx
  int v49; // ecx
  __int64 v50; // [rsp+40h] [rbp-58h] BYREF
  struct LFONT *v51; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v53; // [rsp+B0h] [rbp+18h]
  unsigned int v56; // [rsp+D8h] [rbp+40h]

  v8 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v12 = *(_DWORD *)(*(_QWORD *)a3 + 12LL) & 1;
  v50 = v11;
  v56 = v12;
  if ( !v11 )
    return 0LL;
  v42 = *(_WORD *)(v10 + 56) != 0;
  if ( !(*(__int16 *)(v10 + 60) + *(__int16 *)(v10 + 62)) || !*(_WORD *)(v10 + 56) )
    return 0LL;
  if ( (_DWORD)v12 && (*(_DWORD *)(v10 + 48) & 0x3000010) == 0 )
  {
    PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v50);
    PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v50);
    v12 = v56;
  }
  v13 = *(unsigned int *)(v10 + 48);
  if ( (v13 & 0x3000010) == 0 )
  {
    v19 = (__m128i)v56;
    goto LABEL_12;
  }
  v14 = 96;
  if ( (v13 & 1) != 0 || (v13 & 2) == 0 && (v13 & 4) == 0 && (v13 & 8) != 0 )
  {
    W32GetCurrentThreadDpiAwarenessContext(v13, v42, v12);
    W32GetCurrentThreadDpiAwarenessContext(*(unsigned int *)(v11 + 40), v15, v16);
    v13 = *(unsigned int *)(v11 + 40);
    v12 = v56;
  }
  if ( (_DWORD)v12 )
  {
    v43 = *(struct HLFONT__ **)(v11 + 1432);
    if ( v43 )
    {
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v51, v43, 0LL);
      if ( v51 )
      {
        v44 = *((_DWORD *)v51 + 69);
        if ( v44 >= 0 )
        {
          v45 = _mm_cvtsi32_si128(v44);
          v46 = _mm_cvtsi32_si128(*(__int16 *)(v10 + 60) + *(__int16 *)(v10 + 62));
        }
        else
        {
          v45 = _mm_cvtsi32_si128(-v44);
          v46 = _mm_cvtsi32_si128(*(__int16 *)(v10 + 56));
        }
        v47 = _mm_cvtepi32_ps(v45);
        v47.m128_f32[0] = v47.m128_f32[0] / _mm_cvtepi32_ps(v46).m128_f32[0];
        v19 = (__m128i)v47;
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v51);
        goto LABEL_12;
      }
    }
    return 0LL;
  }
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v42, v12);
  if ( (*(_DWORD *)(v11 + 40) & 1) == 0 || (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1 )
    v14 = *(_DWORD *)(v11 + 2180);
  v18 = (__m128i)COERCE_UNSIGNED_INT((float)v14);
  *(float *)v18.m128i_i32 = (float)(*(float *)v18.m128i_i32 * 0.33333334) / (float)*(__int16 *)(v10 + 56);
  v19 = v18;
LABEL_12:
  if ( !(unsigned int)bIFIMetricsToLogFontW2(a1, a2 + 12, v10, (unsigned int)_mm_cvtsi128_si32(v19)) )
    return 0LL;
  v20 = 368LL;
  v21 = *(_DWORD *)(*(_QWORD *)a3 + 128LL);
  *(_DWORD *)a2 = v21;
  v53 = v21;
  v22 = *(_DWORD **)(*(_QWORD *)a3 + 32LL);
  if ( (v22[12] & 0x4000) != 0 || IsVariableFont(*(struct _IFIMETRICS **)(*(_QWORD *)a3 + 32LL)) )
  {
    v39 = v22[1];
    if ( v39 <= 0xC )
      DbgPrint("Test it %d %llu \n", v39, 12LL);
    else
      v20 = (unsigned int)(4 * *(_DWORD *)((char *)v22 + v22[51] + 4) + 368);
  }
  if ( ((*(_DWORD *)(a2 + 4) = v20, v23 = *(_DWORD *)(v10 + 48), v24 = a2 + v20, (v23 & 0x4000) != 0)
     || (v23 & 0x4000001) != 0
     && *(_DWORD *)(v10 + 4) > 0xCu
     && (v25 = *(unsigned int *)(v10 + 204), (_DWORD)v25)
     && *(_DWORD *)(v25 + v10 + 4)
     && ((v40 = *(_DWORD *)(v25 + v10), v40 == 134248052) || v40 == 134248035))
    && *(_DWORD *)(v10 + 4) > 0xCu )
  {
    v41 = (_DWORD *)(v10 + *(int *)(v10 + 204));
    v8 = v41[1];
    if ( v8 > 0x10 )
      v8 = 16;
    memmove((void *)(a2 + 360), v41, 4LL * v8 + 8);
    v26 = v8;
  }
  else
  {
    v26 = 0;
    *(_DWORD *)(a2 + 360) = 134248036;
  }
  *(_DWORD *)(a2 + 364) = v26;
  v27 = (_DWORD *)(v24 + 108);
  if ( (*(_DWORD *)(v10 + 48) & 0x4000) != 0 && *(_DWORD *)(v10 + 4) > 0x10u )
  {
    memmove(v27, (const void *)(v10 + *(int *)(v10 + 208)), 40LL * v8 + 8);
  }
  else
  {
    *(_DWORD *)(v24 + 112) = 0;
    *v27 = 134245473;
  }
  if ( !(unsigned int)bIFIMetricsToTextMetricW2(a1, v24, a3, v56) )
    return 0LL;
  if ( a7 )
  {
    *(_BYTE *)(a2 + 35) = a6;
    *(_BYTE *)(v24 + 64) = a6;
  }
  v28 = (_WORD *)(a2 + 296);
  if ( a7 )
  {
    if ( (unsigned int)InitializeScripts() )
    {
      v29 = 0;
      v30 = &aScripts;
      while ( *v30 != a6 + 1000 )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= 0x13 )
        {
          v48 = qword_1C032A138;
          goto LABEL_33;
        }
      }
      _mm_lfence();
      v11 = v50;
      v48 = *((_QWORD *)&aScripts + 2 * v29 + 1);
LABEL_33:
      v31 = 32LL;
      v32 = v48 - (_QWORD)v28;
      while ( v31 != -2147483614 )
      {
        v33 = *(_WORD *)((char *)v28 + v32);
        if ( !v33 )
          break;
        *v28++ = v33;
        if ( !--v31 )
        {
          --v28;
          break;
        }
      }
      *v28 = 0;
    }
  }
  else
  {
    *v28 = 0;
  }
  v34 = Src;
  if ( Src )
    goto LABEL_67;
  if ( a4 == 5 )
  {
    v34 = (const wchar_t *)(a2 + 104);
LABEL_67:
    wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v34, 0x1FuLL);
    *(_WORD *)(a2 + 102) = 0;
  }
  *(_DWORD *)(a2 + 8) = 0;
  v35 = 2;
  v36 = *(_DWORD *)(v10 + 48);
  if ( (v36 & 1) != 0 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 1) != 0
      || (*(_DWORD *)(v11 + 2184) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL) != 1 )
    {
      v37 = 4;
    }
    else
    {
      v37 = 6;
    }
    *(_DWORD *)(a2 + 8) = v37;
  }
  else if ( (v36 & 2) != 0 )
  {
    v37 = 1;
    *(_DWORD *)(a2 + 8) = 1;
  }
  else
  {
    v37 = 0;
    if ( v36 < 0 )
    {
      *(_DWORD *)(a2 + 8) = 2;
      v37 = 2;
    }
  }
  if ( v56 )
  {
    v49 = v37 | 2;
    if ( (*(_DWORD *)(v10 + 48) & 0x3000010) == 0 )
      v35 = v49;
    *(_DWORD *)(a2 + 8) = v35;
    if ( *(_DWORD *)(v11 + 2140) == 2
      && (*(_DWORD *)(v10 + 48) & 0x3000010) != 0
      && (*(_DWORD *)(v11 + 2184) & 0x100) == 0 )
    {
      *(_DWORD *)(a2 + 8) = v35 | 0x80000000;
    }
  }
  return v53;
}
