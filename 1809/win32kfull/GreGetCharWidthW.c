/*
 * XREFs of GreGetCharWidthW @ 0x1C010D1C4
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C010D000 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C007D5D8 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0083C88 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0085324 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharWidthW(HDC a1, unsigned int a2, unsigned int a3, unsigned __int16 *a4, char a5, float *a6)
{
  float *v6; // r15
  unsigned int v7; // r12d
  unsigned __int16 *v8; // rsi
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdi
  float v13; // xmm6_4
  int v14; // r8d
  unsigned int v15; // r14d
  unsigned int v16; // edx
  __int64 v17; // r13
  int v18; // edi
  unsigned int v19; // eax
  _WORD *v20; // rcx
  unsigned __int16 *v21; // r9
  __int64 v22; // rcx
  unsigned int v23; // esi
  GLYPHDEF **p_pgdf; // r15
  _DWORD *v25; // r14
  __int64 v26; // r12
  GLYPHDEF *v27; // rax
  GLYPHDEF **v28; // rcx
  __int64 v29; // rdx
  GLYPHDEF *v30; // rax
  unsigned __int16 v32[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h]
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-B8h]
  unsigned int v36; // [rsp+54h] [rbp-B4h]
  __int64 v37; // [rsp+58h] [rbp-B0h]
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v40; // [rsp+70h] [rbp-98h]
  _QWORD v41[2]; // [rsp+78h] [rbp-90h] BYREF
  char v42[32]; // [rsp+88h] [rbp-80h] BYREF
  struct _GLYPHPOS v43; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v44[64]; // [rsp+3A8h] [rbp+2A0h] BYREF

  v6 = a6;
  v7 = a2;
  v35 = a2;
  v8 = a4;
  *(_DWORD *)v32 = a2;
  v40 = a4;
  LODWORD(v33) = a3;
  v34 = (__int64)a6;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v41, a1);
  if ( !v41[0] )
  {
    EngSetLastError(6u);
    goto LABEL_43;
  }
  if ( !a6 )
    goto LABEL_43;
  LODWORD(v39) = 0;
  v38 = 0LL;
  v11 = RFONTOBJ::bInit((RFONTOBJ *)&v38, (struct XDCOBJ *)v41, 0, (a5 & 8) != 0 ? 4 : 2);
  v12 = v38;
  if ( v11 )
    GreAcquireSemaphore(*(_QWORD *)(v38 + 504));
  if ( !v12 )
  {
    EngSetLastError(6u);
    goto LABEL_42;
  }
  if ( (*(_DWORD *)(v12 + 84) & 4) != 0 )
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
  v13 = *(float *)(v12 + 680);
  *(_DWORD *)v32 = 0;
  if ( (a5 & 1) != 0 )
    *(_DWORD *)v32 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v38);
  v14 = v33;
  v15 = 0;
  if ( !v8 )
    v15 = v7;
  v36 = v15;
  v16 = v33 - 1;
  v17 = (unsigned __int64)v8 & -(__int64)(v8 != 0LL);
  LODWORD(v37) = v33 - 1;
  while ( !v8 )
  {
    if ( v15 - v7 > v16 )
      goto LABEL_41;
    v18 = 32;
    v19 = v15;
    if ( v7 + v14 - v15 < 0x20 )
      v18 = v7 + v14 - v15;
    v20 = v44;
    if ( v15 < v18 + v15 )
    {
      do
        *v20++ = v19++;
      while ( v19 < v18 + v15 );
    }
    v21 = (unsigned __int16 *)v44;
LABEL_27:
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                          (RFONTOBJ *)&v38,
                          (struct RFONTOBJ *)(unsigned int)v18,
                          &v43,
                          v21,
                          (struct XDCOBJ *)v41,
                          0LL) )
      goto LABEL_42;
    if ( (a5 & 2) != 0 )
    {
      if ( v18 > 0 )
      {
        v23 = *(_DWORD *)v32;
        p_pgdf = &v43.pgdf;
        v25 = (_DWORD *)v34;
        v26 = (unsigned int)v18;
        do
        {
          v27 = *p_pgdf;
          LODWORD(v34) = 0;
          bFToL((float)(int)(v23 + HIDWORD(v27[1].ppo)) * v13, (int *)&v34, 0);
          p_pgdf += 3;
          *v25++ = v34;
          --v26;
        }
        while ( v26 );
        v8 = v40;
        v7 = v35;
        v34 = (__int64)v25;
        v15 = v36;
        v6 = (float *)v34;
      }
    }
    else if ( v18 > 0 )
    {
      v28 = &v43.pgdf;
      v29 = (unsigned int)v18;
      do
      {
        v30 = *v28;
        v28 += 3;
        *v6++ = (float)((float)SHIDWORD(v30[1].ppo) * 0.0625) * v13;
        --v29;
      }
      while ( v29 );
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
  v22 = (v17 - (__int64)v8) >> 1;
  if ( (unsigned int)v22 <= v16 )
  {
    v18 = 32;
    v21 = (unsigned __int16 *)v17;
    if ( (unsigned int)(v14 - v22) < 0x20 )
      v18 = v14 - v22;
    goto LABEL_27;
  }
LABEL_41:
  v10 = 1;
LABEL_42:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
LABEL_43:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v41);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v42);
  return v10;
}
