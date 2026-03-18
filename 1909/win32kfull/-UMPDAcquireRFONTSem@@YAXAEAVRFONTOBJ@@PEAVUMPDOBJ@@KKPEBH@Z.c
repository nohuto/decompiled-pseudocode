/*
 * XREFs of ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C009E3F4
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C009A240 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C009A5A0 (NtGdiFONTOBJ_pifi.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C009A6D4 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     NtGdiEngTextOut @ 0x1C00A0BA0 (NtGdiEngTextOut.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E0D14 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C01592D8 (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C01666D8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0282D94 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0282EF4 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A2ED0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02A4130 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02A4890 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02ACCB0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ACEF0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02AD030 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDAcquireRFONTSem(
        struct RFONTOBJ *a1,
        struct UMPDOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        const int *a5)
{
  __int64 v6; // rcx
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r15d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // ebp
  __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // [rsp+50h] [rbp+8h]

  v6 = *(_QWORD *)a1;
  v10 = 0;
  if ( v6 )
  {
    if ( a2 )
    {
      v10 = 1;
      a3 = *((_DWORD *)a2 + 103);
      if ( *((_QWORD *)a2 + 48) )
        a4 = *((_DWORD *)a2 + 104);
      else
        a4 = 0;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v11 = *(_QWORD *)(v6 + 504);
      if ( v11 )
      {
        GreAcquireSemaphore(v11);
        if ( v10 )
          *((_DWORD *)a2 + 103) &= ~0x10u;
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 848LL);
    if ( v12 )
    {
      GreAcquireSemaphore(v12);
      v25 = 0LL;
      v13 = 0;
      if ( !v10 )
      {
        v25 = 0LL;
        v14 = *(_DWORD *)(*(_QWORD *)a1 + 712LL);
        if ( (v14 & 0x200) != 0 )
        {
          v25 = 1LL;
          *(_DWORD *)(*(_QWORD *)a1 + 712LL) = v14 & 0xFFFFFDFF;
          v13 = 1;
          *(_DWORD *)(*(_QWORD *)a1 + 712LL) = HIWORD(a3);
        }
      }
      if ( (a3 & 0x20) != 0 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)a1 + 720LL);
        if ( v15 )
        {
          GreAcquireSemaphore(*(_QWORD *)(v15 + 504));
          if ( v10 )
            *((_DWORD *)a2 + 103) &= ~0x20u;
        }
      }
      if ( (a3 & 0x40) != 0 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
        if ( v16 )
        {
          if ( v10 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v16 + 504));
            *((_DWORD *)a2 + 103) &= ~0x40u;
          }
          else if ( v13 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v16 + 504));
          }
        }
      }
      if ( (a3 & 0x80u) != 0 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)a1 + 736LL);
        if ( v17 )
        {
          if ( v10 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v17 + 504));
            *((_DWORD *)a2 + 103) &= ~0x80u;
          }
          else if ( v13 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v17 + 504));
          }
        }
      }
      if ( a4 )
      {
        v18 = *(_DWORD *)(*(_QWORD *)a1 + 840LL);
        if ( a4 <= v18 )
          v18 = a4;
        v19 = 0;
        if ( v18 )
        {
          v20 = 0LL;
          v21 = 0LL;
          do
          {
            v22 = *(_QWORD *)(v20 + *(_QWORD *)(*(_QWORD *)a1 + 744LL));
            if ( v22 )
            {
              if ( !v10 )
              {
                v23 = a5[v21] == 0;
LABEL_42:
                if ( !v23 )
                {
                  if ( v10 )
                  {
                    GreAcquireSemaphore(*(_QWORD *)(v22 + 504));
                    if ( v19 < *((_DWORD *)a2 + 104) )
                    {
                      v24 = *((_QWORD *)a2 + 48);
                      if ( v24 )
                        *(_DWORD *)(v21 * 4 + v24) = 0;
                    }
                  }
                  else if ( v25 )
                  {
                    GreAcquireSemaphore(*(_QWORD *)(v22 + 504));
                  }
                }
                goto LABEL_49;
              }
              if ( v19 < *((_DWORD *)a2 + 104) )
              {
                v23 = *(_DWORD *)(v21 * 4 + *((_QWORD *)a2 + 48)) == 0;
                goto LABEL_42;
              }
            }
LABEL_49:
            ++v19;
            ++v21;
            v20 += 8LL;
          }
          while ( v19 < v18 );
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)a1 + 848LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 848LL));
    }
  }
}
