/*
 * XREFs of ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802154E4
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180215070 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180215140 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802155E0 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::GetD2DInk(CInk *this, struct ID2DContext *a2, struct ID2D1Ink **a3, struct ID2D1InkStyle **a4)
{
  int v6; // eax
  unsigned int v8; // ebx
  signed int ID2D1InkAndInkStyle; // eax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-18h]
  CD2DInk *v13; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  *a4 = 0LL;
  v6 = *((_DWORD *)this + 8);
  v13 = 0LL;
  *((_DWORD *)this + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6) & 6) != 2 )
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80004005, 0x115u, 0LL);
LABEL_8:
    ReleaseInterface<IBitmapLock>((__int64 *)a3);
    ReleaseInterface<IBitmapLock>((__int64 *)a4);
    goto LABEL_9;
  }
  ID2D1InkAndInkStyle = CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
                          (CInk *)((char *)this + 56),
                          a2,
                          &v13);
  v8 = ID2D1InkAndInkStyle;
  if ( ID2D1InkAndInkStyle < 0 )
  {
    v12 = 280;
    goto LABEL_7;
  }
  ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v13, a3, a4);
  v8 = ID2D1InkAndInkStyle;
  if ( ID2D1InkAndInkStyle < 0 )
  {
    v12 = 281;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ID2D1InkAndInkStyle, v12, 0LL);
    goto LABEL_8;
  }
LABEL_9:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v8;
}
