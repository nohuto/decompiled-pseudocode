/*
 * XREFs of ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18024B1F0
 * Callers:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x1800BE374 (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1180 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1801E5C04 (-GetPathData@CPathData@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 *     ?GetControlPointsForModification@Segment@Path@@QEAA?AV?$span@UD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x18022962C (-GetControlPointsForModification@Segment@Path@@QEAA-AV-$span@UD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x1802296D0 (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x180229F60 (--$insert@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@X@-$vector@EV-$allocator@E@s.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18022A014 (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z @ 0x18022A1E4 (--9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18022A220 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x18022A250 (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18022A2B0 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x18022AE3C (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 */

__int64 __fastcall CInterpolatePathsOperation::Interpolate(
        CInterpolatePathsOperation *this,
        const struct CPathData *a2,
        const struct CPathData *a3,
        float a4,
        struct CPathData **a5)
{
  unsigned int v6; // r14d
  __int64 *PathData; // rax
  _BYTE *v9; // rax
  float v10; // xmm7_4
  float v11; // xmm1_4
  char *v12; // rbx
  char *v13; // rdi
  __int64 v14; // xmm8_8
  __int128 v15; // xmm9
  char *v16; // r12
  unsigned int Size; // eax
  __int64 v18; // r15
  bool v19; // al
  float *v20; // rbx
  float *v21; // r15
  __int64 v22; // rbx
  LPVOID v23; // rax
  char *v24; // rbx
  __int64 v25; // rcx
  __int128 v27; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  _BYTE *v29; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h]
  int v31; // [rsp+68h] [rbp-A0h]
  __int128 v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+80h] [rbp-88h]
  _QWORD v34[2]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v35; // [rsp+98h] [rbp-70h]
  _QWORD *v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  __int64 v38; // [rsp+B8h] [rbp-50h] BYREF
  float *v39; // [rsp+C0h] [rbp-48h]
  __int128 v40; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v41; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-20h]
  __int128 v43; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v44; // [rsp+108h] [rbp+0h]
  char *v45; // [rsp+188h] [rbp+80h] BYREF
  __int64 v46; // [rsp+190h] [rbp+88h] BYREF

  v45 = (char *)this;
  v6 = 0;
  v33 = 0LL;
  v32 = 0LL;
  PathData = CPathData::GetPathData((__int64)a2, (__int64 *)&v27);
  std::vector<unsigned char>::reserve((__int64)&v32, *PathData);
  v9 = (_BYTE *)*((_QWORD *)a3 + 3);
  v31 = 0;
  LODWORD(v28) = 0;
  v29 = v9;
  v10 = fminf(1.0, fmaxf(a4, 0.0));
  v30 = *((_QWORD *)a3 + 4);
  *(_QWORD *)&v27 = v30;
  *((_QWORD *)&v27 + 1) = v30;
  if ( a2 == a3 || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm), v11 < 0.0000011920929) )
  {
    v45 = (char *)a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v45);
    *a5 = a2;
  }
  else
  {
    v12 = (char *)*((_QWORD *)a2 + 3);
    v13 = (char *)*((_QWORD *)a2 + 4);
    v14 = v28;
    v15 = v27;
    v16 = (char *)*((_QWORD *)&v32 + 1);
    v45 = v12;
    while ( v12 != v13 )
    {
      Size = Path::Segment::GetSize(*v12);
      v37 = 0LL;
      v18 = Size;
      *((_QWORD *)&v35 + 1) = Size;
      *(_QWORD *)&v35 = v34;
      v36 = v34;
      v40 = v35;
      v27 = (unsigned __int64)v34;
      v34[0] = Size;
      v34[1] = v12;
      std::vector<unsigned char>::insert<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>,void>(
        &v32,
        &v46,
        v16,
        &v27,
        &v40);
      v41 = v15;
      v42 = v14;
      v19 = Path::ControlPointCollection::const_iterator::operator!=((__int64)&v29, &v41);
      v16 = (char *)*((_QWORD *)&v32 + 1);
      if ( v19 )
      {
        Path::Segment::GetControlPointsForModification((_BYTE *)(*((_QWORD *)&v32 + 1) - v18), &v38);
        v20 = v39;
        v21 = &v39[2 * v38];
        if ( v39 != v21 )
        {
          v43 = v15;
          v44 = v14;
          do
          {
            if ( Path::ControlPointCollection::const_iterator::operator!=((__int64)&v29, &v43) )
            {
              *v20 = (float)((float)(1.0 - v10) * *v20)
                   + (float)(*(float *)Path::ControlPointCollection::const_iterator::operator*((__int64)&v29) * v10);
              v20[1] = (float)((float)(1.0 - v10) * v20[1])
                     + (float)(*(float *)(Path::ControlPointCollection::const_iterator::operator*((__int64)&v29) + 4)
                             * v10);
              Path::ControlPointCollection::const_iterator::operator++(&v29);
            }
            v20 += 2;
          }
          while ( v20 != v21 );
        }
      }
      Path::SegmentCollection::const_iterator::operator++(&v45);
      v12 = v45;
    }
    v22 = *((_QWORD *)a2 + 6);
    v23 = DefaultHeap::Alloc(0x58uLL);
    if ( v23 )
      v24 = (char *)CPathData::CPathData((__int64)v23, v22, &v32);
    else
      v24 = 0LL;
    v45 = v24;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v45);
    if ( v24 )
    {
      *a5 = (struct CPathData *)v24;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, 0x8007000E, 0x2CEu, 0LL);
    }
  }
  std::vector<unsigned char>::_Tidy((__int64 *)&v32);
  return v6;
}
