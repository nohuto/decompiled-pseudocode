/*
 * XREFs of ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C0120454
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00024CC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E1AE4 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x1C0119CDC (-GetETMFontManagement@@YAHAEAVRFONTOBJ@@VPDEVOBJ@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C011E4F0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C011E850 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiEngTextOut @ 0x1C011EBB0 (NtGdiEngTextOut.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C011FC90 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C0139568 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02576B8 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0257810 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0279F30 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C027B210 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C027B970 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C0284940 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C0284B80 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C0284CD0 (NtGdiFONTOBJ_pfdg.c)
 * Callees:
 *     <none>
 */

void __fastcall UMPDAcquireRFONTSem(struct RFONTOBJ *a1, struct UMPDOBJ *a2, unsigned int a3, unsigned int a4, int *a5)
{
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r13d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // ebp
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rax

  v6 = 0;
  v7 = *(_QWORD *)a1;
  if ( v7 )
  {
    if ( a2 )
    {
      v6 = 1;
      a3 = *((_DWORD *)a2 + 103);
      if ( *((_QWORD *)a2 + 48) )
        a4 = *((_DWORD *)a2 + 104);
      else
        a4 = 0;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v11 = *(_QWORD *)(v7 + 496);
      if ( v11 )
      {
        GreAcquireSemaphore(v11);
        if ( v6 )
          *((_DWORD *)a2 + 103) &= ~0x10u;
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)a1 + 832LL);
    if ( v12 )
    {
      GreAcquireSemaphore(v12);
      v13 = 0;
      if ( !v6 )
      {
        v14 = *(_DWORD *)(*(_QWORD *)a1 + 696LL);
        if ( (v14 & 0x200) != 0 )
        {
          v13 = 1;
          *(_DWORD *)(*(_QWORD *)a1 + 696LL) = v14 & 0xFFFFFDFF;
          *(_DWORD *)(*(_QWORD *)a1 + 696LL) = HIWORD(a3);
        }
      }
      if ( (a3 & 0x20) != 0 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)a1 + 704LL);
        if ( v15 )
        {
          GreAcquireSemaphore(*(_QWORD *)(v15 + 496));
          if ( v6 )
            *((_DWORD *)a2 + 103) &= ~0x20u;
        }
      }
      if ( (a3 & 0x40) != 0 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)a1 + 712LL);
        if ( v16 )
        {
          if ( v6 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v16 + 496));
            *((_DWORD *)a2 + 103) &= ~0x40u;
          }
          else if ( v13 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v16 + 496));
          }
        }
      }
      if ( (a3 & 0x80u) != 0 )
      {
        v17 = *(_QWORD *)(*(_QWORD *)a1 + 720LL);
        if ( v17 )
        {
          if ( v6 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v17 + 496));
            *((_DWORD *)a2 + 103) &= ~0x80u;
          }
          else if ( v13 )
          {
            GreAcquireSemaphore(*(_QWORD *)(v17 + 496));
          }
        }
      }
      if ( a4 )
      {
        v18 = *(_DWORD *)(*(_QWORD *)a1 + 824LL);
        if ( a4 <= v18 )
          v18 = a4;
        v19 = 0;
        if ( v18 )
        {
          v20 = 0LL;
          v21 = v6;
          v22 = 0LL;
          do
          {
            v23 = *(_QWORD *)(v20 + *(_QWORD *)(*(_QWORD *)a1 + 728LL));
            if ( v23 )
            {
              if ( !v21 )
              {
                v24 = a5[v22] == 0;
LABEL_42:
                if ( !v24 )
                {
                  if ( v21 )
                  {
                    GreAcquireSemaphore(*(_QWORD *)(v23 + 496));
                    if ( v19 < *((_DWORD *)a2 + 104) )
                    {
                      v25 = *((_QWORD *)a2 + 48);
                      if ( v25 )
                        *(_DWORD *)(v22 * 4 + v25) = 0;
                    }
                  }
                  else if ( v13 )
                  {
                    GreAcquireSemaphore(*(_QWORD *)(v23 + 496));
                  }
                }
                goto LABEL_49;
              }
              if ( v19 < *((_DWORD *)a2 + 104) )
              {
                v24 = *(_DWORD *)(v22 * 4 + *((_QWORD *)a2 + 48)) == 0;
                goto LABEL_42;
              }
            }
LABEL_49:
            ++v19;
            ++v22;
            v20 += 8LL;
          }
          while ( v19 < v18 );
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"rfo.prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)a1 + 832LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)a1 + 832LL));
    }
  }
}
