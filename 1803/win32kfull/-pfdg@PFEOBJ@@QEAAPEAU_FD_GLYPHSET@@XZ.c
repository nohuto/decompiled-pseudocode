/*
 * XREFs of ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00CCDE0
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0085C94 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C00C81BC (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00E1CC8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FBD98 (GreGetFontUnicodeRanges.c)
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C0290320 (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C008094C (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00CE0A0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C0289570 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 */

struct _FD_GLYPHSET *__fastcall PFEOBJ::pfdg(__int64 **this)
{
  struct _FD_GLYPHSET *v2; // rsi
  int v3; // r15d
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 *v6; // rax
  int v7; // r14d
  __int64 v8; // rbx
  bool v10; // al
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  struct _FD_GLYPHSET *v12; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v13; // [rsp+88h] [rbp+48h] BYREF
  struct _FD_GLYPHSET *v14; // [rsp+90h] [rbp+50h] BYREF
  __int64 v15; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = **this;
  v11 = v4;
  v5 = *(_QWORD *)(v4 + 88);
  v13 = 0LL;
  v15 = v5;
  GreAcquireSemaphore(ghsemGlyphSet);
  v6 = *this;
  if ( !(*this)[2] )
  {
    v7 = *(_DWORD *)(v5 + 40) & 0x8000;
    if ( v7 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
      GreReleaseSemaphoreInternal(ghsemGlyphSet);
      v6 = *this;
    }
    v12 = (struct _FD_GLYPHSET *)PFFOBJ::QueryFontTree(
                                   (PFFOBJ *)&v11,
                                   *(struct DHPDEV__ **)(v4 + 96),
                                   *(_QWORD *)(v4 + 80),
                                   *((_DWORD *)v6 + 2),
                                   3u,
                                   &v13);
    v2 = v12;
    if ( v7 )
      GreAcquireSemaphore(ghsemGlyphSet);
    if ( v2 )
    {
      if ( (*this)[2] )
      {
LABEL_13:
        v3 = 1;
        goto LABEL_9;
      }
      (*this)[2] = (__int64)v2;
      (*this)[3] = v13;
      if ( v7 )
      {
        if ( *(_BYTE *)((*this)[4] + 44) == 2 )
        {
          v14 = 0LL;
          v10 = bExtendGlyphSet(&v12, &v14);
          v2 = v12;
          if ( v10 )
          {
            (*this)[2] = (__int64)v14;
            goto LABEL_13;
          }
        }
      }
    }
  }
LABEL_9:
  if ( (*this)[2] )
    ++*((_DWORD *)*this + 34);
  if ( v3 && *(_QWORD *)(v5 + 3016) )
    PDEVOBJ::Free((PDEVOBJ *)&v15, v2, v13);
  v8 = (*this)[2];
  EtwTraceGreLockReleaseSemaphore(L"ghsemGlyphSet", ghsemGlyphSet);
  GreReleaseSemaphoreInternal(ghsemGlyphSet);
  return (struct _FD_GLYPHSET *)v8;
}
