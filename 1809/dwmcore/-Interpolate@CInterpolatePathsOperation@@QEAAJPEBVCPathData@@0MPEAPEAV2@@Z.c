/*
 * XREFs of ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18021EA48
 * Callers:
 *     ?ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionValue@@11@Z @ 0x18005F1EC (-ExpressionValueLerp@KeyframeInterpolation@@KAXW4DCOMPOSITION_EXPRESSION_TYPE@@MPEAVCExpressionV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180063B14 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x18018C3D4 (-GetPathData@CPathData@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 *     ?GetControlPointsForModification@Segment@Path@@QEAA?AV?$span@UD2D_POINT_2F@@$0?0@gsl@@XZ @ 0x18021C1E0 (-GetControlPointsForModification@Segment@Path@@QEAA-AV-$span@UD2D_POINT_2F@@$0-0@gsl@@XZ.c)
 *     ?GetSize@Segment@Path@@SAIW4SegmentType@2@@Z @ 0x18021C27C (-GetSize@Segment@Path@@SAIW4SegmentType@2@@Z.c)
 *     ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x18021C554 (--$insert@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@X@-$vector@EV-$allocator@E@s.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18021C5C4 (--0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 *     ??9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z @ 0x18021C794 (--9const_iterator@ControlPointCollection@Path@@QEBA_NV012@@Z.c)
 *     ??Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ @ 0x18021C7D0 (--Dconst_iterator@ControlPointCollection@Path@@QEBAAEBUD2D_POINT_2F@@XZ.c)
 *     ??Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ @ 0x18021C7FC (--Econst_iterator@ControlPointCollection@Path@@QEAAAEAV012@XZ.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x18021C85C (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x18021D408 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 */

__int64 __fastcall CInterpolatePathsOperation::Interpolate(
        CInterpolatePathsOperation *this,
        const struct CPathData *a2,
        const struct CPathData *a3,
        float a4,
        struct CPathData **a5)
{
  unsigned int v6; // esi
  __int64 *PathData; // rax
  float v9; // xmm7_4
  float v10; // xmm1_4
  char *v11; // rbx
  char *v12; // rdi
  __int64 v13; // xmm8_8
  __int128 v14; // xmm9
  _BYTE *v15; // r12
  __int64 Size; // r15
  bool v17; // al
  gsl::details *v18; // rcx
  gsl::details *v19; // r8
  gsl::details *v20; // rbx
  gsl::details *v21; // rax
  __int64 v22; // r15
  gsl::details *v23; // r13
  __int64 v24; // rbx
  LPVOID v25; // rax
  char *v26; // rbx
  __int64 v27; // rcx
  __int128 v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h]
  _BYTE *v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  int v33; // [rsp+60h] [rbp-A0h]
  __int128 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  _QWORD v36[2]; // [rsp+80h] [rbp-80h] BYREF
  gsl::details *v37[2]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-60h]
  _QWORD *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int128 v41; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-20h]
  __int128 v44; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v45; // [rsp+100h] [rbp+0h]
  char *v46; // [rsp+190h] [rbp+90h] BYREF
  gsl::details *v47; // [rsp+198h] [rbp+98h]
  __int64 v48; // [rsp+1A0h] [rbp+A0h] BYREF

  v46 = (char *)this;
  v6 = 0;
  v35 = 0LL;
  v34 = 0LL;
  PathData = CPathData::GetPathData(a2, (__int64 *)&v29);
  std::vector<unsigned char>::reserve(&v34, *PathData);
  v31 = (_BYTE *)*((_QWORD *)a3 + 3);
  v32 = *((_QWORD *)a3 + 4);
  *(_QWORD *)&v29 = v32;
  *((_QWORD *)&v29 + 1) = v32;
  v33 = 0;
  LODWORD(v30) = 0;
  v9 = fminf(1.0, fmaxf(a4, 0.0));
  if ( a2 == a3 || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm), v10 < 0.0000011920929) )
  {
    v46 = (char *)a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v46);
    *a5 = a2;
  }
  else
  {
    v11 = (char *)*((_QWORD *)a2 + 3);
    v12 = (char *)*((_QWORD *)a2 + 4);
    v13 = v30;
    v14 = v29;
    v15 = (_BYTE *)*((_QWORD *)&v34 + 1);
    v46 = v11;
    while ( v11 != v12 )
    {
      Size = (unsigned int)Path::Segment::GetSize(*v11);
      *((_QWORD *)&v38 + 1) = Size;
      *(_QWORD *)&v38 = v36;
      v39 = v36;
      v41 = v38;
      v40 = 0LL;
      v29 = (unsigned __int64)v36;
      v36[0] = Size;
      v36[1] = v11;
      std::vector<unsigned char>::insert<gsl::details::span_iterator<gsl::span<unsigned char const,-1>,0>,void>(
        &v34,
        &v48,
        v15,
        &v29,
        &v41);
      v42 = v14;
      v43 = v13;
      v17 = Path::ControlPointCollection::const_iterator::operator!=((__int64)&v31, &v42);
      v15 = (_BYTE *)*((_QWORD *)&v34 + 1);
      if ( v17 )
      {
        Path::Segment::GetControlPointsForModification((_BYTE *)(*((_QWORD *)&v34 + 1) - Size), v37);
        v19 = v37[0];
        v20 = 0LL;
        v21 = v37[0];
        v22 = 0LL;
        v47 = v37[0];
        while ( v20 != v21 )
        {
          if ( v20 == v19 )
            goto LABEL_15;
          v23 = v37[1];
          v44 = v14;
          v45 = v13;
          if ( Path::ControlPointCollection::const_iterator::operator!=((__int64)&v31, &v44) )
          {
            *(float *)((char *)v23 + v22) = (float)((float)(1.0 - v9) * *(float *)((char *)v23 + v22))
                                          + (float)(*(float *)Path::ControlPointCollection::const_iterator::operator*((__int64)&v31)
                                                  * v9);
            *(float *)((char *)v23 + v22 + 4) = (float)((float)(1.0 - v9) * *(float *)((char *)v23 + v22 + 4))
                                              + (float)(*(float *)(Path::ControlPointCollection::const_iterator::operator*((__int64)&v31)
                                                                 + 4)
                                                      * v9);
            Path::ControlPointCollection::const_iterator::operator++(&v31);
            v19 = v37[0];
          }
          if ( v22 < 0 || v20 == v19 )
          {
LABEL_15:
            gsl::details::terminate(v18);
            __debugbreak();
          }
          v21 = v47;
          v20 = (gsl::details *)((char *)v20 + 1);
          v22 += 8LL;
        }
      }
      Path::SegmentCollection::const_iterator::operator++(&v46);
      v11 = v46;
    }
    v24 = *((_QWORD *)a2 + 6);
    v25 = HeapAlloc(WPF::g_processHeap, 0, 0x58uLL);
    if ( v25 )
      v26 = (char *)CPathData::CPathData((__int64)v25, v24, &v34);
    else
      v26 = 0LL;
    v46 = v26;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v46);
    if ( v26 )
    {
      *a5 = (struct CPathData *)v26;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2147024882, 0x2CCu);
    }
  }
  std::vector<unsigned char>::_Tidy((__int64)&v34);
  return v6;
}
