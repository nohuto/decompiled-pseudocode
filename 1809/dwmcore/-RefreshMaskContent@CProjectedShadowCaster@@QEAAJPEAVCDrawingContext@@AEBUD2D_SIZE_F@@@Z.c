/*
 * XREFs of ?RefreshMaskContent@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801ADE0C
 * Callers:
 *     ?PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CBDC0 (-PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ @ 0x1801ACFC4 (-DestroyMaskIntermediate@CProjectedShadowCaster@@QEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowCaster::RefreshMaskContent(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  float v13; // xmm2_4
  _BYTE v15[8]; // [rsp+30h] [rbp-38h] BYREF
  float v16[4]; // [rsp+38h] [rbp-30h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 15);
  if ( v5 )
  {
    v15[0] = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, _BYTE *))(*(_QWORD *)v5 + 280LL))(
            v5,
            a2,
            v15)
      || v15[0] )
    {
      return v4;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct D2D_SIZE_F *))(**((_QWORD **)this + 15)
                                                                                                + 296LL))(
           *((_QWORD *)this + 15),
           a2,
           a3);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2DFu);
      return v4;
    }
  }
  v10 = *((_QWORD *)this + 16);
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, float *))(*(_QWORD *)v10 + 120LL))(v10, 0LL, 0LL, v16);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2E8u);
    }
    else if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3->width - (float)(v16[2] - v16[0]))) & _xmm) > 0.015625
           || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3->height - (float)(v16[3] - v16[1]))) & _xmm),
               v13 > 0.015625) )
    {
      CProjectedShadowCaster::DestroyMaskIntermediate(this);
    }
  }
  return v4;
}
