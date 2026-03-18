/*
 * XREFs of ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18001CBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?GetNonVisualSurfaceImageSourceNoRef@CSurfaceBrush@@AEBAPEAVIImageSource@@XZ @ 0x180051D98 (-GetNonVisualSurfaceImageSourceNoRef@CSurfaceBrush@@AEBAPEAVIImageSource@@XZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180066F20 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800880B4 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSurfaceBrush::IsOpaqueRect(CSurfaceBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  __int64 v5; // rcx
  struct IImageSource *NonVisualSurfaceImageSourceNoRef; // rax
  struct CShape *v9; // rcx
  bool v10; // bl
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rdx
  CShape *v12; // rdx
  CShape *v13; // [rsp+30h] [rbp-19h] BYREF
  struct CShape *v14[2]; // [rsp+38h] [rbp-11h] BYREF
  char v15; // [rsp+48h] [rbp-1h]
  _BYTE v16[40]; // [rsp+50h] [rbp+7h] BYREF
  struct D2D_RECT_F v17; // [rsp+78h] [rbp+2Fh] BYREF

  v5 = *((_QWORD *)this + 12);
  if ( v5 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 194LL) )
    return 0;
  NonVisualSurfaceImageSourceNoRef = CSurfaceBrush::GetNonVisualSurfaceImageSourceNoRef(this);
  if ( !NonVisualSurfaceImageSourceNoRef
    || !(*(unsigned __int8 (__fastcall **)(struct IImageSource *))(*(_QWORD *)NonVisualSurfaceImageSourceNoRef + 104LL))(NonVisualSurfaceImageSourceNoRef)
    || (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 232LL))(this) )
  {
    return 0;
  }
  v13 = 0LL;
  v14[1] = 0LL;
  v14[0] = (struct CShape *)&v13;
  v15 = 1;
  v10 = (int)CSurfaceBrush::ComputeLayout(this, a2, 0, (struct CContent::LayoutData *)v16, &v14[1]) >= 0;
  if ( v15 )
  {
    v9 = v14[0];
    v11 = *(__int64 (__fastcall ****)(_QWORD, __int64))v14[0];
    *(_QWORD *)v14[0] = v14[1];
    if ( v11 )
      std::default_delete<CShape>::operator()((__int64)v9, v11);
  }
  if ( !v10
    || !CShape::IsAxisAlignedRectangle(v13)
    || (*(int (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v13 + 32LL))(v13, &v17, 0LL) < 0 )
  {
    if ( v13 )
      std::default_delete<CShape>::operator()((__int64)v9, (__int64 (__fastcall ***)(_QWORD, __int64))v13);
    return 0;
  }
  v12 = v13;
  *(struct D2D_RECT_F *)v14 = v17;
  *a3 = v17;
  if ( v12 )
    std::default_delete<CShape>::operator()((__int64)v9, (__int64 (__fastcall ***)(_QWORD, __int64))v12);
  return 1;
}
