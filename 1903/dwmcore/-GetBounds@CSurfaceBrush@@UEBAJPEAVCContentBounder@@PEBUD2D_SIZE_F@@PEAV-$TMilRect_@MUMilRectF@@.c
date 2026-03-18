/*
 * XREFs of ?GetBounds@CSurfaceBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B99A0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180066F20 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetBounds(CSurfaceBrush *this, __int64 a2, const struct D2D_SIZE_F *a3, _DWORD *a4)
{
  char v4; // di
  unsigned int v5; // r14d
  bool v9; // si
  struct CShape *v10; // rdx
  signed int v11; // eax
  __int64 v12; // rcx
  struct CShape **v14; // [rsp+30h] [rbp-40h]
  struct CShape *v15; // [rsp+38h] [rbp-38h] BYREF
  char v16; // [rsp+40h] [rbp-30h]
  char v17[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+30h] BYREF

  v4 = 0;
  v5 = 0;
  v18 = 0LL;
  v9 = 0;
  if ( a3 )
  {
    if ( a3->width > 0.0
      && a3->height > 0.0
      && !(*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 232LL))(this) )
    {
      v15 = 0LL;
      v14 = (struct CShape **)&v18;
      v16 = 1;
      v4 = 1;
      if ( (int)CSurfaceBrush::ComputeLayout(this, a3, 0, (struct CContent::LayoutData *)v17, &v15) >= 0 )
        v9 = 1;
    }
  }
  if ( (v4 & 1) != 0 )
  {
    if ( v16 )
    {
      v10 = *v14;
      *v14 = v15;
      if ( v10 )
        std::default_delete<CShape>::operator()((__int64)v14, (__int64 (__fastcall ***)(_QWORD, __int64))v10);
    }
  }
  if ( v9 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v18 + 32LL))(v18, a4, 0LL);
    v5 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x15Du, 0LL);
  }
  else
  {
    a4[3] = 0;
    a4[2] = 0;
    a4[1] = 0;
    *a4 = 0;
  }
  if ( v18 )
    (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1LL);
  return v5;
}
