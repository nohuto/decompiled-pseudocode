/*
 * XREFs of ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x180017584
 * Callers:
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180017538 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x1801AEEA8 (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1800176E8 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CCpuClip::ConvertContextDependentClipToLocal(CShape **this)
{
  unsigned int v2; // edi
  CShape *v3; // rcx
  const struct CMILMatrix *v4; // rdx
  CShape *v5; // rax
  int v6; // eax
  unsigned int v7; // ecx
  struct CShape *v9; // [rsp+30h] [rbp-69h] BYREF
  __int128 v10; // [rsp+38h] [rbp-61h]
  __m256i v11; // [rsp+48h] [rbp-51h]
  __int128 v12; // [rsp+68h] [rbp-31h]
  __int128 v13; // [rsp+80h] [rbp-19h] BYREF
  __m256i v14; // [rsp+90h] [rbp-9h]
  __int128 v15; // [rsp+B0h] [rbp+17h]
  int v16; // [rsp+C0h] [rbp+27h]
  unsigned __int64 v17; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v18; // [rsp+D8h] [rbp+3Fh]
  __int64 v19; // [rsp+E0h] [rbp+47h]

  v2 = 0;
  v3 = *this;
  if ( v3 )
  {
    v16 = 0;
    v4 = 0LL;
    v5 = this[1];
    if ( v5 )
    {
      v17 = *(_QWORD *)v5;
      v18 = *((_QWORD *)v5 + 2);
      v19 = *((_QWORD *)v5 + 6);
      D2D1::Matrix3x2F::Invert((D2D1::Matrix3x2F *)&v17);
      v4 = (const struct CMILMatrix *)&v13;
      *((_QWORD *)&v12 + 1) = 0x3F80000000000000LL;
      v16 = 0;
      v3 = *this;
      v11.m256i_i64[0] = v18;
      v10 = v17;
      *(_OWORD *)&v11.m256i_u64[1] = 0LL;
      v11.m256i_i64[3] = 1065353216LL;
      *(_QWORD *)&v12 = v19;
      v13 = v17;
      v14 = v11;
      v15 = v12;
    }
    v6 = CShape::CopyShape(v3, v4, &v9);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xEFu, 0LL);
    }
    else
    {
      CShapePtr::Release((CShapePtr *)(this + 2));
      this[2] = v9;
      *((_BYTE *)this + 24) = 1;
    }
  }
  return v2;
}
