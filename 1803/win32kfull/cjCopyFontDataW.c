/*
 * XREFs of cjCopyFontDataW @ 0x1C00CD24C
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C00CBA48 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0083964 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C00CC924 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C00CD094 (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00CE3D8 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00CE480 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C00CF5DC (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C00CF740 (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ?lfOutPrecision@IFIOBJ@@QEBAEXZ @ 0x1C00CFD6C (-lfOutPrecision@IFIOBJ@@QEBAEXZ.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C00CFE34 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall cjCopyFontDataW(__int64 a1, __int64 a2, PFEOBJ *a3, int a4, wchar_t *Src, unsigned int a6, int a7)
{
  int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v12; // rbx
  struct _IFIMETRICS *v13; // rsi
  unsigned int v14; // r13d
  __m128i v15; // xmm1
  __m128i v16; // xmm6
  unsigned int v17; // eax
  __int64 v18; // r12
  __int64 v19; // r15
  unsigned int v20; // r8d
  int v21; // eax
  _DWORD *v22; // rcx
  unsigned int v23; // r8d
  const wchar_t *v24; // r8
  int flInfo; // eax
  unsigned int *v27; // rdx
  struct HLFONT__ *v28; // rdx
  signed int v29; // eax
  __m128i v30; // xmm1
  __m128i v31; // xmm0
  __m128 v32; // xmm1
  int v33; // ebp
  int v34; // ecx
  struct LFONT *v35; // [rsp+48h] [rbp-60h] BYREF
  struct _IFIMETRICS *v36; // [rsp+50h] [rbp-58h] BYREF
  unsigned int x; // [rsp+E8h] [rbp+40h]

  v7 = 1;
  v8 = 0LL;
  v9 = *(_QWORD *)a3;
  v12 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v35 = (struct LFONT *)v12;
  v13 = *(struct _IFIMETRICS **)(v9 + 32);
  v14 = *(_DWORD *)(v9 + 12) & 1;
  v36 = v13;
  x = v13->ptlAspect.x;
  if ( !v12 || v13->fwdWinAscender + v13->fwdWinDescender == 0 || v13->fwdUnitsPerEm == 0 )
    return v8;
  if ( v14 )
  {
    if ( (v13->flInfo & 0x3000010) != 0 )
      goto LABEL_5;
    PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v35);
    x = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v35);
  }
  if ( (v13->flInfo & 0x3000010) == 0 )
  {
    v16 = (__m128i)x;
    goto LABEL_9;
  }
LABEL_5:
  if ( IFIOBJ::lfOutPrecision((IFIOBJ *)&v36) == 8 )
  {
    PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v35);
    PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v35);
  }
  if ( v14 )
  {
    v28 = *(struct HLFONT__ **)(v12 + 1424);
    if ( !v28 )
      return v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v35, v28, 0LL);
    if ( !v35 )
      return v8;
    v29 = *((_DWORD *)v35 + 69);
    if ( v29 >= 0 )
    {
      v30 = _mm_cvtsi32_si128(v29);
      v31 = _mm_cvtsi32_si128(v13->fwdWinAscender + v13->fwdWinDescender);
    }
    else
    {
      v30 = _mm_cvtsi32_si128(-v29);
      v31 = _mm_cvtsi32_si128(v13->fwdUnitsPerEm);
    }
    v32 = _mm_cvtepi32_ps(v30);
    v32.m128_f32[0] = v32.m128_f32[0] / _mm_cvtepi32_ps(v31).m128_f32[0];
    v16 = (__m128i)v32;
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v35);
  }
  else
  {
    v15 = (__m128i)COERCE_UNSIGNED_INT((float)(int)PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v35));
    *(float *)v15.m128i_i32 = (float)(*(float *)v15.m128i_i32 * 0.33333334) / (float)v13->fwdUnitsPerEm;
    v16 = v15;
  }
LABEL_9:
  if ( (unsigned int)bIFIMetricsToLogFontW2(a1, a2 + 12, v13, (unsigned int)_mm_cvtsi128_si32(v16)) )
  {
    if ( ((LODWORD(v35) = *(_DWORD *)(*(_QWORD *)a3 + 128LL),
           *(_DWORD *)a2 = (_DWORD)v35,
           v17 = PFEOBJ::dpNtmi(a3),
           LODWORD(v18) = 0,
           v19 = a2 + v17,
           *(_DWORD *)(a2 + 4) = v17,
           v20 = 16,
           (v13->flInfo & 0x4000) != 0)
       || IsVariableFont(v13))
      && v13->cjIfiExtra > 0xC )
    {
      v27 = (ULONG *)((char *)&v13->cjThis + v13[1].dpwszStyleName);
      v18 = v27[1];
      if ( (unsigned int)v18 > v20 )
        v18 = v20;
      memmove((void *)(a2 + 360), v27, 4 * v18 + 8);
      v21 = v18;
      v20 = 16;
    }
    else
    {
      v21 = 0;
      *(_DWORD *)(a2 + 360) = 134248036;
    }
    *(_DWORD *)(a2 + 364) = v21;
    v22 = (_DWORD *)(v19 + 108);
    if ( (v13->flInfo & 0x4000) != 0 && v13->cjIfiExtra > v20 )
    {
      memmove(v22, (char *)v13 + v13[1].dpwszFaceName, 40LL * (unsigned int)v18 + 8);
    }
    else
    {
      *(_DWORD *)(v19 + 112) = 0;
      *v22 = 134245473;
    }
    if ( (unsigned int)bIFIMetricsToTextMetricW2(a1, v19, a3, v14) )
    {
      if ( a7 )
      {
        *(_BYTE *)(a2 + 35) = a6;
        *(_BYTE *)(v19 + 64) = a6;
        vLookupScript(a6, (unsigned __int16 *)(a2 + 296), v23);
      }
      else
      {
        *(_WORD *)(a2 + 296) = 0;
      }
      v24 = Src;
      if ( !Src )
      {
        if ( a4 != 5 )
          goto LABEL_20;
        v24 = (const wchar_t *)(a2 + 104);
      }
      wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v24, 0x1FuLL);
      *(_WORD *)(a2 + 102) = 0;
LABEL_20:
      *(_DWORD *)(a2 + 8) = 0;
      flInfo = v13->flInfo;
      if ( (flInfo & 1) != 0 )
      {
        if ( (*(_DWORD *)(v12 + 40) & 1) != 0
          || (*(_DWORD *)(v12 + 2176) & 0x2000) != 0
          || (v7 = 6, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 68LL) != 1) )
        {
          v7 = 4;
        }
      }
      else if ( (flInfo & 2) == 0 )
      {
        v7 = 0;
        if ( flInfo < 0 )
        {
          *(_DWORD *)(a2 + 8) = 2;
          v7 = 2;
        }
        goto LABEL_25;
      }
      *(_DWORD *)(a2 + 8) = v7;
LABEL_25:
      if ( v14 )
      {
        v33 = v7 | 2;
        v34 = 2;
        if ( (v13->flInfo & 0x3000010) == 0 )
          v34 = v33;
        *(_DWORD *)(a2 + 8) = v34;
        if ( *(_DWORD *)(v12 + 2132) == 2 && (*(_DWORD *)(v12 + 2176) & 0x100) == 0 && (v13->flInfo & 0x3000010) != 0 )
          *(_DWORD *)(a2 + 8) = v34 | 0x80000000;
      }
      return (unsigned int)v35;
    }
  }
  return v8;
}
