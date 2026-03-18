/*
 * XREFs of ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009E21C
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C009A240 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C009A5A0 (NtGdiFONTOBJ_pifi.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C009A6D4 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     NtGdiEngTextOut @ 0x1C00A0BA0 (NtGdiEngTextOut.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E0D14 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C01592D8 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C0166658 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0282D94 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0282EF4 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A2ED0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02A4130 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02A4890 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02ACCB0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ACEF0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02AD030 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1C02A60BC (-bAllocFontLinks@UMPDOBJ@@QEAAHI@Z.c)
 */

__int64 __fastcall UMPDReleaseRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5)
{
  __int64 v6; // rax
  unsigned int *v7; // rdi
  void **v10; // r14
  int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbp
  int v18; // r14d
  char *v19; // r15
  unsigned int v20; // r14d
  __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // [rsp+60h] [rbp+8h]

  v25 = 0LL;
  v6 = *(_QWORD *)a1;
  v7 = a3;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( a2 )
  {
    if ( !a3 && !a4 )
    {
      v10 = a5;
      if ( !a5 )
      {
        v11 = 1;
        goto LABEL_7;
      }
    }
    return 0LL;
  }
  if ( !a3 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  v10 = a5;
  if ( !a5 )
    return 0LL;
  v11 = 0;
  *a3 = 0;
  *a4 = 0;
  v6 = *(_QWORD *)a1;
LABEL_7:
  v12 = *(_QWORD *)(v6 + 848);
  if ( !v12 )
    goto LABEL_14;
  GreAcquireSemaphore(v12);
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 720LL);
  if ( v13 && *(_QWORD *)(v13 + 504) && (unsigned int)GreIsSemaphoreOwnedByCurrentThread() )
  {
    EtwTraceGreLockReleaseSemaphore(
      L"rfo.prfnt->prfntSystemTT->hsemCache",
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 720LL) + 504LL));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 720LL) + 504LL));
    if ( v11 )
      *((_DWORD *)a2 + 103) |= 0x20u;
    else
      *v7 |= 0x20u;
  }
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
  if ( v14 && *(_QWORD *)(v14 + 504) && (unsigned int)GreIsSemaphoreOwnedByCurrentThread() )
  {
    EtwTraceGreLockReleaseSemaphore(
      L"rfo.prfnt->prfntSysEUDC->hsemCache",
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 504LL));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 728LL) + 504LL));
    if ( v11 )
      *((_DWORD *)a2 + 103) |= 0x40u;
    else
      *v7 |= 0x40u;
  }
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
  if ( v15 && *(_QWORD *)(v15 + 504) && (unsigned int)GreIsSemaphoreOwnedByCurrentThread() )
  {
    EtwTraceGreLockReleaseSemaphore(
      L"rfo.prfnt->prfntDefEUDC->hsemCache",
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 504LL));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 736LL) + 504LL));
    if ( v11 )
      *((_DWORD *)a2 + 103) |= 0x80u;
    else
      *v7 |= 0x80u;
  }
  v16 = *(unsigned int *)(*(_QWORD *)a1 + 840LL);
  if ( (_DWORD)v16 )
  {
    if ( v11 )
    {
      v18 = UMPDOBJ::bAllocFontLinks(a2, v16);
    }
    else
    {
      if ( (unsigned int)v16 <= 0xA )
        v19 = (char *)*v10;
      else
        v19 = (char *)PALLOCMEM2((unsigned int)(4 * v16), 1886221639LL, 0);
      v25 = v19;
      *v10 = v19;
      if ( !v19 )
        goto LABEL_23;
      *a4 = v16;
      v18 = 1;
      memset(v19, 0, 4 * v16);
    }
    if ( v18 )
    {
      v20 = 0;
      v21 = 0LL;
      v22 = 0LL;
      do
      {
        v23 = *(_QWORD *)(v22 + *(_QWORD *)(*(_QWORD *)a1 + 744LL));
        if ( v23 && *(_QWORD *)(v23 + 504) && (unsigned int)GreIsSemaphoreOwnedByCurrentThread() )
        {
          EtwTraceGreLockReleaseSemaphore(
            L"rfo.prfnt->paprfntFaceName[ii]->hsemCache",
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + v22) + 504LL));
          GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 744LL) + v22) + 504LL));
          if ( v11 )
          {
            if ( v20 < *((_DWORD *)a2 + 104) )
            {
              v24 = *((_QWORD *)a2 + 48);
              if ( v24 )
                *(_DWORD *)(v21 + v24) = 1;
            }
          }
          else
          {
            *(_DWORD *)&v25[v21] = 1;
          }
        }
        ++v20;
        v22 += 8LL;
        v21 += 4LL;
      }
      while ( v20 < (unsigned int)v16 );
      v7 = a3;
    }
  }
  if ( !v11 )
  {
LABEL_23:
    *v7 |= *(_DWORD *)(*(_QWORD *)a1 + 712LL) << 16;
    *(_DWORD *)(*(_QWORD *)a1 + 712LL) |= 0x200u;
  }
  EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)a1 + 848LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 848LL));
LABEL_14:
  if ( *(_QWORD *)(*(_QWORD *)a1 + 504LL) && (unsigned int)GreIsSemaphoreOwnedByCurrentThread() )
  {
    EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)a1 + 504LL));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 504LL));
    if ( v11 )
      *((_DWORD *)a2 + 103) |= 0x10u;
    else
      *v7 |= 0x10u;
  }
  return 1LL;
}
