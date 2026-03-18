/*
 * XREFs of ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180079E10
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180014388 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A0A0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::DrawAsDrawList(
        __int64 a1,
        COverlayContext **a2,
        int a3,
        int a4,
        __int64 a5,
        void *a6)
{
  __int64 v7; // rcx
  __int64 v11; // rcx
  int (__fastcall ***v12)(_QWORD, GUID *, struct ISwapChainContent **); // rbx
  char v13; // al
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  char v20; // al
  int v21; // eax
  unsigned int v22; // ecx
  struct ISwapChainContent *v23; // [rsp+30h] [rbp-28h] BYREF
  bool v24; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0LL;
  v7 = *(_QWORD *)(a1 + 96);
  if ( !v7
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 194LL)
    || (v11 = *(_QWORD *)(a1 + 96), v12 = 0LL, !v11) )
  {
LABEL_9:
    v16 = CSpriteVisualContent::DrawAsDrawList(a1, (_DWORD)a2, a3, a4, a5, (__int64)a6);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1B2u, 0LL);
    goto LABEL_11;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 48LL))(v11, 39LL);
  v14 = *(_QWORD *)(a1 + 96);
  if ( v13 )
  {
    v15 = v14 + 64;
LABEL_6:
    v12 = (int (__fastcall ***)(_QWORD, GUID *, struct ISwapChainContent **))(v15 & ((unsigned __int128)-(__int128)v14 >> 64));
    goto LABEL_7;
  }
  v20 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v14 + 48LL))(v14, 83LL);
  v14 = *(_QWORD *)(a1 + 96);
  if ( v20 )
  {
    v15 = v14 + 56;
    goto LABEL_6;
  }
  (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v14 + 48LL))(v14, 125LL);
LABEL_7:
  if ( !v12 || (**v12)(v12, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v23) < 0 )
    goto LABEL_9;
  v24 = 0;
  v21 = CDrawingContext::DrawAsOverlay(a2, v23, &v24);
  v18 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1A2u, 0LL);
    goto LABEL_11;
  }
  if ( !v24 && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v23 + 112LL))(v23) )
    goto LABEL_9;
LABEL_11:
  if ( v23 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v23 + 16LL))(v23);
  return v18;
}
