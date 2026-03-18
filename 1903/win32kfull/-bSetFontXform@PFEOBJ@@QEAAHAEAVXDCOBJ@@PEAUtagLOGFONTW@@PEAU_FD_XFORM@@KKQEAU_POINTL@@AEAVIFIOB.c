/*
 * XREFs of ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C01055B4
 * Callers:
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C004BF40 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0104EE8 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 * Callees:
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C005430C (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00A58FC (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall PFEOBJ::bSetFontXform(
        PFEOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGFONTW *a3,
        struct _FD_XFORM *a4,
        unsigned int a5,
        unsigned int a6,
        struct _POINTL *const a7,
        struct IFIOBJ *a8,
        int a9)
{
  int NtoD_Win31; // eax
  unsigned int v13; // r8d
  FLOATL eYX; // edx
  FLOATL eYY; // r9d
  _BYTE v17[24]; // [rsp+40h] [rbp-18h] BYREF

  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v17, a2, 516);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 208LL) == 1 )
    NtoD_Win31 = bGetNtoD_Win31(a4, a3, a8, a2, a5, a7, a9);
  else
    NtoD_Win31 = bGetNtoD(a4, a3, a8, a2, a7);
  v13 = 0;
  if ( NtoD_Win31 )
  {
    eYX = a4->eYX;
    if ( eYX != 0.0 )
    {
      LODWORD(eYX) ^= 0x80000000;
      a4->eYX = eYX;
    }
    eYY = a4->eYY;
    if ( eYY != 0.0 )
    {
      LODWORD(eYY) ^= 0x80000000;
      a4->eYY = eYY;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a8 + 48LL) & 0x1000000) != 0 )
    {
      a4->eXX = eYY;
      a4->eXY = eYX;
      if ( eYX != 0.0 )
        LODWORD(a4->eXY) = LODWORD(eYX) ^ 0x80000000;
    }
    return 1;
  }
  return v13;
}
