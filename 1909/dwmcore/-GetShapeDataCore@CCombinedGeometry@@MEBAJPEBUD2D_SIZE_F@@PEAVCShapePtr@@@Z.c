/*
 * XREFs of ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801CDDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCombinedGeometry::GetShapeDataCore(
        CCombinedGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  CGeometry *v8; // rcx
  signed int ShapeData; // eax
  __int64 v10; // rcx
  CGeometry *v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  char v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  char v20; // [rsp+48h] [rbp-8h]
  void (__fastcall ***v21)(_QWORD, __int64); // [rsp+70h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 8);
  v4 = 0;
  v19 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  v20 = 0;
  v18 = 0;
  *((_DWORD *)this + 8) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) != 2 )
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = 0LL;
LABEL_3:
    *((_BYTE *)a3 + 8) = 1;
    goto LABEL_15;
  }
  v8 = (CGeometry *)*((_QWORD *)this + 21);
  if ( v8 )
  {
    ShapeData = CGeometry::GetShapeData(v8, a2, (struct CShapePtr *)&v19);
    v4 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ShapeData, 0x3Fu, 0LL);
      goto LABEL_15;
    }
  }
  v11 = (CGeometry *)*((_QWORD *)this + 22);
  if ( v11 )
  {
    v12 = CGeometry::GetShapeData(v11, a2, (struct CShapePtr *)&v17);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x44u, 0LL);
      goto LABEL_15;
    }
  }
  v14 = CShape::Combine(v19, (__int64)a2, v17, 0LL, *((_DWORD *)this + 40), &v21);
  v4 = v14;
  if ( v14 >= 0 )
  {
    CShapePtr::Release(a3);
    *(_QWORD *)a3 = v21;
    goto LABEL_3;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x50u, 0LL);
  if ( v21 )
    (**v21)(v21, 1LL);
LABEL_15:
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  CShapePtr::Release((CShapePtr *)&v17);
  CShapePtr::Release((CShapePtr *)&v19);
  return v4;
}
