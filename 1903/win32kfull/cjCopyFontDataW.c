/*
 * XREFs of cjCopyFontDataW @ 0x1C004DFF0
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C004DDF8 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C004E4C0 (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C004E9F8 (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C004EA38 (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C004EEA0 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00546C8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0054704 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     InitializeScripts @ 0x1C0382080 (InitializeScripts.c)
 */

__int64 __fastcall cjCopyFontDataW(__int64 a1, __int64 a2, __int64 a3, int a4, wchar_t *Src, int a6, int a7)
{
  unsigned int v8; // esi
  __int64 v10; // r13
  __int64 v11; // rbx
  int v12; // r8d
  int v13; // ecx
  int v14; // edi
  char CurrentThreadDpiAwarenessContext; // al
  __m128i v16; // xmm1
  __m128i v17; // xmm6
  __int64 v18; // rdi
  unsigned int v19; // eax
  _DWORD *v20; // r8
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // eax
  _DWORD *v25; // rcx
  _WORD *v26; // rdi
  unsigned int v27; // ecx
  _DWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int16 v31; // ax
  const wchar_t *v32; // r8
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  unsigned int v37; // edx
  int v38; // ecx
  _DWORD *v39; // rdx
  struct HLFONT__ *v40; // rdx
  signed int v41; // eax
  __m128i v42; // xmm1
  __m128i v43; // xmm0
  __m128 v44; // xmm1
  __int64 v45; // rdx
  int v46; // ecx
  __int64 v47; // [rsp+40h] [rbp-58h] BYREF
  struct LFONT *v48; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v50; // [rsp+B0h] [rbp+18h]
  unsigned int v53; // [rsp+D8h] [rbp+40h]

  v8 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)a3 + 32LL);
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v12 = *(_DWORD *)(*(_QWORD *)a3 + 12LL) & 1;
  v47 = v11;
  v53 = v12;
  if ( !v11 || !(*(__int16 *)(v10 + 60) + *(__int16 *)(v10 + 62)) || !*(_WORD *)(v10 + 56) )
    return 0LL;
  if ( v12 && (*(_DWORD *)(v10 + 48) & 0x3000010) == 0 )
  {
    PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v47);
    PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v47);
    v12 = v53;
  }
  v13 = *(_DWORD *)(v10 + 48);
  if ( (v13 & 0x3000010) == 0 )
  {
    v17 = (__m128i)v53;
    goto LABEL_12;
  }
  v14 = 96;
  if ( (v13 & 1) != 0 || (v13 & 2) == 0 && (v13 & 4) == 0 && (v13 & 8) != 0 )
  {
    W32GetCurrentThreadDpiAwarenessContext();
    W32GetCurrentThreadDpiAwarenessContext();
    v12 = v53;
  }
  if ( v12 )
  {
    v40 = *(struct HLFONT__ **)(v11 + 1432);
    if ( v40 )
    {
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v48, v40, 0LL);
      if ( v48 )
      {
        v41 = *((_DWORD *)v48 + 69);
        if ( v41 >= 0 )
        {
          v42 = _mm_cvtsi32_si128(v41);
          v43 = _mm_cvtsi32_si128(*(__int16 *)(v10 + 60) + *(__int16 *)(v10 + 62));
        }
        else
        {
          v42 = _mm_cvtsi32_si128(-v41);
          v43 = _mm_cvtsi32_si128(*(__int16 *)(v10 + 56));
        }
        v44 = _mm_cvtepi32_ps(v42);
        v44.m128_f32[0] = v44.m128_f32[0] / _mm_cvtepi32_ps(v43).m128_f32[0];
        v17 = (__m128i)v44;
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v48);
        goto LABEL_12;
      }
    }
    return 0LL;
  }
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (*(_DWORD *)(v11 + 40) & 1) == 0 || (CurrentThreadDpiAwarenessContext & 0xFu) - 1 <= 1 )
    v14 = *(_DWORD *)(v11 + 2180);
  v16 = (__m128i)COERCE_UNSIGNED_INT((float)v14);
  *(float *)v16.m128i_i32 = (float)(*(float *)v16.m128i_i32 * 0.33333334) / (float)*(__int16 *)(v10 + 56);
  v17 = v16;
