/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C00805C4
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C0080120 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C007D5D8 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0083C88 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, __int64 a6)
{
  int v6; // r13d
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rbx
  float v12; // xmm6_4
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int16 *v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int16 *v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  struct _GLYPHPOS *v20; // r12
  struct _GLYPHPOS *v21; // r15
  _DWORD *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  struct _GLYPHPOS *v28; // r8
  float *v29; // r9
  GLYPHDEF *pgdf; // rdx
  unsigned __int16 v32[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _GLYPHPOS *v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-B8h]
  int v36; // [rsp+54h] [rbp-B4h]
  __int64 v37; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h] BYREF
  __int64 v41; // [rsp+80h] [rbp-88h] BYREF
  struct _GLYPHPOS v42[32]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int16 v43[32]; // [rsp+3A8h] [rbp+2A0h] BYREF

  v6 = a2;
  *(_DWORD *)v32 = a2;
  v35 = a3;
  v34 = a6;
  v8 = a3;
  v39 = a6;
  DCOBJ::DCOBJ((DCOBJ *)&v40, a1);
  v9 = 0;
  if ( v40 )
  {
    if ( v8 )
    {
      LODWORD(v38) = 0;
      v37 = 0LL;
      v10 = RFONTOBJ::bInit((RFONTOBJ *)&v37, (struct XDCOBJ *)&v40, 0, (a5 & 2) != 0 ? 4 : 2);
      v11 = v37;
      if ( v10 )
        GreAcquireSemaphore(*(_QWORD *)(v37 + 504));
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 84) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v37, a4, v8);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v37, v32, 1u);
            v6 = *(_DWORD *)v32;
          }
        }
        v12 = *(float *)(v11 + 680);
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)(v11 + 96) + 3080LL) )
        {
          while ( 1 )
          {
            v13 = v8;
            v33 = v42;
            if ( v8 > 0x20 )
              v13 = 32LL;
            v36 = v13;
            v14 = v13;
            if ( a4 )
            {
              v15 = a4;
              a4 = (unsigned __int16 *)((char *)a4 + v14 * 2);
            }
            else
            {
              v16 = 0LL;
              v17 = v43;
              v18 = (unsigned int)v13;
              if ( v43 > &v43[v14] )
                v18 = 0LL;
              if ( v18 )
              {
                do
                {
                  *v17 = v6;
                  ++v16;
                  ++v6;
                  ++v17;
                }
                while ( v16 < v18 );
              }
              v15 = v43;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics((RFONTOBJ *)&v37, v13, v42, v15, (struct XDCOBJ *)&v40, 0LL) )
              break;
            v20 = &v42[v13];
            if ( (a5 & 1) != 0 )
            {
              if ( v42 < v20 )
              {
                v21 = v33;
                v22 = (_DWORD *)v34;
                do
                {
                  LODWORD(v33) = 0;
                  bFToL(v19, &v33, 0LL);
                  *(_DWORD *)v32 = 0;
                  bFToL(v23, v32, v24);
                  LODWORD(v34) = 0;
                  bFToL(v25, &v34, v26);
                  ++v21;
                  v27 = *(_DWORD *)v32 - (_DWORD)v33;
                  *v22 = (_DWORD)v33;
                  v22[1] = v27;
                  v22[2] = v34 - *(_DWORD *)v32;
                  v22 += 3;
                }
                while ( v21 < v20 );
                LODWORD(v13) = v36;
                v34 = (__int64)v22;
                v8 = v35;
              }
            }
            else if ( v42 < v20 )
            {
              v28 = v33;
              v29 = (float *)v39;
              do
              {
                pgdf = v28->pgdf;
                ++v28;
                *v29 = (float)SLODWORD(pgdf[2].pgb) * v12;
                v29[1] = (float)(HIDWORD(pgdf[2].ppo) - LODWORD(pgdf[2].pgb)) * v12;
                v29[2] = (float)(HIDWORD(pgdf[1].ppo) - HIDWORD(pgdf[2].ppo)) * v12;
                v29 += 3;
              }
              while ( v28 < v20 );
              v39 = (__int64)v29;
            }
            v8 -= v13;
            v35 = v8;
            if ( !v8 )
            {
              v9 = 1;
              break;
            }
          }
        }
      }
      else
      {
        EngSetLastError(6u);
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v37);
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)&v40);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(&v41);
  return v9;
}
