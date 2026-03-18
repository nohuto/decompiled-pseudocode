/*
 * XREFs of ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B30B0
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180013AC0 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180063CA0 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180190EA0 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801C8900 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B3200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::DrawAsDrawList(
        __int64 a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  float v10; // xmm0_4
  unsigned int v11; // ecx
  int v12; // ebp
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  char v18; // [rsp+60h] [rbp+18h] BYREF

  if ( dword_18030BD04 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18030BD04);
    if ( dword_18030BD04 == -1 )
    {
      dword_180306894 = -2147022876;
      Init_thread_footer(&dword_18030BD04);
    }
  }
  v10 = *a3;
  v18 = 0;
  if ( v10 > 0.0
    && a3[1] > 0.0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a1 + 280LL))(a1, a2, &v18)
    && !v18 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)a1 + 296LL))(a1, a2, a3);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180306890, 2u, v12, 0x9Du);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 312LL))(a1, 0LL);
      if ( v12 >= 0 )
      {
        v14 = CContent::DrawAsDrawList(a1, a2, a3, a4, a5, a6);
        v16 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180306890, 2u, v14, 0xA2u);
          return v16;
        }
        return 0LL;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180306890, 2u, v12, 0xA0u);
    }
    return (unsigned int)v12;
  }
  return 0LL;
}
