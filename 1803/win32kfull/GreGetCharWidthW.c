/*
 * XREFs of GreGetCharWidthW @ 0x1C00F87A4
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C00F85F0 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00870A4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0087520 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharWidthW(HDC a1, unsigned int a2, unsigned int a3, unsigned __int16 *a4, char a5, float *a6)
{
  float *v6; // r15
  unsigned int v7; // r12d
  unsigned __int16 *v8; // rsi
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // edi
  float v13; // xmm6_4
  int v14; // r8d
  unsigned int v15; // r14d
  unsigned int v16; // edx
  __int64 v17; // r13
  int v18; // ebx
  unsigned int v19; // eax
  unsigned __int16 *v20; // rcx
  unsigned __int16 *v21; // r9
  unsigned int v22; // esi
  GLYPHDEF **p_pgdf; // r15
  _DWORD *v24; // r14
  __int64 v25; // r12
  GLYPHDEF *v26; // rax
  __int64 v28; // rcx
  GLYPHDEF **v29; // rcx
  __int64 v30; // rdx
  GLYPHDEF *v31; // rax
  unsigned __int16 v32[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h]
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-B8h]
  unsigned int v36; // [rsp+54h] [rbp-B4h]
  __int64 v37; // [rsp+58h] [rbp-B0h]
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int16 *v41; // [rsp+80h] [rbp-88h]
  struct _GLYPHPOS v42; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 v43[32]; // [rsp+388h] [rbp+280h] BYREF

  v6 = a6;
  v7 = a2;
  v35 = a2;
  v8 = a4;
  *(_DWORD *)v32 = a2;
  v41 = a4;
  LODWORD(v33) = a3;
  v34 = (__int64)a6;
  MDCOBJ::MDCOBJ((MDCOBJ *)&v40, a1);
  if ( !v40 )
  {
    EngSetLastError(6u);
    goto LABEL_37;
  }
  if ( !a6 )
  {
LABEL_37:
    v12 = 0;
    goto LABEL_29;
  }
  LODWORD(v39) = 0;
  v38 = 0LL;
  v10 = RFONTOBJ::bInit((RFONTOBJ *)&v38, (struct XDCOBJ *)&v40, 0, (a5 & 8) != 0 ? 4 : 2);
  v11 = v38;
  if ( v10 )
    GreAcquireSemaphore(*(_QWORD *)(v38 + 496));
  if ( v11 )
  {
    v12 = 1;
    if ( (*(_DWORD *)(v11 + 68) & 4) != 0 )
    {
      if ( v8 )
      {
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v38, v8, a3);
      }
      else
      {
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v38, v32, 1u);
        v7 = *(_DWORD *)v32;
        v35 = *(_DWORD *)v32;
      }
    }
    *(_DWORD *)v32 = 0;
    v13 = *(float *)(v11 + 664);
    if ( (a5 & 1) != 0 )
      *(_DWORD *)v32 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v38);
    v14 = v33;
    v15 = 0;
    if ( !v8 )
      v15 = v7;
    v16 = v33 - 1;
    v36 = v15;
    LODWORD(v37) = v33 - 1;
    v17 = (unsigned __int64)v8 & -(__int64)(v8 != 0LL);
    while ( 1 )
    {
      if ( v8 )
      {
        v28 = (v17 - (__int64)v8) >> 1;
        if ( (unsigned int)v28 > v16 )
          goto LABEL_28;
        v18 = 32;
        v21 = (unsigned __int16 *)v17;
        if ( (unsigned int)(v14 - v28) < 0x20 )
          v18 = v14 - v28;
      }
      else
      {
        if ( v15 - v7 > v16 )
          goto LABEL_28;
        v18 = 32;
        v19 = v15;
        if ( v7 + v14 - v15 < 0x20 )
          v18 = v7 + v14 - v15;
        v20 = v43;
        if ( v15 < v18 + v15 )
        {
          do
            *v20++ = v19++;
          while ( v19 < v18 + v15 );
        }
        v21 = v43;
      }
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                            (RFONTOBJ *)&v38,
                            (struct _FONTFILEVIEW *)(unsigned int)v18,
                            &v42,
                            v21,
                            (struct XDCOBJ *)&v40,
                            0LL) )
        goto LABEL_40;
      if ( (a5 & 2) != 0 )
      {
        if ( v18 > 0 )
        {
          v22 = *(_DWORD *)v32;
          p_pgdf = &v42.pgdf;
          v24 = (_DWORD *)v34;
          v25 = (unsigned int)v18;
          do
          {
            v26 = *p_pgdf;
            LODWORD(v34) = 0;
            bFToL((float)(int)(v22 + HIDWORD(v26[1].ppo)) * v13, (int *)&v34, 0);
            p_pgdf += 3;
            *v24++ = v34;
            --v25;
          }
          while ( v25 );
          v8 = v41;
          v7 = v35;
          v34 = (__int64)v24;
          v15 = v36;
          v6 = (float *)v34;
        }
      }
      else if ( v18 > 0 )
      {
        v29 = &v42.pgdf;
        v30 = (unsigned int)v18;
        do
        {
          v31 = *v29;
          v29 += 3;
          *v6++ = (float)((float)SHIDWORD(v31[1].ppo) * 0.0625) * v13;
          --v30;
        }
        while ( v30 );
        v34 = (__int64)v6;
      }
      if ( v8 )
      {
        v17 += 2LL * (unsigned __int16)v18;
      }
      else
      {
        v15 += v18;
        v36 = v15;
      }
      v16 = v37;
      v14 = v33;
    }
  }
  EngSetLastError(6u);
LABEL_40:
  v12 = 0;
LABEL_28:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
LABEL_29:
  if ( v40 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v40);
  return v12;
}
