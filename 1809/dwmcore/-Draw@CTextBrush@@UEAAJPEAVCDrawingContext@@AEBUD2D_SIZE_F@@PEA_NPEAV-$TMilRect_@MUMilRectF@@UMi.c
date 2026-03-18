/*
 * XREFs of ?Draw@CTextBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B4FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x180164B14 (-DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@.c)
 */

__int64 __fastcall CTextBrush::Draw(__int64 a1, CDrawingContext *a2, FLOAT *a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rsi
  int Factory; // eax
  __int64 v9; // rcx
  const wchar_t *v10; // rdx
  FLOAT v11; // xmm1_4
  FLOAT v12; // xmm0_4
  struct IDWriteTextFormat *v13; // r9
  unsigned int v14; // r8d
  unsigned __int16 *v15; // rdx
  unsigned int v17; // [rsp+20h] [rbp-78h]
  struct D2D_RECT_F v18; // [rsp+50h] [rbp-48h] BYREF

  if ( *(_QWORD *)(a1 + 72) )
  {
    v7 = (_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(a1 + 144)
      || (Factory = DWriteCreateFactory(0LL, &GUID_b859ee5a_d838_4b5b_a2e8_1adc7d93db48, a1 + 144),
          v6 = Factory,
          Factory >= 0) )
    {
      if ( *(_QWORD *)(a1 + 152) )
        goto LABEL_11;
      v10 = L"Segoe UI";
      if ( *(_QWORD *)(a1 + 96) )
        v10 = *(const wchar_t **)(a1 + 96);
      Factory = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, const wchar_t *, __int64))(*(_QWORD *)*v7 + 120LL))(
                  *v7,
                  v10,
                  0LL,
                  *(unsigned int *)(a1 + 132),
                  *(_DWORD *)(a1 + 136),
                  *(_DWORD *)(a1 + 140),
                  *(_DWORD *)(a1 + 112),
                  L"en-us",
                  a1 + 152);
      v6 = Factory;
      if ( Factory >= 0 )
      {
LABEL_11:
        v11 = *a3;
        v18.left = 0.0;
        v18.top = 0.0;
        v12 = a3[1];
        v13 = *(struct IDWriteTextFormat **)(a1 + 152);
        v14 = *(_DWORD *)(a1 + 80);
        v15 = *(unsigned __int16 **)(a1 + 72);
        v18.right = v11;
        v18.bottom = v12;
        Factory = CDrawingContext::DrawTextW(a2, v15, v14, v13, &v18, (const struct _D3DCOLORVALUE *)(a1 + 116));
        v6 = Factory;
        if ( Factory >= 0 )
          return v6;
        v17 = 175;
      }
      else
      {
        v17 = 167;
      }
    }
    else
    {
      v17 = 154;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, Factory, v17);
    return v6;
  }
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x92u);
  return v6;
}
