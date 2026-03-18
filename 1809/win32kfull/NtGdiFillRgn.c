/*
 * XREFs of NtGdiFillRgn @ 0x1C013DCE0
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C013B8B8 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0055B68 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0057D8C (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C009DE80 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C0101B78 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0101C00 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C013E2E4 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     EngPaint @ 0x1C013E320 (EngPaint.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C013EA14 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C013F0A0 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z @ 0x1C013F0F8 (-GreScaleValuesInternal@@YAHAEAVXDCOBJ@@PEAJI@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013F150 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall NtGdiFillRgn(HDC a1, HRGN a2, HBRUSH a3)
{
  unsigned int v4; // esi
  int v6; // r14d
  unsigned __int16 v8; // dx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // r12d
  REGION *v12; // rcx
  DC *v13; // rax
  __int64 v14; // r13
  char *v15; // rcx
  struct REGION *v16; // rax
  DC *v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdi
  struct ECLIPOBJ *v20; // rdx
  struct BRUSH *v21; // r15
  MIX mix; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v26; // [rsp+40h] [rbp-C0h]
  DC *v27[6]; // [rsp+48h] [rbp-B8h] BYREF
  REGION *v28; // [rsp+78h] [rbp-88h]
  REGION *v29[7]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v30[2]; // [rsp+B8h] [rbp-48h] BYREF
  __m128i rclBounds; // [rsp+C8h] [rbp-38h] BYREF
  BRUSHOBJ pbo; // [rsp+E0h] [rbp-20h] BYREF
  int v33; // [rsp+FCh] [rbp-4h]
  __int64 v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  char *v36; // [rsp+118h] [rbp+18h]
  __int64 v37; // [rsp+138h] [rbp+38h]
  __int128 v38; // [rsp+140h] [rbp+40h]
  int v39; // [rsp+158h] [rbp+58h]
  struct BRUSH *v40[10]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v41[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v42; // [rsp+1C8h] [rbp+C8h]
  char v43; // [rsp+1D8h] [rbp+D8h]
  _BYTE v44[96]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v45; // [rsp+240h] [rbp+140h] BYREF
  CLIPOBJ pco; // [rsp+250h] [rbp+150h] BYREF
  __int64 v47; // [rsp+288h] [rbp+188h]
  __int64 v48; // [rsp+2A0h] [rbp+1A0h]
  int v49; // [rsp+2A8h] [rbp+1A8h]
  int v50; // [rsp+2D0h] [rbp+1D0h]
  __int64 v51; // [rsp+2E0h] [rbp+1E0h]

  v4 = 0;
  v26 = 0;
  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v28 = 0LL;
  if ( !RFONTOBJ::bValid((RFONTOBJ *)v27) )
    goto LABEL_54;
  v8 = *((_WORD *)v27[0] + 6);
  if ( v8 == 1 )
  {
    if ( (*((_DWORD *)v27[0] + 9) & 0x10000) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v30, (struct XDCOBJ *)v27, -2147483132);
      v11 = *(_DWORD *)(*((_QWORD *)v27[0] + 122) + 340LL) & 0x802;
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v29, a2, 0, 0);
      if ( !v29[0] )
      {
LABEL_52:
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v29);
        if ( v26 )
        {
          v24 = UserReferenceDwmApiPort(v23);
          DwmSyncFlushAndWaitForBatch(v24);
        }
        goto LABEL_54;
      }
      if ( v11 != 2050 )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v41);
        if ( !v42 )
        {
          EngSetLastError(8u);
LABEL_12:
          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v41);
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v29);
          goto LABEL_55;
        }
        if ( !v30[0] || !RGNOBJ::bCreate((RGNOBJ *)v29, (struct EPATHOBJ *)v41, (struct EXFORMOBJ *)v30) )
          goto LABEL_12;
        *(_QWORD *)&v45.left = 0LL;
        v45.right = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v45, (struct EPATHOBJ *)v41, 1u, 0LL);
        if ( !*(_QWORD *)&v45.left )
        {
          EngSetLastError(8u);
          if ( v45.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
          goto LABEL_12;
        }
        v28 = v29[0];
        v29[0] = *(REGION **)&v45.left;
        if ( v45.right == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v41);
      }
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v29) == 1 )
        goto LABEL_49;
      v45 = 0LL;
      v45 = *(struct _RECTL *)((char *)v29[0] + 88);
      if ( (*((_DWORD *)v27[0] + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v27, (struct ERECTL *)&v45);
      v40[3] = (struct BRUSH *)v27;
      if ( !ERECTL::bEmpty((ERECTL *)&v45) )
        v26 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)v40, &v45);
      if ( !*((_QWORD *)v27[0] + 62) )
      {
LABEL_49:
        v6 = 1;
LABEL_50:
        if ( v11 != 2050 )
        {
          REGION::vDeleteREGION(v29[0]);
          v29[0] = v28;
        }
        goto LABEL_52;
      }
      DCOBJ::DCOBJ((DCOBJ *)v44);
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v41, (struct XDCOBJ *)v27, 0);
      v12 = v29[0];
      v13 = v27[0];
      if ( !v29[0] )
        *((_DWORD *)v27[0] + 9) |= 0x10u;
      *((_QWORD *)v13 + 142) = v12;
      v14 = *((_QWORD *)v27[0] + 62);
      if ( (v43 & 1) == 0 || !(unsigned int)DC::bTightenRao(v27[0]) )
      {
        v6 = XDCOBJ::bFullScreen((XDCOBJ *)v27);
        goto LABEL_48;
      }
      v15 = (char *)v27[0] + 1024;
      if ( (*((_DWORD *)v27[0] + 10) & 1) == 0 )
        v15 = (char *)v27[0] + 1016;
      v45.left += *(_DWORD *)v15;
      v45.right += *(_DWORD *)v15;
      v45.top += *((_DWORD *)v15 + 1);
      v45.bottom += *((_DWORD *)v15 + 1);
      GreScaleValuesInternal((struct XDCOBJ *)v27, &v45.left, 4u);
      v16 = XDCOBJ::prgnEffRao(v27);
      v47 = 0LL;
      v48 = 0LL;
      v49 = 0;
      v50 = 1;
      v51 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v16, (struct ERECTL *)&v45, 0);
      if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
      {
        v6 = 1;
LABEL_35:
        v17 = v27[0];
LABEL_48:
        *((_DWORD *)v17 + 9) |= 0x10u;
        *((_QWORD *)v17 + 142) = 0LL;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v41);
        DCOBJ::~DCOBJ((DCOBJ *)v44);
        goto LABEL_50;
      }
      v18 = *(_QWORD *)(v14 + 128);
      v19 = *((_QWORD *)v27[0] + 11);
      v33 = -1;
      v37 = 0LL;
      v38 = 0LL;
      pbo.pvRbrush = 0LL;
      pbo.flColorType = 0;
      v34 = 0LL;
      v35 = 0LL;
      v39 = 0;
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v40, a3);
      v21 = 0LL;
      if ( v40[0] )
        v21 = v40[0];
      if ( (*((_DWORD *)v27[0] + 9) & 0xE0) != 0 )
      {
        if ( !v21 )
        {
LABEL_46:
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v40);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
          goto LABEL_35;
        }
        if ( (*((_DWORD *)v21 + 10) & 0x100) == 0 )
        {
          rclBounds = (__m128i)pco.rclBounds;
          XDCOBJ::vAccumulateTight((XDCOBJ *)v27, v20, &rclBounds);
        }
      }
      if ( v21 )
      {
        bSyncBrushObj(v21);
        EBRUSHOBJ::vInitBrush(&pbo, v27[0], v21, v19, v18, v14, 1);
        v36 = (char *)v27[0] + 176;
        if ( (*((_DWORD *)v21 + 10) & 0x100) == 0 )
        {
          mix = EBRUSHOBJ::mixBest(
                  (EBRUSHOBJ *)&pbo,
                  *(_BYTE *)(*((_QWORD *)v27[0] + 122) + 212LL),
                  *(_BYTE *)(*((_QWORD *)v27[0] + 122) + 213LL));
          ++*(_DWORD *)(v14 + 92);
          EngPaint((SURFOBJ *)(v14 + 24), &pco, &pbo, (POINTL *)v27[0] + 150, mix);
          v6 = 1;
        }
        BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v40);
      }
      goto LABEL_46;
    }
LABEL_54:
    v4 = v6;
    goto LABEL_55;
  }
  v9 = *((_QWORD *)v27[0] + 6);
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 40);
  else
    v10 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(21LL, v10, v8);
  EngSetLastError(0x57u);
LABEL_55:
  DCOBJ::~DCOBJ((DCOBJ *)v27);
  return v4;
}
