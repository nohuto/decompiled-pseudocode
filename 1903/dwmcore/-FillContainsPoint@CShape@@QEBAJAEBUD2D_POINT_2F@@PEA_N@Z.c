/*
 * XREFs of ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180087E7C
 * Callers:
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180087E4C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800CA9E0 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800880B4 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x1800880F0 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::FillContainsPoint(CShape *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  bool IsAxisAlignedRectangle; // al
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  BOOL v16; // [rsp+30h] [rbp-20h]
  __int64 v17[2]; // [rsp+38h] [rbp-18h] BYREF

  v16 = 0;
  IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(this);
  v7 = *(_QWORD *)this;
  if ( IsAxisAlignedRectangle )
  {
    v8 = (*(__int64 (__fastcall **)(CShape *, __int64 *, _QWORD))(v7 + 32))(this, v17, 0LL);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x91u, 0LL);
    else
      v16 = IsPointInRect(a2, (const struct MilRectF *)v17);
  }
  else
  {
    v17[0] = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v17);
    v12 = (*(__int64 (__fastcall **)(CShape *, _QWORD, __int64 *))(v7 + 24))(this, 0LL, v17);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x98u, 0LL);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v17[0] + 56LL))(
              v17[0],
              _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)LODWORD(a2->y)).m128_u64[0],
              0LL);
      v10 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x9Au, 0LL);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v17);
  }
  *a3 = v16;
  return v10;
}
