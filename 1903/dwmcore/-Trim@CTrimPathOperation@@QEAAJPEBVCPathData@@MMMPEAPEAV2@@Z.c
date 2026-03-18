/*
 * XREFs of ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18024D1E0
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x1801C53F8 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800EC4EB (fmodf_0.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C1A68 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x1801C5344 (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18022B724 (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18022B7B4 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18022B9C0 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18022C09C (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ??0CPathLengthOperation@@QEAA@XZ @ 0x18024C490 (--0CPathLengthOperation@@QEAA@XZ.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18024C678 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18024CFFC (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 */

__int64 __fastcall CTrimPathOperation::Trim(
        CTrimPathOperation *this,
        const struct CPathData *a2,
        float a3,
        float a4,
        float a5,
        struct CPathData **a6)
{
  unsigned int v6; // r14d
  float v9; // xmm10_4
  float v10; // xmm7_4
  float v11; // xmm6_4
  __int64 v12; // r15
  struct CPathData *v13; // rbx
  __int64 v14; // rcx
  float v15; // xmm1_4
  __int64 v16; // rax
  __int64 v17; // rcx
  float v18; // xmm7_4
  float v19; // xmm0_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  CPathLengthOperation *v22; // rax
  float Length; // xmm0_4
  char *v24; // rbx
  char *v25; // rdi
  float v26; // xmm1_4
  char v27; // al
  int v28; // xmm1_4
  const struct Path::Segment *v29; // rdx
  char v30; // al
  __int64 v31; // rax
  unsigned int v33; // [rsp+28h] [rbp-E0h]
  struct CPathData *v34; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+48h] [rbp-C0h] BYREF
  char *i; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v38[224]; // [rsp+68h] [rbp-A0h] BYREF

  v6 = 0;
  v9 = fminf(1.0, fmaxf(a4, 0.0));
  v10 = fminf(1.0, fmaxf(a3, 0.0));
  v11 = v9 - v10;
  if ( (float)(v9 - v10) < 0.0 )
    v11 = v11 + 1.0;
  v12 = *((_QWORD *)a2 + 6);
  v13 = 0LL;
  v34 = 0LL;
  if ( !CPathData::IsSimpleGeometry(a2) )
  {
    v6 = -2003304315;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x88980085, 0xA5u, 0LL);
    goto LABEL_33;
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v11 - 1.0)) & _xmm) < 0.0000011920929 )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v34, (__int64)a2);
    v13 = v34;
    goto LABEL_33;
  }
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm);
  if ( v15 >= 0.0000011920929 )
  {
    v18 = fmodf_0(v10 + a5, 1.0);
    v19 = fmodf_0(v9 + a5, 1.0);
    v20 = v19;
    if ( v18 < 0.0 )
      v18 = v18 + 1.0;
    if ( v19 < 0.0 )
      v20 = v19 + 1.0;
    *((_BYTE *)this + 396) = 0;
    if ( v18 > v20 )
    {
      v21 = v18;
      *((_BYTE *)this + 396) = 1;
      v18 = v20;
      v20 = v21;
    }
    v22 = CPathLengthOperation::CPathLengthOperation((CPathLengthOperation *)v38);
    Length = CPathLengthOperation::GetLength(v22, a2);
    *((float *)this + 6) = Length * v18;
    *((float *)this + 7) = Length * v20;
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 11) = 0;
    *((_BYTE *)this + 397) = 1;
    *((_QWORD *)this + 1) = *(_QWORD *)this;
    v24 = (char *)*((_QWORD *)a2 + 3);
    v25 = (char *)*((_QWORD *)a2 + 4);
    for ( i = v24; v24 != v25; v24 = i )
    {
      if ( *v24 == 1 && v24[2] )
      {
        v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v24 + 1)) & _xmm);
        if ( v26 >= 0.0000011920929 )
        {
          Path::Segment::Segment(&v36, 2);
          v27 = v24[1];
          v28 = *((_DWORD *)this + 14);
          DWORD1(v36) = *((_DWORD *)v24 + 1);
          HIDWORD(v36) = *((_DWORD *)this + 15);
          DWORD2(v36) = v28;
          BYTE1(v36) = v27;
          CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)&v36);
        }
        v29 = (const struct Path::Segment *)&v35;
        v35 = *(_QWORD *)v24;
        v30 = *((_BYTE *)this + 397);
        HIDWORD(v35) = 0;
        BYTE2(v35) = v30;
      }
      else
      {
        v29 = (const struct Path::Segment *)v24;
      }
      if ( !CTrimPathOperation::ProcessSegment(this, v29) )
        break;
      Path::SegmentCollection::const_iterator::operator++(&i);
    }
    v31 = (__int64)DefaultHeap::Alloc(0x58uLL);
    if ( v31 )
      v31 = CPathData::CPathData(v31, v12, this);
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v34, v31);
    v13 = v34;
    if ( !v34 )
    {
      v33 = 243;
      goto LABEL_32;
    }
  }
  else
  {
    v16 = (__int64)DefaultHeap::Alloc(0x58uLL);
    if ( v16 )
    {
      v36 = 0LL;
      v16 = CPathData::CPathData(v16, v12, (__int64 *)&v36);
    }
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v34, v16);
    v13 = v34;
    if ( !v34 )
    {
      v33 = 179;
LABEL_32:
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, 0x8007000E, v33, 0LL);
    }
  }
LABEL_33:
  *a6 = v13;
  return v6;
}
