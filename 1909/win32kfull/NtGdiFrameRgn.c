/*
 * XREFs of NtGdiFrameRgn @ 0x1C01467C0
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0147384 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A22B4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A3D3C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A3D64 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C00A417C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00A8A78 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00AAE4C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C00CDFD4 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00DE2F0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E2FC8 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E3048 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00F2BBC (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00F3B10 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C0148518 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     EngPaint @ 0x1C0148550 (EngPaint.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C014860C (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C0148664 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C01486BC (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0148FF4 (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v8; // esi
  int v9; // r12d
  int v10; // ebx
  int v11; // edi
  EPATHOBJ *v12; // rcx
  struct _RECTL v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // rcx
  DC *v16; // rax
  DC *v17; // rax
  __int64 v18; // r15
  char *v19; // rcx
  struct REGION *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  struct ECLIPOBJ *v23; // rdx
  struct BRUSH *v24; // r14
  DC *v25; // rax
  DC *v26; // rcx
  MIX mix; // eax
  DC *v28; // rax
  DC *v30; // rax
  __int64 v31; // rax
  DC *v32[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v33[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  _XFORMOBJ v36[2]; // [rsp+70h] [rbp-90h] BYREF
  int v37; // [rsp+7Ch] [rbp-84h]
  struct BRUSH *v38[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v39[4]; // [rsp+90h] [rbp-70h] BYREF
  _LINEATTRS v40; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-28h]
  __int16 v42; // [rsp+E0h] [rbp-20h]
  _BYTE v43[16]; // [rsp+100h] [rbp+0h] BYREF
  __m128i rclBounds; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+120h] [rbp+20h] BYREF
  int v46; // [rsp+13Ch] [rbp+3Ch]
  __int64 v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  char *v49; // [rsp+158h] [rbp+58h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  __int128 v51; // [rsp+180h] [rbp+80h]
  int v52; // [rsp+198h] [rbp+98h]
  _BYTE v53[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v54; // [rsp+1B8h] [rbp+B8h]
  _BYTE v55[8]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v56; // [rsp+238h] [rbp+138h]
  struct _RECTL v57; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v58[48]; // [rsp+2C0h] [rbp+1C0h] BYREF
  CLIPOBJ pco; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v60; // [rsp+340h] [rbp+240h]
  int v61; // [rsp+348h] [rbp+248h]
  int v62; // [rsp+370h] [rbp+270h]
  __int64 v63; // [rsp+380h] [rbp+280h]

  v8 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v32, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v39, a2, 1);
  v10 = abs32(a4);
  v11 = abs32(a5);
  if ( !v32[0] || (*((_DWORD *)v32[0] + 9) & 0x10000) != 0 || !v39[0] || v10 <= 0 || v11 <= 0 )
    goto LABEL_41;
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v39) == 1 )
  {
    v8 = 1;
    goto LABEL_41;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v53);
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v55);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v32, -2147483132);
  if ( v54 )
  {
    if ( v56 )
    {
      if ( RGNOBJ::bCreate((RGNOBJ *)v39, (struct EPATHOBJ *)v53, (struct EXFORMOBJ *)v43) )
      {
        v37 = 0;
        memset(&v40, 0, sizeof(v40));
        memset(v58, 0, 0x24uLL);
        *(_QWORD *)&v36[0].ulReserved = v58;
        EPATHOBJ::vWidenSetupForFrameRgn(v12, (struct XDCOBJ *)v32, v10, v11, (struct EXFORMOBJ *)v36, &v40);
        if ( (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v55, (struct EPATHOBJ *)v53, v36, &v40) )
        {
          if ( (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v55, (struct EPATHOBJ *)v53, v36, &v40) )
          {
            v35 = 0;
            RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v34, (struct EPATHOBJ *)v55, 2u, 0LL);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v34);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v33);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v33);
            if ( !v34 || !v33[0] )
              goto LABEL_38;
            if ( (*(_DWORD *)(*((_QWORD *)v32[0] + 122) + 340LL) & 0x802) == 0x802 )
            {
              v8 = RGNOBJ::bMerge((RGNOBJ *)v33, (struct RGNOBJ *)&v34, (struct RGNOBJ *)v39, BYTE1(gafjRgnOp));
            }
            else
            {
              v57.right = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v57, (struct EPATHOBJ *)v53, 1u, 0LL);
              RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v57);
              if ( *(_QWORD *)&v57.left )
                v8 = RGNOBJ::bMerge((RGNOBJ *)v33, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v57, BYTE1(gafjRgnOp)) != 0;
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v57);
            }
            if ( !v8 )
              goto LABEL_38;
            v57 = 0LL;
            v13 = *(struct _RECTL *)(v33[0] + 88LL);
            v40.pstyle = (PFLOAT_LONG)v32;
            v57 = v13;
            if ( !ERECTL::bEmpty((ERECTL *)&v57) )
              v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v40, &v57);
            if ( (*((_DWORD *)v32[0] + 9) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)v32, (struct ERECTL *)&v57);
            if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v32) || !*(_QWORD *)(v14 + 496) )
              goto LABEL_38;
            *(_QWORD *)&v40.elStyleState.e = 0LL;
            v41 = 0LL;
            v42 = 256;
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v40, (struct XDCOBJ *)v32, 0);
            v15 = v33[0];
            v16 = v32[0];
            if ( !v33[0] )
              *((_DWORD *)v32[0] + 9) |= 0x10u;
            *((_QWORD *)v16 + 139) = v15;
            v17 = v32[0];
            v18 = *((_QWORD *)v32[0] + 62);
            if ( ((__int64)v40.pstyle & 1) != 0 )
            {
              if ( (unsigned int)DC::bTightenRao(v32[0]) )
              {
                v19 = (char *)v32[0] + 1024;
                if ( (*((_DWORD *)v32[0] + 10) & 1) == 0 )
                  v19 = (char *)v32[0] + 1016;
                v57.left += *(_DWORD *)v19;
                v57.right += *(_DWORD *)v19;
                v57.top += *((_DWORD *)v19 + 1);
                v57.bottom += *((_DWORD *)v19 + 1);
                GreScaleValuesInternal((struct XDCOBJ *)v32, &v57.left, 4u);
                v20 = XDCOBJ::prgnEffRao(v32);
                v60 = 0LL;
                v61 = 0;
                v62 = 1;
                v63 = 0LL;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v20, (struct ERECTL *)&v57, 0);
                if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
                {
                  v30 = v32[0];
                  *((_DWORD *)v32[0] + 9) |= 0x10u;
                  *((_QWORD *)v30 + 139) = 0LL;
                }
                else
                {
                  v21 = *(_QWORD *)(v18 + 128);
                  v22 = *((_QWORD *)v32[0] + 11);
                  v46 = -1;
                  v50 = 0LL;
                  v51 = 0LL;
                  pbo.pvRbrush = 0LL;
                  pbo.flColorType = 0;
                  v47 = 0LL;
                  v48 = 0LL;
                  v52 = 0;
                  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v38, a3);
                  v24 = v38[0];
                  v8 = 0;
                  v25 = v32[0];
                  if ( v38[0] )
                  {
                    if ( (*((_DWORD *)v32[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v38[0] + 10) & 0x100) == 0 )
                    {
                      rclBounds = (__m128i)pco.rclBounds;
                      XDCOBJ::vAccumulateTight((XDCOBJ *)v32, v23, &rclBounds);
                    }
                    bSyncBrushObj(v24);
                    EBRUSHOBJ::vInitBrush(&pbo, v32[0], v24, v22, v21, v18, 1);
                    v26 = v32[0];
                    v49 = (char *)v32[0] + 176;
                    if ( (*((_DWORD *)v24 + 10) & 0x100) != 0 )
                    {
                      *((_DWORD *)v32[0] + 9) |= 0x10u;
                      *((_QWORD *)v26 + 139) = 0LL;
                    }
                    else
                    {
                      mix = EBRUSHOBJ::mixBest(
                              (EBRUSHOBJ *)&pbo,
                              *(_BYTE *)(*((_QWORD *)v32[0] + 122) + 212LL),
                              *(_BYTE *)(*((_QWORD *)v32[0] + 122) + 213LL));
                      ++*(_DWORD *)(v18 + 92);
                      EngPaint((SURFOBJ *)(v18 + 24), &pco, &pbo, (POINTL *)v32[0] + 147, mix);
                      v28 = v32[0];
                      v8 = 1;
                      *((_DWORD *)v32[0] + 9) |= 0x10u;
                      *((_QWORD *)v28 + 139) = 0LL;
                    }
                    BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v38);
                  }
                  else
                  {
                    *((_DWORD *)v32[0] + 9) |= 0x10u;
                    *((_QWORD *)v25 + 139) = 0LL;
                  }
                  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v38);
                  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
                }
                goto LABEL_36;
              }
              v17 = v32[0];
            }
            *((_DWORD *)v17 + 9) |= 0x10u;
            *((_QWORD *)v17 + 139) = 0LL;
            v8 = XDCOBJ::bFullScreen((XDCOBJ *)v32);
LABEL_36:
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v40);
            if ( *(_QWORD *)&v40.elStyleState.e )
              DLODCOBJ::vUnlock((DLODCOBJ *)&v40.elStyleState);
LABEL_38:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v33);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
          }
        }
      }
    }
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v55);
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v53);
  if ( v9 )
  {
    v31 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v31);
  }
LABEL_41:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v39);
  if ( v32[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  return v8;
}
