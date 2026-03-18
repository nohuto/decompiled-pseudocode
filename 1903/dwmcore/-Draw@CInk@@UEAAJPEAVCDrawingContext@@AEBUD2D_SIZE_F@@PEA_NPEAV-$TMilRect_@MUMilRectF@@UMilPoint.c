/*
 * XREFs of ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180216760
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18016D7E0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180216BD4 (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::Draw(__int64 a1, struct ID2DContext **a2)
{
  signed int D2DInk; // eax
  __int64 v5; // rcx
  struct ID2D1Ink *v6; // rsi
  unsigned int v7; // ebx
  struct ID2D1InkStyle *v8; // rdi
  signed int v9; // eax
  __int64 v10; // rcx
  struct ID2D1InkStyle *v12; // [rsp+30h] [rbp-28h] BYREF
  struct ID2D1Ink *v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  D2DInk = CInk::GetD2DInk((CInk *)a1, a2[48], &v13, &v12);
  v6 = v13;
  v7 = D2DInk;
  v8 = v12;
  if ( D2DInk < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, D2DInk, 0xF7u, 0LL);
  }
  else
  {
    v9 = CDrawingContext::DrawInk((CDrawingContext *)a2, v13, (const struct _D3DCOLORVALUE *)(a1 + 120), v12);
    v7 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xF9u, 0LL);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v8 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v8 + 16LL))(v8);
  return v7;
}
