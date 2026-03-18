/*
 * XREFs of ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x180028D28
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800B63D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180028DB4 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800293DC (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800B23D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRenderData::FlushDrawListCache(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListCache *a3,
        struct CDrawListEntry ***a4)
{
  unsigned int v4; // edi
  int v8; // eax
  unsigned int v9; // ecx

  v4 = 0;
  if ( (unsigned int)(a4[6] - a4[5]) )
    CDrawListCache::Update(a3, a2, a4);
  CDrawListEntryBuilder::Reset((CDrawListEntryBuilder *)a4);
  if ( *((_QWORD *)a3 + 3) )
  {
    v8 = CDrawingContext::EmitDrawListCache(a2, a3);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x479u);
  }
  if ( (*((_DWORD *)a3 + 22) & 0x100) != 0 )
    CDrawListCache::Invalidate(a3);
  return v4;
}
