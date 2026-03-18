/*
 * XREFs of ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800CA540
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007D070 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18008C790 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::HitTest(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rcx
  CShape **v10; // rcx
  bool v11; // di
  CShape *v12; // rdx
  signed int v13; // eax
  struct CShape *v15; // [rsp+38h] [rbp-38h] BYREF
  char v16; // [rsp+40h] [rbp-30h]
  _BYTE v17[40]; // [rsp+48h] [rbp-28h] BYREF
  CShape *v18; // [rsp+90h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0;
  v7 = *((_QWORD *)this + 12);
  if ( v7
    && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 194LL)
    && a2->width > 0.0
    && a2->height > 0.0
    && !(*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 232LL))(this) )
  {
    v18 = 0LL;
    v15 = 0LL;
    v16 = 1;
    v11 = (int)CSurfaceBrush::ComputeLayout(this, a2, 0, (struct CContent::LayoutData *)v17, &v15) >= 0;
    if ( v16 )
    {
      v10 = &v18;
      v12 = v18;
      v18 = v15;
      if ( v12 )
        std::default_delete<CShape>::operator()((__int64)&v18, (__int64 (__fastcall ***)(_QWORD, __int64))v12);
    }
    if ( v11 )
    {
      v13 = CShape::FillContainsPoint(v18, a3, a4);
      v4 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, v13, 0x183u, 0LL);
    }
    if ( v18 )
      std::default_delete<CShape>::operator()((__int64)v10, (__int64 (__fastcall ***)(_QWORD, __int64))v18);
  }
  return v4;
}