LABEL_12:
  if ( !(unsigned int)bIFIMetricsToLogFontW2(a1, a2 + 12, v10, (unsigned int)_mm_cvtsi128_si32(v17)) )
    return 0LL;
  v18 = 368LL;
  v19 = *(_DWORD *)(*(_QWORD *)a3 + 128LL);
  *(_DWORD *)a2 = v19;
  v50 = v19;
  v20 = *(_DWORD **)(*(_QWORD *)a3 + 32LL);
  if ( (v20[12] & 0x4000) != 0 || IsVariableFont(*(struct _IFIMETRICS **)(*(_QWORD *)a3 + 32LL)) )
  {
    v37 = v20[1];
    if ( v37 <= 0xC )
      DbgPrint("Test it %d %llu \n", v37, 12LL);
    else
      v18 = (unsigned int)(4 * *(_DWORD *)((char *)v20 + v20[51] + 4) + 368);
  }
  if ( ((*(_DWORD *)(a2 + 4) = v18, v21 = *(_DWORD *)(v10 + 48), v22 = a2 + v18, (v21 & 0x4000) != 0)
     || (v21 & 0x4000001) != 0
     && *(_DWORD *)(v10 + 4) > 0xCu
     && (v23 = *(unsigned int *)(v10 + 204), (_DWORD)v23)
     && *(_DWORD *)(v23 + v10 + 4)
     && ((v38 = *(_DWORD *)(v23 + v10), v38 == 134248052) || v38 == 134248035))
    && *(_DWORD *)(v10 + 4) > 0xCu )
  {
    v39 = (_DWORD *)(v10 + *(int *)(v10 + 204));
    v8 = v39[1];
    if ( v8 > 0x10 )
      v8 = 16;
    memmove((void *)(a2 + 360), v39, 4LL * v8 + 8);
    v24 = v8;
  }
  else
  {
    v24 = 0;
    *(_DWORD *)(a2 + 360) = 134248036;
  }
  *(_DWORD *)(a2 + 364) = v24;
  v25 = (_DWORD *)(v22 + 108);
  if ( (*(_DWORD *)(v10 + 48) & 0x4000) != 0 && *(_DWORD *)(v10 + 4) > 0x10u )
  {
    memmove(v25, (const void *)(v10 + *(int *)(v10 + 208)), 40LL * v8 + 8);
  }
  else
  {
    *(_DWORD *)(v22 + 112) = 0;
    *v25 = 134245473;
  }
  if ( !(unsigned int)bIFIMetricsToTextMetricW2(a1, v22, a3, v53) )
    return 0LL;
  if ( a7 )
  {
    *(_BYTE *)(a2 + 35) = a6;
    *(_BYTE *)(v22 + 64) = a6;
  }
  v26 = (_WORD *)(a2 + 296);
  if ( a7 )
  {
    if ( (unsigned int)InitializeScripts() )
    {
      v27 = 0;
      v28 = &aScripts;
      while ( *v28 != a6 + 1000 )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= 0x13 )
        {
          v45 = qword_1C032C138;
          goto LABEL_33;
        }
      }
      _mm_lfence();
      v11 = v47;
      v45 = *((_QWORD *)&aScripts + 2 * v27 + 1);
LABEL_33:
      v29 = 32LL;
      v30 = v45 - (_QWORD)v26;
      while ( v29 != -2147483614 )
      {
        v31 = *(_WORD *)((char *)v26 + v30);
        if ( !v31 )
          break;
        *v26++ = v31;
        if ( !--v29 )
        {
          --v26;
          break;
        }
      }
      *v26 = 0;
    }
  }
  else
  {
    *v26 = 0;
  }
  v32 = Src;
  if ( Src )
    goto LABEL_67;
  if ( a4 == 5 )
  {
    v32 = (const wchar_t *)(a2 + 104);
LABEL_67:
    wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v32, 0x1FuLL);
    *(_WORD *)(a2 + 102) = 0;
  }
  *(_DWORD *)(a2 + 8) = 0;
  v33 = 2;
  v34 = *(_DWORD *)(v10 + 48);
  if ( (v34 & 1) != 0 )
  {
    if ( (*(_DWORD *)(v11 + 40) & 1) != 0
      || (*(_DWORD *)(v11 + 2184) & 0x2000) != 0
      || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL) != 1 )
    {
      v35 = 4;
    }
    else
    {
      v35 = 6;
    }
    *(_DWORD *)(a2 + 8) = v35;
  }
  else if ( (v34 & 2) != 0 )
  {
    v35 = 1;
    *(_DWORD *)(a2 + 8) = 1;
  }
  else
  {
    v35 = 0;
    if ( v34 < 0 )
    {
      *(_DWORD *)(a2 + 8) = 2;
      v35 = 2;
    }
  }
  if ( v53 )
  {
    v46 = v35 | 2;
    if ( (*(_DWORD *)(v10 + 48) & 0x3000010) == 0 )
      v33 = v46;
    *(_DWORD *)(a2 + 8) = v33;
    if ( *(_DWORD *)(v11 + 2140) == 2
      && (*(_DWORD *)(v10 + 48) & 0x3000010) != 0
      && (*(_DWORD *)(v11 + 2184) & 0x100) == 0 )
    {
      *(_DWORD *)(a2 + 8) = v33 | 0x80000000;
    }
  }
  return v50;
}
