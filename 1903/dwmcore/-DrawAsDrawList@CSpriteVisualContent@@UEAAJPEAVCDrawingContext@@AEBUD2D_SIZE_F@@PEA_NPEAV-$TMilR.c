/*
 * XREFs of ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A0A0
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180008830 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180079E10 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801D30F0 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 * Callees:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _Init_thread_footer @ 0x1800E8500 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E8568 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::DrawAsDrawList(__int64 a1, __int64 a2, float *a3, __int64 a4)
{
  float v8; // xmm0_4
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  char v17; // [rsp+60h] [rbp+18h] BYREF

  if ( dword_180340298 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180340298);
    if ( dword_180340298 == -1 )
    {
      dword_18033AE04 = -2147022876;
      Init_thread_footer(&dword_180340298);
    }
  }
  v8 = *a3;
  v17 = 0;
  if ( v8 > 0.0
    && a3[1] > 0.0
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a1 + 336LL))(a1, a2, &v17)
    && !v17 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)a1 + 360LL))(a1, a2, a3);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_18033AE00, 2u, v9, 0xA7u, 0LL);
      return v11;
    }
    if ( *(_BYTE *)(a1 + 72) )
    {
      if ( !*(_QWORD *)(a1 + 64) )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 376LL))(a1, 0LL);
        v11 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_18033AE00, 2u, v15, 0xACu, 0LL);
          return v11;
        }
      }
    }
    v12 = CContent::DrawAsDrawList(a1, a2, a3, a4);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_18033AE00, 2u, v12, 0xAFu, 0LL);
      return v11;
    }
  }
  return 0;
}
