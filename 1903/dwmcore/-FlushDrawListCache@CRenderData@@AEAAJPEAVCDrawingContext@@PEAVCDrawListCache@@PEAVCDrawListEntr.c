/*
 * XREFs of ?FlushDrawListCache@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@@Z @ 0x18007B02C
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800961D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076050 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180079F5C (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18007A8E8 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180091978 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
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
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x482u, 0LL);
  }
  if ( (*((_DWORD *)a3 + 22) & 0x100) != 0 )
    CDrawListCache::Invalidate(a3);
  return v4;
}
