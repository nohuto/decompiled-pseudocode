/*
 * XREFs of ?RefreshMaskContent@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@UD2D_SIZE_F@@@Z @ 0x1801AF594
 * Callers:
 *     ?PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CBDC0 (-PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowReceiver::RefreshMaskContent(
        CProjectedShadowReceiver *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  float v12; // xmm2_4
  _BYTE v14[8]; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_SIZE_F v15; // [rsp+38h] [rbp-28h] BYREF
  struct D2D_SIZE_F v16; // [rsp+40h] [rbp-20h] BYREF
  float v17; // [rsp+48h] [rbp-18h]
  float v18; // [rsp+4Ch] [rbp-14h]

  v16 = a3;
  v4 = *((_QWORD *)this + 12);
  v5 = 0;
  v15 = a3;
  if ( v4 )
  {
    v14[0] = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, _BYTE *))(*(_QWORD *)v4 + 280LL))(
            v4,
            a2,
            v14)
      || v14[0] )
    {
      return v5;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, struct D2D_SIZE_F *))(**((_QWORD **)this + 12)
                                                                                          + 296LL))(
           *((_QWORD *)this + 12),
           a2,
           &v15);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1DAu);
      return v5;
    }
  }
  v9 = *((_QWORD *)this + 13);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct D2D_SIZE_F *))(*(_QWORD *)v9 + 120LL))(
            v9,
            0LL,
            0LL,
            &v16);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1E1u);
    }
    else if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15.width - (float)(v17 - v16.width))) & _xmm) > 0.015625
           || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15.height - (float)(v18 - v16.height))) & _xmm),
               v12 > 0.015625) )
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 13);
    }
  }
  return v5;
}
