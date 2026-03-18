/*
 * XREFs of GreRestoreDCInternal @ 0x1C00ACC60
 * Callers:
 *     GreRestoreDC @ 0x1C0108D40 (GreRestoreDC.c)
 * Callees:
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0013700 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001BB3C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C001BC74 (--1EPALOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C001DE64 (--0DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreDCSelectBrush @ 0x1C001E370 (GreDCSelectBrush.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E580 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C001F994 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0020F60 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0021520 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0021F00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00221E0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     HmgPentryFromPobj @ 0x1C00229F0 (HmgPentryFromPobj.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0034194 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0062CEC (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00668FC (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgLockAllOwners @ 0x1C0069600 (HmgLockAllOwners.c)
 *     ?vCalcFillOrigin@DC@@QEAAXXZ @ 0x1C006AEF0 (-vCalcFillOrigin@DC@@QEAAXXZ.c)
 *     vRestoreRegion @ 0x1C006E890 (vRestoreRegion.c)
 *     GreDCSelectPen @ 0x1C00715E0 (GreDCSelectPen.c)
 *     hbmSelectBitmap @ 0x1C0073B90 (hbmSelectBitmap.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     DC::AcquireDcVisRgnShared @ 0x1C00ABA50 (DC--AcquireDcVisRgnShared.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C00ABD90 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00F68F0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 */

__int64 __fastcall GreRestoreDCInternal(HDC a1, int a2, int a3, int a4)
{
  __int64 v8; // r8
  DC *v9; // rdi
  unsigned int v10; // esi
  int v11; // r15d
  unsigned __int16 v12; // dx
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  int v16; // ebx
  __int64 v17; // rbx
  int v18; // r12d
  int v19; // edi
  __int64 v20; // rcx
  int v21; // eax
  DC *v22; // rcx
  DC *v23; // rdx
  __int64 v24; // rax
  DC *v25; // rcx
  DC *v26; // rcx
  int v27; // edx
  __int64 v28; // r8
  int v29; // eax
  int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // r8
  ULONG v34; // ecx
  DC *v36[6]; // [rsp+38h] [rbp-49h] BYREF
  struct OBJECT *v37; // [rsp+68h] [rbp-19h] BYREF
  HSEMAPHORE v38; // [rsp+70h] [rbp-11h] BYREF
  DC *v39[6]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+27h] BYREF
  char v41; // [rsp+B0h] [rbp+2Fh]

  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  v9 = v36[0];
  v10 = 0;
  v11 = 1;
  if ( !v36[0] || !a3 && (*(_DWORD *)(HmgPentryFromPobj((_DWORD *)v36[0]) + 8) & 0xFFFFFFFE) == 0 )
  {
    v34 = 6;
    goto LABEL_65;
  }
  if ( !a4 || (v12 = *((_WORD *)v9 + 6), v12 <= 1u) )
  {
    v15 = *((_QWORD *)v9 + 122);
    v16 = *(_DWORD *)(v15 + 152);
    if ( (v16 & 0x1000) != 0 )
    {
      GreDCSelectBrush((__int64)v9, *(_QWORD *)(v15 + 160));
      v9 = v36[0];
    }
    if ( (v16 & 0x2000) != 0 )
    {
      GreDCSelectPen((struct HOBJ__ ***)v9, *(struct HOBJ__ **)(*((_QWORD *)v9 + 122) + 168LL));
      v9 = v36[0];
    }
    if ( a2 < 0 )
      a2 += *((_DWORD *)v9 + 26);
    if ( a2 >= 1 && a2 < *((_DWORD *)v9 + 26) )
    {
      v17 = *((_QWORD *)v9 + 6);
      if ( (*(_DWORD *)(v17 + 40) & 1) != 0 )
      {
        GreLockVisRgn(*((_QWORD *)v9 + 6), v15, v8);
        v9 = v36[0];
      }
      v18 = *((_DWORD *)v9 + 9) & 0x800;
      if ( v18 )
      {
        DC::bMakeInfoDC(v9, 0);
        v9 = v36[0];
      }
      v19 = *(_DWORD *)(*((_QWORD *)v9 + 122) + 104LL);
      while ( 1 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v39);
        v39[0] = (DC *)HmgLockAllOwners(*((_QWORD *)v36[0] + 14), 1);
        if ( !v39[0] )
          break;
        DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v36[0] + 17));
        DEC_SHARE_REF_CNT_LAZY0(*((struct HOBJ__ ***)v36[0] + 18));
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)v36[0] + 19));
        DEC_SHARE_REF_CNT(*((struct OBJECT **)v36[0] + 12));
        vRestoreRegion((__int64)v36);
        if ( (int)IsvRestorePathSupported() >= 0 )
          vRestorePathWrap(v36, (unsigned int)(*((_DWORD *)v36[0] + 26) - 1));
        v20 = *((_QWORD *)v36[0] + 62);
        if ( v20 )
        {
          if ( *((_DWORD *)v36[0] + 8) == 1 )
          {
            hbmSelectBitmap(a1, (HBITMAP)gahStockObjects[21], 1, 0);
          }
          else
          {
            v21 = *(_DWORD *)(v20 + 112);
            if ( (v21 & 0x800) != 0 )
            {
              DEC_SHARE_REF_CNT((struct OBJECT *)v20);
            }
            else if ( v21 >= 0 )
            {
              SURFACE::vDec_cRef((SURFACE *)v20);
            }
          }
        }
        v38 = ghsemPalette;
        EngAcquireSemaphore(ghsemPalette);
        v22 = v39[0];
        v23 = v36[0];
        if ( *((_QWORD *)v36[0] + 10) != *((_QWORD *)v39[0] + 10) )
        {
          SelectPaletteWorker((struct XDCOBJ *)v36, *((HPALETTE *)v39[0] + 10), 1);
          v23 = v36[0];
          v22 = v39[0];
        }
        if ( *((_QWORD *)v23 + 11) != *((_QWORD *)v22 + 11) )
        {
          EPALOBJ::EPALOBJ((EPALOBJ *)&v37, *((HPALETTE *)v23 + 10));
          *((_QWORD *)v39[0] + 11) = v37;
          EPALOBJ::~EPALOBJ(&v37);
          v22 = v39[0];
        }
        v24 = *((_QWORD *)v22 + 11);
        if ( (struct PALETTE *)v24 != ppalDefault )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v24 + 56));
          v22 = v39[0];
        }
        DC::vCopyTo(v22, v36);
        XDCOBJ::bDeleteDC(v39, 0);
        SEMOBJ::vUnlock((PERESOURCE *)&v38);
        DCOBJ::~DCOBJ((DCOBJ *)v39);
        v25 = v36[0];
        if ( a2 >= *((_DWORD *)v36[0] + 26) )
          goto LABEL_42;
      }
      EngSetLastError(6u);
      v11 = 0;
      DCOBJ::~DCOBJ((DCOBJ *)v39);
      v25 = v36[0];
