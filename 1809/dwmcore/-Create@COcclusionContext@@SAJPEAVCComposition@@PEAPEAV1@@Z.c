/*
 * XREFs of ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18008ED30
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180048F10 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x18008E610 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18008EBD4 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18008EDA8 (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x18008EF58 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall COcclusionContext::Create(struct CComposition *a1, struct COcclusionContext **a2)
{
  COcclusionContext *v4; // rax
  COcclusionContext *v5; // rax
  unsigned int v6; // ecx
  COcclusionContext *v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (COcclusionContext *)HeapAlloc(WPF::g_processHeap, 0, 0x4B0uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = COcclusionContext::COcclusionContext(v4, a1);
  v7 = v5;
  if ( v5 )
  {
    v8 = COcclusionContext::Initialize(v5);
    v10 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x40u);
      COcclusionContext::`scalar deleting destructor'(v7);
    }
    else
    {
      *a2 = v7;
    }
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x3Eu);
  }
  return v10;
}
