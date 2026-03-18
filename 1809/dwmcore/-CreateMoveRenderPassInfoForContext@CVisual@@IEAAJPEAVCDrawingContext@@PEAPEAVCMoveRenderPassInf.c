/*
 * XREFs of ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x1801B658C
 * Callers:
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801B6078 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z @ 0x1801B84B8 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEBVCMILMatrix@@0PEA_NPEAV2@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004E824 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x18017E850 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 *     ?SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1801B8680 (-SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall CVisual::CreateMoveRenderPassInfoForContext(
        CVisual *this,
        struct CDrawingContext *a2,
        struct CMoveRenderPassInfo **a3)
{
  unsigned int v4; // edi
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  struct _LIST_ENTRY *RenderPassInfoList; // rsi
  struct _LIST_ENTRY *v10; // rax
  __int64 v11; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v13; // rcx
  struct CDrawingContext *v14; // rax
  struct CDrawingContext **v15; // rdx

  v4 = 0;
  v8 = operator new(0x78uLL);
  if ( v8 )
  {
    v8[8] = 0LL;
    *v8 = &CMoveRenderPassInfo::`vftable';
    v8[9] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    v8[5] = 0LL;
    v8[6] = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    v8[7] = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v8[8] = *((_QWORD *)this + 2);
    v8[9] = this;
    RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
    if ( !RenderPassInfoList )
    {
      v10 = (struct _LIST_ENTRY *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
      RenderPassInfoList = v10;
      if ( !v10 )
      {
        v4 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x150Bu);
        CMoveRenderPassInfo::`scalar deleting destructor'((void **)v8, 1);
        return v4;
      }
      v10->Blink = v10;
      v10->Flink = v10;
      CVisual::SetRenderPassInfoList(this, v10);
    }
    Blink = RenderPassInfoList->Blink;
    v13 = (struct _LIST_ENTRY *)(v8 + 11);
    if ( Blink->Flink != RenderPassInfoList )
      goto LABEL_14;
    v8[12] = Blink;
    v13->Flink = RenderPassInfoList;
    Blink->Flink = v13;
    v14 = (struct CDrawingContext *)(v8 + 13);
    RenderPassInfoList->Blink = v13;
    v8[10] = a2;
    ++*((_DWORD *)a2 + 1548);
    v15 = (struct CDrawingContext **)*((_QWORD *)a2 + 773);
    if ( *v15 != (struct CDrawingContext *)((char *)a2 + 6176) )
LABEL_14:
      __fastfail(3u);
    *(_QWORD *)v14 = (char *)a2 + 6176;
    v8[14] = v15;
    *v15 = v14;
    *((_QWORD *)a2 + 773) = v14;
    *a3 = (struct CMoveRenderPassInfo *)v8;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x14FFu);
  }
  return v4;
}
