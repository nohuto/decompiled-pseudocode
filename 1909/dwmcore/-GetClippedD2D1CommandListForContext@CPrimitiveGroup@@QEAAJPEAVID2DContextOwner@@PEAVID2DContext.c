/*
 * XREFs of ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801C4D6C
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18016C808 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180169A84 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1801C44C4 (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1801C4A9C (-CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@.c)
 */

__int64 __fastcall CPrimitiveGroup::GetClippedD2D1CommandListForContext(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CPolygon *a4,
        struct ID2D1PrivateCompositorCommandList **a5)
{
  struct ID2D1PrivateCompositorCommandList **v5; // rsi
  struct ID2D1PrivateCompositorCommandList **v7; // rcx
  __int64 v8; // r11
  struct ID2DContextOwner *v10; // rbp
  unsigned int v11; // ebx
  __int64 v12; // rdi
  signed int NewD2DCommandListForHeatMap; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  signed int NewD2DCommandList; // eax
  __int64 v17; // rcx
  signed int ID2DCommandList; // eax
  __int64 v19; // rcx

  v5 = a5;
  v7 = 0LL;
  v8 = 0LL;
  v10 = a2;
  *a5 = 0LL;
  v11 = *((_DWORD *)this + 34);
  if ( v11 )
  {
    v12 = *((_QWORD *)this + 14);
    while ( 1 )
    {
      a2 = *(struct ID2DContextOwner **)(v12 + 8 * v8);
      if ( a3 == *(struct ID2DContext **)(*((_QWORD *)a2 + 3) + 24LL) )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v11 )
        goto LABEL_7;
    }
    v7 = *(struct ID2D1PrivateCompositorCommandList ***)(v12 + 8 * v8);
  }
LABEL_7:
  a5 = v7;
  if ( !v7 )
  {
    if ( *((_BYTE *)this + 577) )
    {
      NewD2DCommandListForHeatMap = CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(
                                      this,
                                      a2,
                                      a3,
                                      (struct CD2DCommandList **)&a5);
      v15 = NewD2DCommandListForHeatMap;
      if ( NewD2DCommandListForHeatMap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, NewD2DCommandListForHeatMap, 0x228u, 0LL);
        return v15;
      }
    }
    else
    {
      NewD2DCommandList = CPrimitiveGroup::CreateNewD2DCommandList(this, v10, a3, (struct CD2DCommandList **)&a5);
      v15 = NewD2DCommandList;
      if ( NewD2DCommandList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, NewD2DCommandList, 0x22Cu, 0LL);
        return v15;
      }
    }
    v7 = a5;
  }
  ID2DCommandList = CD2DCommandList::GetID2DCommandList((CD2DCommandList *)v7, a4, v5);
  v15 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, ID2DCommandList, 0x230u, 0LL);
  return v15;
}
