/*
 * XREFs of ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0075BF0
 * Callers:
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C001DEDC (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     GreCleanDC @ 0x1C0075BA0 (GreCleanDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0082B34 (-vCleanupDCs@@YAXK@Z.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00ACBC0 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C001ABD4 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C001BB3C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C001D720 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     GreDCSelectBrush @ 0x1C001E370 (GreDCSelectBrush.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0020F60 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C00215E0 (INC_SHARE_REF_CNT.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0021F00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00221E0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0022720 (DEC_SHARE_REF_CNT.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0062DDC (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0RFONTOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C0062EC8 (--0RFONTOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     GreDCSelectPen @ 0x1C00715E0 (GreDCSelectPen.c)
 *     hbmSelectBitmap @ 0x1C0073B90 (hbmSelectBitmap.c)
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C009ED90 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00F6BDC (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     GreRestoreDC @ 0x1C0108D40 (GreRestoreDC.c)
 */

__int64 __fastcall XDCOBJ::bCleanDC(struct HOBJ__ ****this, int a2)
{
  struct HOBJ__ ***v4; // rcx
  struct HOBJ__ **v5; // rdx
  int v6; // ebx
  struct HOBJ__ ***v7; // rcx
  BOOL v8; // ebp
  struct HOBJ__ ***v9; // rcx
  struct HOBJ__ ***v10; // rdx
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  HPALETTE *v14; // rcx
  __int64 v15; // r8
  __int128 v16; // xmm1
  struct HOBJ__ **v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  struct HOBJ__ **v20; // rbx
  struct HOBJ__ ***v21; // rdx
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  struct HOBJ__ ***v25; // r8
  __int64 v26; // rax
  int v27; // ecx
  DC *v28; // rcx
  int v29; // edx
  _BYTE v31[40]; // [rsp+20h] [rbp-28h] BYREF
  struct HOBJ__ **v32; // [rsp+50h] [rbp+8h] BYREF

  v4 = *this;
  v5 = v4[122];
  v6 = *((_DWORD *)v5 + 38);
  if ( (v6 & 0x1000) != 0 )
    GreDCSelectBrush((__int64)v4, (__int64)v5[20]);
  if ( (v6 & 0x2000) != 0 )
    GreDCSelectPen(*this, (*this)[122][21]);
  v7 = *this;
  v8 = *((_DWORD *)(*this)[122] + 26) != 1 || (*((_DWORD *)v7 + 63) & 1) != 0;
  if ( *((int *)v7 + 26) > 1 )
  {
    GreRestoreDC(*v7, 1LL);
    v7 = *this;
  }
  if ( v7[11] != (struct HOBJ__ **)ppalDefault )
  {
    SelectPaletteWorker((struct XDCOBJ *)this, dclevelDefault, 1);
    v7 = *this;
  }
  if ( *((_DWORD *)v7 + 8) == 1 )
  {
    hbmSelectBitmap((HDC)*v7, (HBITMAP)gahStockObjects[21], 1, a2);
    *((_DWORD *)*this + 9) &= ~0x1000u;
    v7 = *this;
  }
  *((_WORD *)v7 + 1048) = -1;
  v9 = *this;
  if ( (*this)[20] )
  {
    v32 = (*this)[20];
    RGNOBJ::vDeleteRGNOBJ((__int16 **)&v32);
    (*this)[20] = 0LL;
    v9 = *this;
  }
  if ( v9[21] )
  {
    v32 = v9[21];
    RGNOBJ::vDeleteRGNOBJ((__int16 **)&v32);
    (*this)[21] = 0LL;
    v9 = *this;
  }
  DC::hpath((DC *)v9, 0LL);
  DEC_SHARE_REF_CNT_LAZY0((*this)[17]);
  DEC_SHARE_REF_CNT_LAZY0((*this)[18]);
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((*this)[19]);
  DEC_SHARE_REF_CNT((struct OBJECT *)(*this)[12]);
  v10 = *this;
  v11 = (__int64)(*this)[37];
  if ( v11 && (struct HOBJ__ ***)v11 != *this + 33 )
  {
    Win32FreePool(v11);
    (*this)[37] = 0LL;
    v10 = *this;
  }
  v12 = v10 + 10;
  v13 = 3LL;
  v14 = &dclevelDefault;
  v15 = 3LL;
  do
  {
    *v12 = *(_OWORD *)v14;
    v12[1] = *((_OWORD *)v14 + 1);
    v12[2] = *((_OWORD *)v14 + 2);
    v12[3] = *((_OWORD *)v14 + 3);
    v12[4] = *((_OWORD *)v14 + 4);
    v12[5] = *((_OWORD *)v14 + 5);
    v12[6] = *((_OWORD *)v14 + 6);
    v12 += 8;
    v16 = *((_OWORD *)v14 + 7);
    v14 += 16;
    *(v12 - 1) = v16;
    --v15;
  }
  while ( v15 );
  *v12 = *(_OWORD *)v14;
  v12[1] = *((_OWORD *)v14 + 1);
  v17 = (*this)[122];
  v18 = &DcAttrDefault;
  do
  {
    *(_OWORD *)v17 = *v18;
    *((_OWORD *)v17 + 1) = v18[1];
    *((_OWORD *)v17 + 2) = v18[2];
    *((_OWORD *)v17 + 3) = v18[3];
    *((_OWORD *)v17 + 4) = v18[4];
    *((_OWORD *)v17 + 5) = v18[5];
    *((_OWORD *)v17 + 6) = v18[6];
    v17 += 16;
    v19 = v18[7];
    v18 += 8;
    *((_OWORD *)v17 - 1) = v19;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)v17 = *v18;
  *((_OWORD *)v17 + 1) = v18[1];
  *((_OWORD *)v17 + 2) = v18[2];
  *((_DWORD *)(*this)[122] + 38) |= 0x12001Fu;
  INC_SHARE_REF_CNT((struct _BASEOBJECT *)(*this)[17]);
  INC_SHARE_REF_CNT((struct _BASEOBJECT *)(*this)[18]);
  v20 = (*this)[6];
  if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
    XDCOBJ_vSetDefaultFontWrap(this, (_DWORD)v20[5] & 1);
  v21 = *this;
  if ( (*this)[6] == *(struct HOBJ__ ***)(gpDispInfo + 40) )
  {
    *(_DWORD *)v21[122] |= 2u;
    v21 = *this;
  }
  v22 = *((_DWORD *)v21 + 63);
  v23 = v22 | 1;
  v24 = v22 & 0xFFFFFFFE;
  if ( !v8 )
    v23 = v24;
  *((_DWORD *)v21 + 63) = v23;
  INC_SHARE_REF_CNT((struct _BASEOBJECT *)(*this)[12]);
  RFONTOBJ::RFONTOBJ((RFONTOBJ *)v31, (struct RFONT *)(*this)[221]);
  (*this)[221] = 0LL;
  v25 = *this;
  v26 = (_DWORD)(*this)[5] & 1;
  v27 = HIDWORD((*this)[v26 + 127]);
  *((_DWORD *)v25 + 300) = (*this)[v26 + 127];
  *((_DWORD *)v25 + 301) = v27;
  DC::vReleaseRao((DC *)*this);
  if ( (unsigned int)DC::bDpiScaleTransform((DC *)*this) )
  {
    v29 = *((_DWORD *)v28 + 130);
    if ( (v29 & 1) != 0 )
    {
      *((_DWORD *)v28 + 131) = 0;
      *((_DWORD *)v28 + 132) = 0;
      *((_DWORD *)v28 + 133) = 0;
      *((_DWORD *)v28 + 134) = 0;
      *((_DWORD *)v28 + 9) |= 0x10u;
      *((_DWORD *)v28 + 130) = v29 & 0xFFFFFFF8 | 4;
      DC::vUpdateCachedDPIScaleValue(v28);
    }
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v31);
  return 1LL;
}
