/*
 * XREFs of ?Draw@CTextBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FB1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016D860 (-DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@.c)
 */

__int64 __fastcall CTextBrush::Draw(__int64 a1, CDrawingContext *a2, FLOAT *a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rsi
  signed int Factory; // eax
  __int64 v9; // rcx
  const wchar_t *v10; // rdx
  FLOAT v11; // xmm1_4
  FLOAT v12; // xmm0_4
  struct IDWriteTextFormat *v13; // r9
  unsigned int v14; // r8d
  unsigned __int16 *v15; // rdx
  unsigned int v17; // [rsp+20h] [rbp-78h]
  struct D2D_RECT_F v18; // [rsp+50h] [rbp-48h] BYREF

  if ( *(_QWORD *)(a1 + 80) )
  {
    v7 = (_QWORD *)(a1 + 152);
    if ( *(_QWORD *)(a1 + 152)
      || (Factory = DWriteCreateFactory(0LL, &GUID_b859ee5a_d838_4b5b_a2e8_1adc7d93db48, a1 + 152),
          v6 = Factory,
          Factory >= 0) )
    {
      if ( *(_QWORD *)(a1 + 160) )
        goto LABEL_11;
      v10 = L"Segoe UI";
      if ( *(_QWORD *)(a1 + 104) )
        v10 = *(const wchar_t **)(a1 + 104);
      Factory = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, const wchar_t *, __int64))(*(_QWORD *)*v7 + 120LL))(
                  *v7,
                  v10,
                  0LL,
                  *(unsigned int *)(a1 + 140),
                  *(_DWORD *)(a1 + 144),
                  *(_DWORD *)(a1 + 148),
                  *(_DWORD *)(a1 + 120),
                  L"en-us",
                  a1 + 160);
      v6 = Factory;
      if ( Factory >= 0 )
      {
LABEL_11:
        v11 = *a3;
        v18.left = 0.0;
        v18.top = 0.0;
        v12 = a3[1];
        v13 = *(struct IDWriteTextFormat **)(a1 + 160);
        v14 = *(_DWORD *)(a1 + 88);
        v15 = *(unsigned __int16 **)(a1 + 80);
        v18.right = v11;
        v18.bottom = v12;
        Factory = CDrawingContext::DrawTextW(a2, v15, v14, v13, &v18, (const struct _D3DCOLORVALUE *)(a1 + 124));
        v6 = Factory;
        if ( Factory >= 0 )
          return v6;
        v17 = 173;
      }
      else
      {
        v17 = 165;
      }
    }
    else
    {
      v17 = 152;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, Factory, v17, 0LL);
    return v6;
  }
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0x90u, 0LL);
  return v6;
}
