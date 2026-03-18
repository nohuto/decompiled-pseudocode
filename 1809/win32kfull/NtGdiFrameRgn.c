/*
 * XREFs of NtGdiFrameRgn @ 0x1C0282B60
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C013B8B8 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
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
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
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
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014349C (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C014F120 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C02B1A44 (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v6; // esi
  int v9; // r14d
  int v10; // r12d
  int v11; // ebx
  int v12; // edi
  unsigned __int16 v13; // dx
  __int64 v14; // rax
  unsigned int v15; // ecx
  EPATHOBJ *v16; // rcx
  struct _RECTL v17; // xmm0
  __int64 v18; // r8
  __int64 v19; // rcx
  DC *v20; // rax
  DC *v21; // rax
  __int64 v22; // r13
  char *v23; // rcx
  struct REGION *v24; // rax
  DC *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  struct ECLIPOBJ *v28; // rdx
  struct BRUSH *v29; // r15
  DC *v30; // rax
  DC *v31; // rcx
  DC *v32; // rcx
  MIX mix; // eax
  DC *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  DC *v38[6]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v39[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  int v41; // [rsp+88h] [rbp-78h]
  _XFORMOBJ v42[2]; // [rsp+90h] [rbp-70h] BYREF
  int v43; // [rsp+9Ch] [rbp-64h]
  _BYTE v44[16]; // [rsp+A0h] [rbp-60h] BYREF
  __m128i rclBounds; // [rsp+B0h] [rbp-50h] BYREF
  _LINEATTRS v46; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v47[8]; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+150h] [rbp+50h] BYREF
  int v49; // [rsp+16Ch] [rbp+6Ch]
  __int64 v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  char *v52; // [rsp+188h] [rbp+88h]
  __int64 v53; // [rsp+1A8h] [rbp+A8h]
  __int128 v54; // [rsp+1B0h] [rbp+B0h]
  int v55; // [rsp+1C8h] [rbp+C8h]
  _BYTE v56[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v57; // [rsp+1E8h] [rbp+E8h]
  _BYTE v58[8]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v59; // [rsp+268h] [rbp+168h]
  _BYTE v60[32]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v61[80]; // [rsp+300h] [rbp+200h] BYREF
  struct _RECTL v62; // [rsp+350h] [rbp+250h] BYREF
  CLIPOBJ pco; // [rsp+360h] [rbp+260h] BYREF
  __int64 v64; // [rsp+398h] [rbp+298h]
  __int64 v65; // [rsp+3B0h] [rbp+2B0h]
  int v66; // [rsp+3B8h] [rbp+2B8h]
  int v67; // [rsp+3E0h] [rbp+2E0h]
  __int64 v68; // [rsp+3F0h] [rbp+2F0h]
  char v69; // [rsp+400h] [rbp+300h] BYREF

  v6 = 0;
  v9 = 0;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v47, a2, 1, 0);
  v11 = abs32(a4);
  v12 = abs32(a5);
  if ( !RFONTOBJ::bValid((RFONTOBJ *)v38) )
    goto LABEL_58;
  v13 = *((_WORD *)v38[0] + 6);
  if ( v13 == 1 )
  {
    if ( (*((_DWORD *)v38[0] + 9) & 0x10000) != 0 || !v47[0] || v11 <= 0 || v12 <= 0 )
      goto LABEL_58;
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v47) == 1 )
    {
      v9 = 1;
LABEL_58:
      v6 = v9;
      goto LABEL_59;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v56);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v58);
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v44, (struct XDCOBJ *)v38, -2147483132);
    if ( !v57
      || !v59
      || !RGNOBJ::bCreate((RGNOBJ *)v47, (struct EPATHOBJ *)v56, (struct EXFORMOBJ *)v44)
      || (v43 = 0,
          *(_QWORD *)&v42[0].ulReserved = &v69,
          EPATHOBJ::vWidenSetupForFrameRgn(v16, (struct XDCOBJ *)v38, v11, v12, (struct EXFORMOBJ *)v42, &v46),
          !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v58, (struct EPATHOBJ *)v56, v42, &v46))
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v58, (struct EPATHOBJ *)v56, v42, &v46) )
    {
LABEL_56:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v58);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v56);
      if ( v10 )
      {
        v36 = UserReferenceDwmApiPort(v35);
        DwmSyncFlushAndWaitForBatch(v36);
      }
      goto LABEL_58;
    }
    v40 = 0LL;
    v41 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v40, (struct EPATHOBJ *)v58, 2u, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v40);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v39);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v39);
    if ( !v40 || !v39[0] )
      goto LABEL_55;
    if ( (*(_DWORD *)(*((_QWORD *)v38[0] + 122) + 340LL) & 0x802) == 0x802 )
    {
      v9 = RGNOBJ::bMerge((RGNOBJ *)v39, (struct RGNOBJ *)&v40, (struct RGNOBJ *)v47, BYTE1(gafjRgnOp));
    }
    else
    {
      *(_QWORD *)&v62.left = 0LL;
      v62.right = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v62, (struct EPATHOBJ *)v56, 1u, 0LL);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v62);
      if ( *(_QWORD *)&v62.left )
        v9 = RGNOBJ::bMerge((RGNOBJ *)v39, (struct RGNOBJ *)&v40, (struct RGNOBJ *)&v62, BYTE1(gafjRgnOp)) != 0;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v62);
    }
    if ( !v9 )
      goto LABEL_55;
    v62 = 0LL;
    v17 = *(struct _RECTL *)(v39[0] + 88LL);
    v46.pstyle = (PFLOAT_LONG)v38;
    v62 = v17;
    if ( !ERECTL::bEmpty((ERECTL *)&v62) )
      v10 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v46, &v62);
    if ( (*((_DWORD *)v38[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v38, (struct ERECTL *)&v62);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v38) || !*(_QWORD *)(v18 + 496) )
    {
LABEL_55:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v39);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v40);
      goto LABEL_56;
    }
    DCOBJ::DCOBJ((DCOBJ *)v61);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v60, (struct XDCOBJ *)v38, 0);
    v19 = v39[0];
    v20 = v38[0];
    if ( !v39[0] )
      *((_DWORD *)v38[0] + 9) |= 0x10u;
    *((_QWORD *)v20 + 142) = v19;
    v21 = v38[0];
    v22 = *((_QWORD *)v38[0] + 62);
    if ( (v60[24] & 1) != 0 )
    {
      if ( (unsigned int)DC::bTightenRao(v38[0]) )
      {
        v23 = (char *)v38[0] + 1024;
        if ( (*((_DWORD *)v38[0] + 10) & 1) == 0 )
          v23 = (char *)v38[0] + 1016;
        v62.left += *(_DWORD *)v23;
        v62.right += *(_DWORD *)v23;
        v62.top += *((_DWORD *)v23 + 1);
        v62.bottom += *((_DWORD *)v23 + 1);
        GreScaleValuesInternal(v38, &v62.left, 4u);
        v24 = XDCOBJ::prgnEffRao(v38);
        v64 = 0LL;
        v65 = 0LL;
        v66 = 0;
        v67 = 1;
        v68 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v24, (struct ERECTL *)&v62, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v25 = v38[0];
          *((_DWORD *)v38[0] + 9) |= 0x10u;
          *((_QWORD *)v25 + 142) = 0LL;
        }
        else
        {
          v26 = *(_QWORD *)(v22 + 128);
          v27 = *((_QWORD *)v38[0] + 11);
          v49 = -1;
          v53 = 0LL;
          v54 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v50 = 0LL;
          v51 = 0LL;
          v55 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v46, a3);
          v29 = *(struct BRUSH **)&v46.fl;
          v9 = 0;
          if ( *(_QWORD *)&v46.fl )
          {
            v31 = v38[0];
            if ( (*((_DWORD *)v38[0] + 9) & 0xE0) != 0 && (*(_DWORD *)(*(_QWORD *)&v46.fl + 40LL) & 0x100) == 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v38, v28, &rclBounds);
              v31 = v38[0];
            }
            if ( v29 )
            {
              bSyncBrushObj(v29);
              EBRUSHOBJ::vInitBrush(&pbo, v38[0], v29, v27, v26, v22, 1);
              v32 = v38[0];
              v52 = (char *)v38[0] + 176;
              if ( (*((_DWORD *)v29 + 10) & 0x100) != 0 )
              {
                *((_DWORD *)v38[0] + 9) |= 0x10u;
                *((_QWORD *)v32 + 142) = 0LL;
              }
              else
              {
                mix = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)&pbo,
                        *(_BYTE *)(*((_QWORD *)v38[0] + 122) + 212LL),
                        *(_BYTE *)(*((_QWORD *)v38[0] + 122) + 213LL));
                ++*(_DWORD *)(v22 + 92);
                EngPaint((SURFOBJ *)(v22 + 24), &pco, &pbo, (POINTL *)v38[0] + 150, mix);
                v34 = v38[0];
                v9 = 1;
                *((_DWORD *)v38[0] + 9) |= 0x10u;
                *((_QWORD *)v34 + 142) = 0LL;
              }
              BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)&v46);
            }
            else
            {
              *((_DWORD *)v31 + 9) |= 0x10u;
              *((_QWORD *)v31 + 142) = 0LL;
            }
          }
          else
          {
            v30 = v38[0];
            *((_DWORD *)v38[0] + 9) |= 0x10u;
            *((_QWORD *)v30 + 142) = 0LL;
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v46);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        }
        goto LABEL_54;
      }
      v21 = v38[0];
    }
    *((_DWORD *)v21 + 9) |= 0x10u;
    *((_QWORD *)v21 + 142) = 0LL;
    v9 = XDCOBJ::bFullScreen((XDCOBJ *)v38);
LABEL_54:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v60);
    DCOBJ::~DCOBJ((DCOBJ *)v61);
    goto LABEL_55;
  }
  v14 = *((_QWORD *)v38[0] + 6);
  if ( v14 )
    v15 = *(_DWORD *)(v14 + 40);
  else
    v15 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(21LL, v15, v13, 2LL, 0LL);
  EngSetLastError(0x57u);
LABEL_59:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v47);
  DCOBJ::~DCOBJ((DCOBJ *)v38);
  return v6;
}
