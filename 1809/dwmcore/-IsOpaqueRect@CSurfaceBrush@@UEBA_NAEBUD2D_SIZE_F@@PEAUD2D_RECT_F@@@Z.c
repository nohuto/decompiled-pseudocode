/*
 * XREFs of ?IsOpaqueRect@CSurfaceBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x18001A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800307F0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800457F0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSurfaceBrush::IsOpaqueRect(CSurfaceBrush *this, const struct D2D_SIZE_F *a2, struct D2D_RECT_F *a3)
{
  __int64 v5; // rcx
  struct CShape *v8; // rcx
  bool v9; // bl
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdx
  CShape *v11; // rdx
  CShape *v12; // [rsp+30h] [rbp-19h] BYREF
  struct CShape *v13[2]; // [rsp+38h] [rbp-11h] BYREF
  char v14; // [rsp+48h] [rbp-1h]
  _BYTE v15[40]; // [rsp+50h] [rbp+7h] BYREF
  struct D2D_RECT_F v16; // [rsp+78h] [rbp+2Fh] BYREF

  v5 = *((_QWORD *)this + 12);
  if ( !v5
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 104LL))(v5)
    || (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 192LL))(this) )
  {
    return 0;
  }
  v12 = 0LL;
  v13[1] = 0LL;
  v13[0] = (struct CShape *)&v12;
  v14 = 1;
  v9 = (int)CSurfaceBrush::ComputeLayout(this, a2, 0, (struct CContent::LayoutData *)v15, &v13[1]) >= 0;
  if ( v14 )
  {
    v8 = v13[0];
    v10 = *(__int64 (__fastcall ****)(_QWORD, __int64))v13[0];
    *(_QWORD *)v13[0] = v13[1];
    if ( v10 )
      std::default_delete<CShape>::operator()((__int64)v8, v10);
  }
  if ( !v9
    || !CShape::IsAxisAlignedRectangle(v12)
    || (*(int (__fastcall **)(CShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v12 + 32LL))(v12, &v16, 0LL) < 0 )
  {
    if ( v12 )
      std::default_delete<CShape>::operator()((__int64)v8, (__int64 (__fastcall ***)(_QWORD, __int64))v12);
    return 0;
  }
  v11 = v12;
  *(struct D2D_RECT_F *)v13 = v16;
  *a3 = v16;
  if ( v11 )
    std::default_delete<CShape>::operator()((__int64)v8, (__int64 (__fastcall ***)(_QWORD, __int64))v11);
  return 1;
}