LABEL_42:
      if ( v19 != *(_DWORD *)(*((_QWORD *)v25 + 122) + 104LL) )
      {
        *((_DWORD *)v25 + 63) |= 1u;
        v25 = v36[0];
      }
      if ( v18 )
      {
        DC::bMakeInfoDC(v25, 1);
        v25 = v36[0];
      }
      DC::vReleaseRao(v25);
      DC::AcquireDcVisRgnShared((__int64)v36[0], (__int64)&v40);
      DC::vUpdate_VisRect(v36[0], *((struct REGION **)v36[0] + 143));
      if ( v41 )
        CPushLock::ReleaseLock((CPushLock *)(v40 + 1112));
      *(_DWORD *)(*((_QWORD *)v36[0] + 122) + 152LL) |= 0x12001Fu;
      v26 = v36[0];
      if ( *((_DWORD *)v36[0] + 8) == 1 )
      {
        DC::bSetDefaultRegion(v36[0]);
        v26 = v36[0];
      }
      v27 = *((_DWORD *)v26 + 9);
      v28 = *((_QWORD *)v26 + 62);
      if ( (v27 & 1) != 0
        || *((_DWORD *)v26 + 8) == 1
        && v28
        && ((v29 = *(_DWORD *)(v28 + 112), (v29 & 0x4000) != 0)
         || (v29 & 0x800000) != 0 && (*(_DWORD *)(v17 + 40) & 1) != 0) )
      {
        *((_DWORD *)v26 + 9) = v27 | 0x200;
        v30 = *((_DWORD *)v36[0] + 9);
        if ( (*(_DWORD *)(v28 + 112) & 0x200) != 0 )
          v31 = v30 | 0x8000;
        else
          v31 = v30 & 0xFFFF7FFF;
        *((_DWORD *)v36[0] + 9) = v31;
      }
      else
      {
        *((_DWORD *)v26 + 9) = v27 & 0xFFFFFDFF;
      }
      DC::vCalcFillOrigin(v36[0]);
      if ( (*(_DWORD *)(v17 + 40) & 1) != 0 )
        GreUnlockVisRgn(v17, v32, v33);
      goto LABEL_66;
    }
    v34 = 87;
LABEL_65:
    EngSetLastError(v34);
    v11 = 0;
LABEL_66:
    v10 = v11;
    goto LABEL_67;
  }
  v13 = *((_QWORD *)v9 + 6);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 40);
  else
    v14 = 0;
  TraceLoggingWriteUnsupportedGdiUsage(8LL, v14, v12);
LABEL_67:
  DCOBJ::~DCOBJ((DCOBJ *)v36);
  return v10;
}
