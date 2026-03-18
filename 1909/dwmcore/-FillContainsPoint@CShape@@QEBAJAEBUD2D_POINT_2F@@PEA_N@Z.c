/*
 * XREFs of ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007D070
 * Callers:
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007BE14 (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800CA540 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z @ 0x18007BDD8 (-IsPointInRect@@YA_NAEBUD2D_POINT_2F@@AEBUMilRectF@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18007DE64 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::FillContainsPoint(CShape *this, const struct D2D_POINT_2F *a2, bool *a3)
{
  bool IsAxisAlignedRectangle; // al
  __int64 v7; // rdi
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
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
