/*
 * XREFs of ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801D4C20
 * Callers:
 *     <none>
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1801D4BC4 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CGeometryGroup::GetShapeDataCore(
        CGeometryGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  int v3; // eax
  unsigned int v4; // edi
  struct CShape *v5; // rbx
  struct CShape *v9; // rax
  __int64 v10; // rcx
  signed int ShapeData; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  unsigned int v18; // [rsp+20h] [rbp-38h]
  struct CShape *v19; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 8);
  v4 = 0;
  v5 = 0LL;
  v19 = 0LL;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) != 2 )
  {
    v9 = (struct CShape *)CRectanglesShape::operator new(this);
    v5 = v9;
    if ( v9 )
    {
      *((_QWORD *)v9 + 1) = 0LL;
      *(_QWORD *)v9 = &CRectanglesShape::`vftable';
      *((_DWORD *)v9 + 10) = 0;
      *((_QWORD *)v9 + 2) = (char *)v9 + 48;
      *((_QWORD *)v9 + 3) = (char *)v9 + 48;
      *((_DWORD *)v9 + 8) = 1;
      *((_DWORD *)v9 + 9) = 1;
      *((_QWORD *)v9 + 8) = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x25u, 0LL);
      goto LABEL_21;
    }
    goto LABEL_15;
  }
  ShapeData = CGeometry::GetShapeData(**((CGeometry ***)this + 21), a2, a3);
  v4 = ShapeData;
  if ( ShapeData < 0 )
  {
    v18 = 47;
  }
  else
  {
    v13 = CShape::CopyShape(*(CShape **)a3, 0LL, &v19);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x30u, 0LL);
      v5 = v19;
      goto LABEL_21;
    }
    v15 = 1;
    v5 = v19;
    if ( *((_DWORD *)this + 40) <= 1u )
    {
LABEL_15:
      CShapePtr::Release(a3);
      *(_QWORD *)a3 = v5;
      v5 = 0LL;
      *((_BYTE *)a3 + 8) = 1;
      goto LABEL_21;
    }
    while ( 1 )
    {
      ShapeData = CGeometry::GetShapeData(*(CGeometry **)(*((_QWORD *)this + 21) + 8LL * v15), a2, a3);
      v4 = ShapeData;
      if ( ShapeData < 0 )
        break;
      ShapeData = CShape::Combine((__int64)v5, v16, *(_QWORD *)a3, 0LL, 1, &v19);
      v4 = ShapeData;
      if ( ShapeData < 0 )
      {
        v18 = 65;
        goto LABEL_20;
      }
      if ( v5 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v5)(v5, 1LL);
      v5 = v19;
      if ( ++v15 >= *((_DWORD *)this + 40) )
        goto LABEL_15;
    }
    v18 = 57;
  }
LABEL_20:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ShapeData, v18, 0LL);
LABEL_21:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  if ( v5 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v5)(v5, 1LL);
  return v4;
}
