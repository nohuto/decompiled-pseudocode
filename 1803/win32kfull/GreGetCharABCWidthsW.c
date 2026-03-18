/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C00DFB54
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C00DFA00 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00870A4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, __int64 a6)
{
  int v6; // r13d
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // edi
  float v12; // xmm6_4
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int16 *v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int16 *v18; // r9
  struct _GLYPHPOS *v19; // r12
  struct _GLYPHPOS *v20; // r8
  float *v21; // r9
  GLYPHDEF *v22; // rdx
  struct _GLYPHPOS *v24; // rdi
  GLYPHDEF *pgdf; // rbx
  __m128i v26; // xmm0
  int v27; // r8d
  __m128i v28; // xmm0
  int v29; // r8d
  int v30; // eax
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _GLYPHPOS *v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h]
  __int64 v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h]
  _QWORD v38[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _GLYPHPOS v39[32]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 v40[32]; // [rsp+388h] [rbp+280h] BYREF

  v6 = a2;
  *(_DWORD *)v31 = a2;
  v33 = a6;
  v37 = a6;
  MDCOBJ::MDCOBJ((MDCOBJ *)v38, a1);
  if ( v38[0] )
  {
    if ( a3 )
    {
      LODWORD(v36) = 0;
      v35 = 0LL;
      v9 = RFONTOBJ::bInit((RFONTOBJ *)&v35, (struct XDCOBJ *)v38, 0, (a5 & 2) != 0 ? 4 : 2);
      v10 = v35;
      if ( v9 )
        GreAcquireSemaphore(*(_QWORD *)(v35 + 496));
      if ( v10 )
      {
        v11 = 1;
        if ( (*(_DWORD *)(v10 + 68) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v35, a4, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v35, v31, 1u);
            v6 = *(_DWORD *)v31;
          }
        }
        v12 = *(float *)(v10 + 664);
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)(v10 + 80) + 3072LL) )
        {
          while ( 1 )
          {
            v13 = a3;
            v32 = v39;
            if ( a3 > 0x20 )
              v13 = 32LL;
            LODWORD(v34) = v13;
            v14 = v13;
            if ( a4 )
            {
              v18 = a4;
              a4 = (unsigned __int16 *)((char *)a4 + v14 * 2);
            }
            else
            {
              v15 = 0LL;
              v16 = v40;
              v17 = (unsigned int)v13;
              if ( v40 > &v40[v14] )
                v17 = 0LL;
              if ( v17 )
              {
                do
                {
                  *v16 = v6;
                  ++v15;
                  ++v6;
                  ++v16;
                }
                while ( v15 < v17 );
              }
              v18 = v40;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                  (RFONTOBJ *)&v35,
                                  (struct _FONTFILEVIEW *)(unsigned int)v13,
                                  v39,
                                  v18,
                                  (struct XDCOBJ *)v38,
                                  0LL) )
              break;
            v19 = &v39[v13];
            if ( (a5 & 1) != 0 )
            {
              if ( v39 < v19 )
              {
                v24 = v32;
                v13 = v33;
                do
                {
                  pgdf = v24->pgdf;
                  LODWORD(v32) = 0;
                  bFToL((float)SLODWORD(pgdf[2].pgb) * v12, (int *)&v32, 0);
                  v26 = _mm_cvtsi32_si128(HIDWORD(pgdf[2].ppo));
                  *(_DWORD *)v31 &= v27;
                  bFToL(_mm_cvtepi32_ps(v26).m128_f32[0] * v12, (int *)v31, v27);
                  v28 = _mm_cvtsi32_si128(HIDWORD(pgdf[1].ppo));
                  LODWORD(v33) = v29 & v33;
                  bFToL(_mm_cvtepi32_ps(v28).m128_f32[0] * v12, (int *)&v33, v29);
                  ++v24;
                  v30 = *(_DWORD *)v31 - (_DWORD)v32;
                  *(_DWORD *)v13 = (_DWORD)v32;
                  *(_DWORD *)(v13 + 4) = v30;
                  *(_DWORD *)(v13 + 8) = v33 - *(_DWORD *)v31;
                  v13 += 12LL;
                }
                while ( v24 < v19 );
                v33 = v13;
                v11 = 1;
                LODWORD(v13) = v34;
              }
            }
            else if ( v39 < v19 )
            {
              v20 = v32;
              v21 = (float *)v37;
              do
              {
                v22 = v20->pgdf;
                ++v20;
                *v21 = (float)SLODWORD(v22[2].pgb) * v12;
                v21[1] = (float)(HIDWORD(v22[2].ppo) - LODWORD(v22[2].pgb)) * v12;
                v21[2] = (float)(HIDWORD(v22[1].ppo) - HIDWORD(v22[2].ppo)) * v12;
                v21 += 3;
              }
              while ( v20 < v19 );
              v37 = (__int64)v21;
            }
            a3 -= v13;
            if ( !a3 )
              goto LABEL_25;
          }
        }
      }
      else
      {
        EngSetLastError(6u);
      }
      v11 = 0;
LABEL_25:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v35);
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    EngSetLastError(6u);
    v11 = 0;
  }
  if ( v38[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v38);
  return v11;
}
