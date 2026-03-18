/*
 * XREFs of cjCopyFontDataW @ 0x1C0026910
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C0024880 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023F04 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C0024A80 (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C0024DAC (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C0024DEC (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00851BC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0085270 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     InitializeScripts @ 0x1C036D080 (InitializeScripts.c)
 */

__int64 __fastcall cjCopyFontDataW(struct XDCOBJ *a1, __int64 a2, __int64 a3, int a4, wchar_t *Src, int a6, int a7)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rbx
  struct _IFIMETRICS *v12; // rsi
  int x; // r13d
  __int64 v14; // rdx
  __int64 flInfo; // rcx
  int v16; // r12d
  int v17; // ebp
  char CurrentThreadDpiAwarenessContext; // al
  __int64 v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  char v22; // al
  __m128i v23; // xmm1
  __m128i v24; // xmm6
  unsigned int v25; // ebp
  unsigned int v26; // eax
  _DWORD *v27; // r8
  __int64 v28; // r15
  ULONG v29; // eax
  __int64 v30; // rbp
  __int64 dpwszStyleName; // rax
  int v32; // eax
  _DWORD *v33; // rcx
  _WORD *v34; // r15
  __int64 v35; // rax
  _DWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int16 v40; // ax
  _WORD *v41; // rax
  const wchar_t *v42; // r8
  int v43; // eax
  unsigned int v45; // edx
  int v46; // ecx
  unsigned int *v47; // rdx
  struct HLFONT__ *v48; // rdx
  signed int v49; // eax
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  __m128 v52; // xmm1
  int v53; // r12d
  int v54; // edx
  float v55; // [rsp+20h] [rbp-88h]
  int v56; // [rsp+40h] [rbp-68h]
  unsigned int v57; // [rsp+44h] [rbp-64h]
  __int64 v58; // [rsp+48h] [rbp-60h] BYREF
  struct LFONT *v59; // [rsp+50h] [rbp-58h] BYREF
  unsigned int y; // [rsp+E8h] [rbp+40h]

  v8 = 0LL;
  v9 = *(_QWORD *)a3;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v58 = v11;
  v12 = *(struct _IFIMETRICS **)(v9 + 32);
  v56 = *(_DWORD *)(v9 + 12) & 1;
  x = v12->ptlAspect.x;
  y = v12->ptlAspect.y;
  if ( v11 )
  {
    v14 = (unsigned int)-(v12->fwdWinAscender + v12->fwdWinDescender);
    if ( v12->fwdWinAscender + v12->fwdWinDescender != 0 && v12->fwdUnitsPerEm != 0 )
    {
      if ( (*(_DWORD *)(v9 + 12) & 1) != 0 && (v12->flInfo & 0x3000010) == 0 )
      {
        y = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v58);
        x = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v58);
      }
      flInfo = v12->flInfo;
      v16 = 4;
      if ( (flInfo & 0x3000010) != 0 )
      {
        v17 = 96;
        if ( (flInfo & 1) != 0 || (flInfo & 2) == 0 && (flInfo & 4) == 0 && (flInfo & 8) != 0 )
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(flInfo, v14);
          v20 = *(unsigned int *)(v11 + 40);
          if ( (v20 & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xFu) - 1 > 1 )
            y = 96;
          else
            y = *(_DWORD *)(v11 + 2180);
          v21 = W32GetCurrentThreadDpiAwarenessContext(v20, v19);
          flInfo = *(unsigned int *)(v11 + 40);
          if ( (flInfo & 1) == 0 || (x = 96, (v21 & 0xFu) - 1 <= 1) )
            x = *(_DWORD *)(v11 + 2176);
        }
        if ( v56 )
        {
          v48 = *(struct HLFONT__ **)(v11 + 1432);
          if ( !v48 )
            return v8;
          LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v59, v48, 0LL);
          if ( !v59 )
            return v8;
          v49 = *((_DWORD *)v59 + 69);
          if ( v49 >= 0 )
          {
            v50 = _mm_cvtsi32_si128(v49);
            v51 = _mm_cvtsi32_si128(v12->fwdWinAscender + v12->fwdWinDescender);
          }
          else
          {
            v50 = _mm_cvtsi32_si128(-v49);
            v51 = _mm_cvtsi32_si128(v12->fwdUnitsPerEm);
          }
          v52 = _mm_cvtepi32_ps(v50);
          v52.m128_f32[0] = v52.m128_f32[0] / _mm_cvtepi32_ps(v51).m128_f32[0];
          v24 = (__m128i)v52;
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v59);
        }
        else
        {
          v22 = W32GetCurrentThreadDpiAwarenessContext(flInfo, v14);
          if ( (*(_DWORD *)(v11 + 40) & 1) == 0 || (v22 & 0xFu) - 1 <= 1 )
            v17 = *(_DWORD *)(v11 + 2180);
          v23 = (__m128i)COERCE_UNSIGNED_INT((float)v17);
          *(float *)v23.m128i_i32 = (float)(*(float *)v23.m128i_i32 * 0.33333334) / (float)v12->fwdUnitsPerEm;
          v24 = v23;
        }
      }
      else
      {
        v24 = (__m128i)y;
      }
      if ( (unsigned int)bIFIMetricsToLogFontW2(a1, (struct tagENUMLOGFONTW *)(a2 + 12), v12, _mm_cvtsi128_si32(v24)) )
      {
        v25 = 368;
        v26 = *(_DWORD *)(*(_QWORD *)a3 + 128LL);
        *(_DWORD *)a2 = v26;
        v57 = v26;
        v27 = *(_DWORD **)(*(_QWORD *)a3 + 32LL);
        if ( (v27[12] & 0x4000) != 0 || IsVariableFont(*(struct _IFIMETRICS **)(*(_QWORD *)a3 + 32LL)) )
        {
          v45 = v27[1];
          if ( v45 <= 0xC )
            DbgPrint("Test it %d %llu \n", v45, 12LL);
          else
            v25 = 4 * *(_DWORD *)((char *)v27 + v27[51] + 4) + 368;
        }
        if ( ((*(_DWORD *)(a2 + 4) = v25, v28 = a2 + v25, v29 = v12->flInfo, LODWORD(v30) = 0, (v29 & 0x4000) != 0)
           || (v29 & 0x4000001) != 0
           && v12->cjIfiExtra > 0xC
           && (dpwszStyleName = (unsigned int)v12[1].dpwszStyleName, (_DWORD)dpwszStyleName)
           && *(ULONG *)((char *)&v12->cjIfiExtra + dpwszStyleName)
           && ((v46 = *(ULONG *)((char *)&v12->cjThis + dpwszStyleName), v46 == 134248052) || v46 == 134248035))
          && v12->cjIfiExtra > 0xC )
        {
          v47 = (ULONG *)((char *)&v12->cjThis + v12[1].dpwszStyleName);
          v30 = v47[1];
          if ( (unsigned int)v30 > 0x10 )
            v30 = 16LL;
          memmove((void *)(a2 + 360), v47, 4 * v30 + 8);
          v32 = v30;
        }
        else
        {
          v32 = 0;
          *(_DWORD *)(a2 + 360) = 134248036;
        }
        *(_DWORD *)(a2 + 364) = v32;
        v33 = (_DWORD *)(v28 + 108);
        if ( (v12->flInfo & 0x4000) != 0 && v12->cjIfiExtra > 0x10 )
        {
          memmove(v33, (char *)v12 + v12[1].dpwszFaceName, 40LL * (unsigned int)v30 + 8);
        }
        else
        {
          *(_DWORD *)(v28 + 112) = 0;
          *v33 = 134245473;
        }
        if ( (unsigned int)bIFIMetricsToTextMetricW2(a1, v28, a3, v56, v55, *(float *)v24.m128i_i32, y, x) )
        {
          if ( a7 )
          {
            *(_BYTE *)(a2 + 35) = a6;
            *(_BYTE *)(v28 + 64) = a6;
          }
          v34 = (_WORD *)(a2 + 296);
          if ( a7 )
          {
            if ( (unsigned int)InitializeScripts() )
            {
              v35 = 0LL;
              v36 = &aScripts;
              do
              {
                if ( *v36 == a6 + 1000 )
                  break;
                v35 = (unsigned int)(v35 + 1);
                v36 += 4;
              }
              while ( (unsigned int)v35 < 0x13 );
              if ( (unsigned int)v35 >= 0x13 )
              {
                v37 = qword_1C0317118;
              }
              else
              {
                _mm_lfence();
                v11 = v58;
                v37 = *((_QWORD *)&aScripts + 2 * v35 + 1);
              }
              v38 = 32LL;
              v39 = v37 - (_QWORD)v34;
              do
              {
                if ( v38 == -2147483614 )
                  break;
                v40 = *(_WORD *)((char *)v34 + v39);
                if ( !v40 )
                  break;
                *v34++ = v40;
                --v38;
              }
              while ( v38 );
              v41 = v34 - 1;
              if ( v38 )
                v41 = v34;
              *v41 = 0;
            }
          }
          else
          {
            *v34 = 0;
          }
          v42 = Src;
          if ( !Src )
          {
            if ( a4 != 5 )
            {
LABEL_44:
              *(_DWORD *)(a2 + 8) = 0;
              v43 = v12->flInfo;
              if ( (v43 & 1) != 0 )
              {
                if ( (*(_DWORD *)(v11 + 40) & 1) == 0
                  && (*(_DWORD *)(v11 + 2184) & 0x2000) == 0
                  && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL) == 1 )
                {
                  v16 = 6;
                }
                *(_DWORD *)(a2 + 8) = v16;
              }
              else if ( (v43 & 2) != 0 )
              {
                *(_DWORD *)(a2 + 8) = 1;
                v16 = 1;
              }
              else
              {
                v16 = 0;
                if ( v43 < 0 )
                {
                  *(_DWORD *)(a2 + 8) = 2;
                  v16 = 2;
                }
              }
              if ( v56 )
              {
                v53 = v16 | 2;
                v54 = 2;
                if ( (v12->flInfo & 0x3000010) == 0 )
                  v54 = v53;
                *(_DWORD *)(a2 + 8) = v54;
                if ( *(_DWORD *)(v11 + 2140) == 2
                  && (v12->flInfo & 0x3000010) != 0
                  && (*(_DWORD *)(v11 + 2184) & 0x100) == 0 )
                {
                  *(_DWORD *)(a2 + 8) = v54 | 0x80000000;
                }
              }
              return v57;
            }
            v42 = (const wchar_t *)(a2 + 104);
          }
          wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v42, 0x1FuLL);
          *(_WORD *)(a2 + 102) = 0;
          goto LABEL_44;
        }
      }
    }
  }
  return v8;
}
