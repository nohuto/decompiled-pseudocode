/*
 * XREFs of ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18021F368
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z @ 0x180199AB0 (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShape@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800F001B (fmodf_0.c)
 *     ??0Segment@Path@@IEAA@W4SegmentType@1@@Z @ 0x1801999EC (--0Segment@Path@@IEAA@W4SegmentType@1@@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801A4FFC (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18021C5C4 (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18021C654 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18021C85C (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?IsSimpleGeometry@CPathData@@QEBA_NXZ @ 0x18021CF1C (-IsSimpleGeometry@CPathData@@QEBA_NXZ.c)
 *     ??0CPathLengthOperation@@QEAA@XZ @ 0x18021E5BC (--0CPathLengthOperation@@QEAA@XZ.c)
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x18021E7A4 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z @ 0x18021F184 (-ProcessSegment@CTrimPathOperation@@AEAA_NAEBUSegment@Path@@@Z.c)
 */

__int64 __fastcall CTrimPathOperation::Trim(
        CTrimPathOperation *this,
        const struct CPathData *a2,
        float a3,
        float a4,
        float a5,
        struct CPathData **a6)
{
  __int64 v6; // r15
  unsigned int v8; // esi
  struct CPathData *v9; // rbx
  float v10; // xmm6_4
  float v11; // xmm10_4
  __int64 v13; // rcx
  int v14; // r9d
  float v15; // xmm2_4
  float v16; // xmm1_4
  LPVOID v17; // rax
  __int64 v18; // rax
  float v19; // xmm7_4
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  CPathLengthOperation *v23; // rax
  float Length; // xmm0_4
  char *v25; // rbx
  char *v26; // rdi
  float v27; // xmm1_4
  char v28; // al
  int v29; // xmm1_4
  const struct Path::Segment *v30; // rdx
  char v31; // al
  LPVOID v32; // rax
  __int64 v33; // rax
  unsigned int v35; // [rsp+28h] [rbp-E0h]
  struct CPathData *v36; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v38; // [rsp+48h] [rbp-C0h] BYREF
  char *i; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v40[224]; // [rsp+68h] [rbp-A0h] BYREF

  v6 = *((_QWORD *)a2 + 6);
  v8 = 0;
  v9 = 0LL;
  v10 = fminf(1.0, fmaxf(a3, 0.0));
  v36 = 0LL;
  v11 = fminf(1.0, fmaxf(a4, 0.0));
  if ( !CPathData::IsSimpleGeometry(a2) )
  {
    v14 = -2003304315;
    v35 = 162;
LABEL_35:
    v8 = v14;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, v35);
    goto LABEL_36;
  }
  v15 = v11 - v10;
  if ( (float)(v11 - v10) < 0.0 )
    v15 = v15 + 1.0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - 1.0)) & _xmm) < 0.0000011920929 )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v36, (__int64)a2);
    v9 = v36;
    goto LABEL_36;
  }
  v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15) & _xmm);
  if ( v16 >= 0.0000011920929 )
  {
    v19 = fmodf_0(v10 + a5, 1.0);
    v20 = fmodf_0(v11 + a5, 1.0);
    v21 = v20;
    if ( v19 < 0.0 )
      v19 = v19 + 1.0;
    if ( v20 < 0.0 )
      v21 = v20 + 1.0;
    *((_BYTE *)this + 396) = 0;
    if ( v19 > v21 )
    {
      v22 = v19;
      *((_BYTE *)this + 396) = 1;
      v19 = v21;
      v21 = v22;
    }
    v23 = CPathLengthOperation::CPathLengthOperation((CPathLengthOperation *)v40);
    Length = CPathLengthOperation::GetLength(v23, a2);
    *((float *)this + 7) = Length * v21;
    *((float *)this + 6) = Length * v19;
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 11) = 0;
    *((_BYTE *)this + 397) = 1;
    *((_QWORD *)this + 1) = *(_QWORD *)this;
    v25 = (char *)*((_QWORD *)a2 + 3);
    v26 = (char *)*((_QWORD *)a2 + 4);
    for ( i = v25; v25 != v26; v25 = i )
    {
      if ( *v25 == 1 && v25[2] )
      {
        v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v25 + 1)) & _xmm);
        if ( v27 >= 0.0000011920929 )
        {
          Path::Segment::Segment(&v38, 2);
          v28 = v25[1];
          v29 = *((_DWORD *)this + 14);
          DWORD1(v38) = *((_DWORD *)v25 + 1);
          HIDWORD(v38) = *((_DWORD *)this + 15);
          DWORD2(v38) = v29;
          BYTE1(v38) = v28;
          CTrimPathOperation::ProcessSegment(this, (const struct Path::Segment *)&v38);
        }
        v30 = (const struct Path::Segment *)&v37;
        v37 = *(_QWORD *)v25;
        v31 = *((_BYTE *)this + 397);
        HIDWORD(v37) = 0;
        BYTE2(v37) = v31;
      }
      else
      {
        v30 = (const struct Path::Segment *)v25;
      }
      if ( !CTrimPathOperation::ProcessSegment(this, v30) )
        break;
      Path::SegmentCollection::const_iterator::operator++(&i);
    }
    v32 = HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
    if ( v32 )
      v33 = CPathData::CPathData((__int64)v32, v6, this);
    else
      v33 = 0LL;
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v36, v33);
    v9 = v36;
    if ( !v36 )
    {
      v35 = 242;
      goto LABEL_34;
    }
  }
  else
  {
    v17 = HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
    if ( v17 )
    {
      v38 = 0LL;
      v18 = CPathData::CPathData((__int64)v17, v6, &v38);
    }
    else
    {
      v18 = 0LL;
    }
    Microsoft::WRL::ComPtr<CPathData>::operator=((__int64 *)&v36, v18);
    v9 = v36;
    if ( !v36 )
    {
      v35 = 179;
LABEL_34:
      v14 = -2147024882;
      goto LABEL_35;
    }
  }
LABEL_36:
  *a6 = v9;
  return v8;
}
