/*
 * XREFs of ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801C53F8
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1634 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x1801C52D0 (--0CTrimPathOperation@@QEAA@XZ.c)
 *     ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18024BA58 (-GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18024D1E0 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18024D75C (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 */

__int64 __fastcall CGeometry::GetTrimmedShapeData(CGeometry *this, const struct CShape *a2, struct CShapePtr *a3)
{
  signed int SimplifiedPathData; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rcx
  CPathSegmentsShape *v11; // rax
  __int64 v12; // rcx
  CPathSegmentsShape *v13; // rdi
  struct CPathData *v14; // rcx
  struct CPathData *v15; // rcx
  struct CPathData *v17; // [rsp+30h] [rbp-D0h] BYREF
  struct CPathData *v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19[50]; // [rsp+40h] [rbp-C0h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  CTrimPathOperation::CTrimPathOperation((CTrimPathOperation *)v19);
  SimplifiedPathData = CShape::GetSimplifiedPathData(a2, &v18);
  v8 = SimplifiedPathData;
  if ( SimplifiedPathData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, SimplifiedPathData, 0x11Eu, 0LL);
  }
  else
  {
    v9 = CTrimPathOperation::Trim(
           (CTrimPathOperation *)v19,
           v18,
           *((float *)this + 20),
           *((float *)this + 21),
           *((float *)this + 22),
           &v17);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x11Fu, 0LL);
    }
    else
    {
      v11 = (CPathSegmentsShape *)DefaultHeap::Alloc(0x18uLL);
      if ( v11 )
        v13 = CPathSegmentsShape::CPathSegmentsShape(v11, v17);
      else
        v13 = 0LL;
      if ( v13 )
      {
        CShapePtr::Release(a3);
        *(_QWORD *)a3 = v13;
        *((_BYTE *)a3 + 8) = 1;
      }
      else
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x8007000E, 0x122u, 0LL);
      }
    }
  }
  std::vector<unsigned char>::_Tidy(v19);
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v8;
}
