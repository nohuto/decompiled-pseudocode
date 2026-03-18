/*
 * XREFs of GreGetCharWidthW @ 0x1C008F864
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C008F680 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C008F844 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008FFE0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C009DFA0 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharWidthW(HDC a1, unsigned int a2, unsigned int a3, unsigned __int16 *a4, char a5, float *a6)
{
  float *v6; // r15
  unsigned int v7; // r12d
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // edi
  float v13; // xmm6_4
  int v14; // r13d
  int v15; // edx
  unsigned int v16; // esi
  unsigned int v17; // r8d
  __int64 v18; // r12
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned __int16 *v21; // r9
  GLYPHDEF **p_pgdf; // r8
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v29; // eax
  _WORD *v30; // rcx
  GLYPHDEF **v31; // rcx
  __int64 v32; // rdx
  GLYPHDEF *v33; // rax
  unsigned __int16 v34[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h]
  __int64 v36; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-B8h]
  int v38; // [rsp+54h] [rbp-B4h]
  __int64 v39; // [rsp+58h] [rbp-B0h] BYREF
  struct _GLYPHPOS v40; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v41[64]; // [rsp+368h] [rbp+260h] BYREF

  v6 = a6;
  v7 = a2;
  v37 = a2;
  *(_DWORD *)v34 = a2;
  LODWORD(v35) = a3;
  DCOBJ::DCOBJ((DCOBJ *)&v39, a1);
  if ( !v39 )
  {
    EngSetLastError(6u);
    goto LABEL_42;
  }
  if ( !a6 )
  {
LABEL_42:
    v12 = 0;
    goto LABEL_30;
  }
  v36 = 0LL;
  v10 = RFONTOBJ::bInit((RFONTOBJ *)&v36, (struct XDCOBJ *)&v39, 0, (a5 & 8) != 0 ? 4 : 2);
  v11 = v36;
  if ( v10 )
    GreAcquireSemaphore(*(_QWORD *)(v36 + 504));
  if ( v11 )
  {
    v12 = 1;
    if ( (*(_DWORD *)(v11 + 84) & 4) != 0 )
    {
      if ( a4 )
      {
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v36, a4, a3);
      }
      else
      {
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v36, v34, 1u);
        v7 = *(_DWORD *)v34;
        v37 = *(_DWORD *)v34;
      }
    }
    v13 = *(float *)(v11 + 680);
    v14 = 0;
    if ( (a5 & 1) != 0 )
      v14 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v36);
    v15 = v35;
    v16 = 0;
    if ( !a4 )
      v16 = v7;
    v17 = v35 - 1;
    *(_DWORD *)v34 = v35 - 1;
    v18 = (unsigned __int64)a4 & -(__int64)(a4 != 0LL);
    while ( 1 )
    {
      if ( a4 )
      {
        v19 = (v18 - (__int64)a4) >> 1;
        if ( (unsigned int)v19 > v17 )
          goto LABEL_29;
        v20 = 32;
        v21 = (unsigned __int16 *)v18;
        if ( (unsigned int)(v15 - v19) < 0x20 )
          v20 = v15 - v19;
      }
      else
      {
        if ( v16 - v37 > v17 )
          goto LABEL_29;
        v20 = 32;
        v29 = v16;
        if ( v15 - v16 + v37 < 0x20 )
          v20 = v15 - v16 + v37;
        v30 = v41;
        if ( v16 < v20 + v16 )
        {
          do
            *v30++ = v29++;
          while ( v29 < v20 + v16 );
        }
        v21 = (unsigned __int16 *)v41;
      }
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics((RFONTOBJ *)&v36, v20, &v40, v21, (struct XDCOBJ *)&v39, 0LL) )
        goto LABEL_44;
      if ( (int)v20 > 0 )
      {
        if ( (a5 & 2) != 0 )
        {
          p_pgdf = &v40.pgdf;
          v23 = v20;
          do
          {
            LODWORD(v24) = 0;
            *(float *)&v38 = (float)(v14 + HIDWORD((*p_pgdf)[1].ppo)) * v13;
            v25 = (unsigned __int8)(v38 >> 23);
            if ( v25 <= 0x9E )
            {
              v26 = v38 & 0x7FFFFF | 0x800000LL;
              v27 = v25 < 0x76 ? v26 >> (118 - (unsigned __int8)v25) : v26 << ((unsigned __int8)v25 - 118);
              v24 = (v27 + 0x80000000LL) >> 32;
              if ( v38 < 0 )
                LODWORD(v24) = -(int)v24;
            }
            *(_DWORD *)v6 = v24;
            p_pgdf += 3;
            ++v6;
            --v23;
          }
          while ( v23 );
        }
        else
        {
          v31 = &v40.pgdf;
          v32 = v20;
          do
          {
            v33 = *v31;
            v31 += 3;
            *v6++ = (float)((float)SHIDWORD(v33[1].ppo) * 0.0625) * v13;
            --v32;
          }
          while ( v32 );
        }
      }
      if ( a4 )
        v18 += 2LL * (unsigned __int16)v20;
      else
        v16 += v20;
      v15 = v35;
      v17 = *(_DWORD *)v34;
    }
  }
  EngSetLastError(6u);
LABEL_44:
  v12 = 0;
LABEL_29:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v36);
LABEL_30:
  if ( v39 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v39);
  return v12;
}
