/*
 * XREFs of ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18024C190
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D7598 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18022A98C (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x18022AC30 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CPathSegmentsShape::GetSimplifiedPathDataInternal(CPathSegmentsShape *this, struct CPathData **a2)
{
  __int64 *v2; // rdi
  unsigned int v3; // ebx
  CPathData *v4; // rcx
  CPathData *v6; // rbx
  signed int v7; // eax
  __int64 v8; // rcx
  struct CPathData *v9; // rdx
  struct CPathData *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v3 = 0;
  v4 = (CPathData *)*((_QWORD *)this + 2);
  v11 = 0LL;
  if ( CPathData::IsSimpleGeometry(v4) )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v11, v2);
LABEL_6:
    v9 = 0LL;
    *a2 = v11;
    goto LABEL_8;
  }
  v6 = (CPathData *)*v2;
  if ( v11 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v11 + 16LL))(v11);
  v7 = CPathData::Simplify(v6, &v11);
  v3 = v7;
  if ( v7 >= 0 )
    goto LABEL_6;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2Fu, 0LL);
  v9 = v11;
LABEL_8:
  if ( v9 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v3;
}
