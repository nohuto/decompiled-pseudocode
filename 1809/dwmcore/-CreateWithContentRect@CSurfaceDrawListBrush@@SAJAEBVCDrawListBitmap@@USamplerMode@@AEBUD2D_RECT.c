/*
 * XREFs of ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800AEDD0
 * Callers:
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18000B548 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180012620 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x18005C00C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_18005C00C.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800AE220 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18019A570 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801AEE84 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CA404 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DA3E0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800B3C40 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithContentRect(__int64 *a1, __int16 *a2, float *a3, __int64 *a4)
{
  unsigned int v6; // edi
  float v9; // xmm7_4
  float v10; // xmm6_4
  int Current; // eax
  struct CThreadContext *v12; // rcx
  char *v13; // rbx
  int v14; // edx
  __int16 v15; // r12
  char v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rcx
  unsigned int v21; // xmm1_4
  unsigned int v22; // xmm7_4
  unsigned int v23; // xmm6_4
  struct CThreadContext *v25[2]; // [rsp+38h] [rbp-39h] BYREF
  void *retaddr; // [rsp+D0h] [rbp+5Fh]

  v6 = 0;
  (*(void (__fastcall **)(__int64, struct CThreadContext **))(*(_QWORD *)a1[1] + 40LL))(a1[1], v25);
  v9 = 1.0 / (float)SLODWORD(v25[0]);
  v10 = 1.0 / (float)SHIDWORD(v25[0]);
  Current = CThreadContext::GetCurrent(v25);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v12 = v25[0];
  v13 = 0LL;
  v14 = *((_DWORD *)v25[0] + 39);
  if ( v14 )
  {
    v13 = (char *)*((_QWORD *)v25[0] + 20);
    *((_QWORD *)v25[0] + 20) = *(_QWORD *)v13;
    *((_DWORD *)v12 + 39) = v14 - 1;
  }
  if ( v13 || (v13 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x90uLL)) != 0LL )
  {
    v15 = *a2;
    v16 = *((_BYTE *)a2 + 2);
    *(_OWORD *)(v13 + 8) = _xmm;
    v13[52] = 0;
    *(_QWORD *)v13 = &CSurfaceDrawListBrush::`vftable';
    *((_QWORD *)v13 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v17 = *a1;
    *((_QWORD *)v13 + 7) = *a1;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v18 = a1[1];
    *((_QWORD *)v13 + 8) = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v13[72] = *((_BYTE *)a1 + 16);
    *((_WORD *)v13 + 40) = v15;
    v13[82] = v16;
    *((float *)v13 + 21) = v9;
    *((float *)v13 + 25) = v10;
    *((float *)v13 + 27) = 0.0 - (float)(v9 * 0.0);
    *((float *)v13 + 28) = 0.0 - (float)(v10 * 0.0);
    *((_QWORD *)v13 + 11) = 0LL;
    *((_DWORD *)v13 + 24) = 0;
    *((_DWORD *)v13 + 26) = 0;
    *((_DWORD *)v13 + 29) = 1065353216;
    *(_OWORD *)(v13 + 120) = _xmm;
    v13[136] = 0;
  }
  else
  {
    v13 = 0LL;
  }
  *a4 = (__int64)v13;
  if ( v13 )
  {
    v13[52] = 1;
    v19 = *(_OWORD *)a3;
    *((_DWORD *)v13 + 12) = 50529027;
    *((_OWORD *)v13 + 2) = v19;
    *(_BYTE *)(*a4 + 136) = 1;
    *(float *)&v19 = v9 * *a3;
    v20 = *a4;
    *(float *)&v21 = v10 * a3[1];
    *(float *)&v22 = v9 * a3[2];
    *(float *)&v23 = v10 * a3[3];
    v25[0] = (struct CThreadContext *)__PAIR64__(v21, v19);
    v25[1] = (struct CThreadContext *)__PAIR64__(v23, v22);
    *(_OWORD *)(v20 + 120) = *(_OWORD *)v25;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x21u);
  }
  return v6;
}
