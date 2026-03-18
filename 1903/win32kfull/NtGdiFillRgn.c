/*
 * XREFs of NtGdiFillRgn @ 0x1C01472A0
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C01465D4 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047FEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C005A87C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C005ED54 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00610E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C0076B94 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0108F18 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0108F98 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C0147768 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     EngPaint @ 0x1C01477A0 (EngPaint.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C014785C (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C01478B4 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C014790C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v4; // esi
  int v5; // r13d
  REGION *v6; // r12
  int v7; // ebx
  bool v8; // r14
  REGION *v9; // rcx
  DC *v10; // rax
  __int64 v11; // r15
  char *v12; // rcx
  struct REGION *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  struct ECLIPOBJ *v16; // rdx
  HBRUSH v17; // r14
  MIX mix; // eax
  DC *v19; // r8
  __int64 v21; // rax
  DC *v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v23; // [rsp+50h] [rbp-B0h]
  REGION *v24[3]; // [rsp+58h] [rbp-A8h] BYREF
  HBRUSH v25[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v26[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v27[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v28; // [rsp+98h] [rbp-68h]
  DC **v29; // [rsp+A8h] [rbp-58h]
  _QWORD v30[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v31; // [rsp+C0h] [rbp-40h]
  __m128i rclBounds; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+120h] [rbp+20h] BYREF
  int v34; // [rsp+13Ch] [rbp+3Ch]
  __int64 v35; // [rsp+140h] [rbp+40h]
  __int64 v36; // [rsp+148h] [rbp+48h]
  char *v37; // [rsp+158h] [rbp+58h]
  __int64 v38; // [rsp+178h] [rbp+78h]
  __int128 v39; // [rsp+180h] [rbp+80h]
  int v40; // [rsp+198h] [rbp+98h]
  struct _RECTL v41; // [rsp+1B0h] [rbp+B0h] BYREF
  CLIPOBJ pco; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v43; // [rsp+210h] [rbp+110h]
  int v44; // [rsp+218h] [rbp+118h]
  int v45; // [rsp+240h] [rbp+140h]
  __int64 v46; // [rsp+250h] [rbp+150h]

  v25[0] = a3;
  v4 = 0;
  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  v6 = 0LL;
  if ( !v22[0] || (*((_DWORD *)v22[0] + 9) & 0x10000) != 0 )
    goto LABEL_39;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v26, (struct XDCOBJ *)v22, -2147483132);
  v7 = *(_DWORD *)(*((_QWORD *)v22[0] + 122) + 340LL) & 0x802;
  v8 = v7 != 2050;
  v23 = v7 != 2050;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v24, a2, 0);
  if ( v24[0] )
  {
    if ( v7 == 2050 )
      goto LABEL_12;
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v27);
    if ( v28 )
    {
      if ( v26[0] && RGNOBJ::bCreate((RGNOBJ *)v24, (struct EPATHOBJ *)v27, (struct EXFORMOBJ *)v26) )
      {
        v41.right = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v41, (struct EPATHOBJ *)v27, 1u, 0LL);
        if ( *(_QWORD *)&v41.left )
        {
          v6 = v24[0];
          v24[0] = *(REGION **)&v41.left;
          if ( v41.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v27);
LABEL_12:
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v24) == 1 )
            goto LABEL_42;
          v41 = *(struct _RECTL *)((char *)v24[0] + 88);
          if ( (*((_DWORD *)v22[0] + 9) & 0xE0) != 0 )
            XDCOBJ::vAccumulate((XDCOBJ *)v22, (struct ERECTL *)&v41);
          v29 = v22;
          if ( !ERECTL::bEmpty((ERECTL *)&v41) )
            v5 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v27, &v41);
          if ( !*((_QWORD *)v22[0] + 62) )
          {
LABEL_42:
            v4 = 1;
LABEL_35:
            if ( v8 )
            {
              REGION::vDeleteREGION(v24[0]);
              v24[0] = v6;
            }
            goto LABEL_37;
          }
          v30[1] = 0LL;
          v30[0] = 0LL;
          v31 = 256;
          DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v27, (struct XDCOBJ *)v22, 0);
          v9 = v24[0];
          v10 = v22[0];
          if ( !v24[0] )
            *((_DWORD *)v22[0] + 9) |= 0x10u;
          *((_QWORD *)v10 + 139) = v9;
          v11 = *((_QWORD *)v22[0] + 62);
          if ( ((unsigned __int8)v29 & 1) != 0 && (unsigned int)DC::bTightenRao(v22[0]) )
          {
            v12 = (char *)v22[0] + 1024;
            if ( (*((_DWORD *)v22[0] + 10) & 1) == 0 )
              v12 = (char *)v22[0] + 1016;
            v41.left += *(_DWORD *)v12;
            v41.right += *(_DWORD *)v12;
            v41.top += *((_DWORD *)v12 + 1);
            v41.bottom += *((_DWORD *)v12 + 1);
            GreScaleValuesInternal((struct XDCOBJ *)v22, &v41.left, 4u);
            v13 = XDCOBJ::prgnEffRao(v22);
            v43 = 0LL;
            v44 = 0;
            v45 = 1;
            v46 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v13, (struct ERECTL *)&v41, 0);
            if ( !ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
            {
              v14 = *(_QWORD *)(v11 + 128);
              v15 = *((_QWORD *)v22[0] + 11);
              v34 = -1;
              v36 = 0LL;
              v38 = 0LL;
              v39 = 0LL;
              pbo.pvRbrush = 0LL;
              pbo.flColorType = 0;
              v35 = 0LL;
              v40 = 0;
              BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v25, v25[0]);
              v17 = 0LL;
              if ( v25[0] )
                v17 = v25[0];
              if ( (*((_DWORD *)v22[0] + 9) & 0xE0) != 0 )
              {
                if ( !v17 )
                {
LABEL_32:
                  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v25);
                  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
                  v19 = v22[0];
                  v8 = v23;
                  goto LABEL_33;
                }
                if ( ((_DWORD)v17[10] & 0x100) == 0 )
                {
                  rclBounds = (__m128i)pco.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v22, v16, &rclBounds);
                }
              }
              if ( v17 )
              {
                bSyncBrushObj((struct BRUSH *)v17);
                EBRUSHOBJ::vInitBrush(&pbo, v22[0], v17, v15, v14, v11, 1);
                v37 = (char *)v22[0] + 176;
                if ( ((_DWORD)v17[10] & 0x100) == 0 )
                {
                  mix = EBRUSHOBJ::mixBest(
                          (EBRUSHOBJ *)&pbo,
                          *(_BYTE *)(*((_QWORD *)v22[0] + 122) + 212LL),
                          *(_BYTE *)(*((_QWORD *)v22[0] + 122) + 213LL));
                  ++*(_DWORD *)(v11 + 92);
                  EngPaint((SURFOBJ *)(v11 + 24), &pco, &pbo, (POINTL *)v22[0] + 147, mix);
                  v4 = 1;
                }
                BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v25);
              }
              goto LABEL_32;
            }
            v19 = v22[0];
            v4 = 1;
          }
          else
          {
            v4 = XDCOBJ::bFullScreen((XDCOBJ *)v22);
          }
LABEL_33:
          *((_DWORD *)v19 + 9) |= 0x10u;
          *((_QWORD *)v19 + 139) = 0LL;
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v27);
          if ( v30[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v30);
          goto LABEL_35;
        }
        EngSetLastError(8u);
        if ( v41.right == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v27);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
    goto LABEL_39;
  }
LABEL_37:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v24);
  if ( v5 )
  {
    v21 = UserReferenceDwmApiPort();
    DwmSyncFlushAndWaitForBatch(v21);
  }
LABEL_39:
  if ( v22[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v22);
  return v4;
}
