/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C004B290
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C004B130 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C004A514 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C004B5E0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  __int64 v19; // rcx
  struct _GLYPHPOS *v20; // r12
  struct _GLYPHPOS *v21; // r8
  float *v22; // r9
  GLYPHDEF *pgdf; // rdx
  struct _GLYPHPOS *v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  int v30; // eax
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  struct _GLYPHPOS *v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  struct _GLYPHPOS v38[32]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v39[32]; // [rsp+378h] [rbp+270h] BYREF

  v6 = a2;
  *(_DWORD *)v31 = a2;
  v34 = a6;
  v36 = a6;
  DCOBJ::DCOBJ((DCOBJ *)&v37, a1);
  if ( v37 )
  {
    if ( a3 )
    {
      v32 = 0LL;
      v9 = RFONTOBJ::bInit((RFONTOBJ *)&v32, (struct XDCOBJ *)&v37, 0, (a5 & 2) != 0 ? 4 : 2);
      v10 = v32;
      if ( v9 )
        GreAcquireSemaphore(*(_QWORD *)(v32 + 504));
      if ( v10 )
      {
        v11 = 1;
        if ( (*(_DWORD *)(v10 + 84) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v32, a4, a3);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v32, v31, 1u);
            v6 = *(_DWORD *)v31;
          }
        }
        v12 = *(float *)(v10 + 680);
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)(v10 + 96) + 3080LL) )
        {
          while ( 1 )
          {
            v13 = a3;
            v33 = v38;
            if ( a3 > 0x20 )
              v13 = 32LL;
            LODWORD(v35) = v13;
            v14 = v13;
            if ( a4 )
            {
              v18 = a4;
              a4 = (unsigned __int16 *)((char *)a4 + v14 * 2);
            }
            else
            {
              v15 = 0LL;
              v16 = v39;
              v17 = (unsigned int)v13;
              if ( v39 > &v39[v14] )
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
              v18 = v39;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics((RFONTOBJ *)&v32, v13, v38, v18, (struct XDCOBJ *)&v37, 0LL) )
              break;
            v20 = &v38[v13];
            if ( (a5 & 1) != 0 )
            {
              if ( v38 < v20 )
              {
                v25 = v33;
                v13 = v34;
                do
                {
                  LODWORD(v33) = 0;
                  bFToL(v19, &v33, 0LL);
                  *(_DWORD *)v31 &= v26;
                  bFToL(v27, v31, v26);
                  LODWORD(v34) = v28 & v34;
                  bFToL(v29, &v34, v28);
                  ++v25;
                  v30 = *(_DWORD *)v31 - (_DWORD)v33;
                  *(_DWORD *)v13 = (_DWORD)v33;
                  *(_DWORD *)(v13 + 4) = v30;
                  *(_DWORD *)(v13 + 8) = v34 - *(_DWORD *)v31;
                  v13 += 12LL;
                }
                while ( v25 < v20 );
                v34 = v13;
                v11 = 1;
                LODWORD(v13) = v35;
              }
            }
            else if ( v38 < v20 )
            {
              v21 = v33;
              v22 = (float *)v36;
              do
              {
                pgdf = v21->pgdf;
                ++v21;
                *v22 = (float)SLODWORD(pgdf[2].pgb) * v12;
                v22[1] = (float)(HIDWORD(pgdf[2].ppo) - LODWORD(pgdf[2].pgb)) * v12;
                v22[2] = (float)(HIDWORD(pgdf[1].ppo) - HIDWORD(pgdf[2].ppo)) * v12;
                v22 += 3;
              }
              while ( v21 < v20 );
              v36 = (__int64)v22;
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
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
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
  if ( v37 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v37);
  return v11;
}
