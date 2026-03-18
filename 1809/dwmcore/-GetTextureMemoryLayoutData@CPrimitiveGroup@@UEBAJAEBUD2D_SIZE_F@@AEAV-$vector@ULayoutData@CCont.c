/*
 * XREFs of ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x1801ABF90
 * Callers:
 *     <none>
 * Callees:
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18002AEBC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x180065C24 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x1801A4B10 (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18022AADC (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 */

__int64 __fastcall CPrimitiveGroup::GetTextureMemoryLayoutData(
        CPrimitiveGroupDrawListGenerator **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  FastRegion::CRegion *ContentRegion; // rax
  int appended; // eax
  __int64 v11; // rcx
  __m128 v12; // xmm2
  unsigned __int64 v13; // xmm0_8
  __int64 v14; // rdx
  __int128 v15; // xmm0
  __int64 v16; // xmm1_8
  __m128 v18; // [rsp+38h] [rbp-79h]
  __int128 v19; // [rsp+48h] [rbp-69h] BYREF
  __int128 v20; // [rsp+58h] [rbp-59h]
  __int64 v21; // [rsp+68h] [rbp-49h]
  void *v22[2]; // [rsp+78h] [rbp-39h] BYREF
  int v23; // [rsp+88h] [rbp-29h]
  __int64 v24; // [rsp+8Ch] [rbp-25h]
  _BYTE v25[64]; // [rsp+98h] [rbp-19h] BYREF

  *(_QWORD *)(a3 + 8) = *(_QWORD *)a3;
  v5 = 0;
  v22[0] = v25;
  v22[1] = v25;
  v23 = 4;
  v24 = 4LL;
  v6 = CPrimitiveGroup::EnsureDrawListGenerator((CPrimitiveGroup *)a1);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x247u);
  }
  else
  {
    ContentRegion = CPrimitiveGroupDrawListGenerator::GetContentRegion(a1[20]);
    HIDWORD(v24) = 0;
    appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(ContentRegion, (__int64)v22);
    v8 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, appended, 0x24Au);
    }
    else if ( HIDWORD(v24) )
    {
      do
      {
        v18.m128_f32[0] = (float)*((int *)v22[0] + 4 * v5);
        v18.m128_f32[1] = (float)*((int *)v22[0] + 4 * v5 + 1);
        v18.m128_f32[2] = (float)*((int *)v22[0] + 4 * v5 + 2);
        v18.m128_f32[3] = (float)*((int *)v22[0] + 4 * v5 + 3);
        *((float *)&v20 + 2) = v18.m128_f32[0];
        v12 = _mm_shuffle_ps(v18, v18, 85);
        HIDWORD(v20) = v12.m128_i32[0];
        LODWORD(v21) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
        HIDWORD(v21) = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
        if ( v18.m128_f32[0] == 0.0 && v12.m128_f32[0] == 0.0 )
          v13 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v13 = _mm_unpacklo_ps(v18, v12).m128_u64[0];
        v14 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)&v20 = v13;
        v19 = _xmm;
        if ( *(_QWORD *)(a3 + 16) == v14 )
        {
          std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
            (const void **)a3,
            (_BYTE *)v14,
            (__int64)&v19);
        }
        else
        {
          v15 = v20;
          *(_OWORD *)v14 = _xmm;
          v16 = v21;
          *(_OWORD *)(v14 + 16) = v15;
          *(_QWORD *)(v14 + 32) = v16;
          *(_QWORD *)(a3 + 8) += 40LL;
        }
        ++v5;
      }
      while ( v5 < HIDWORD(v24) );
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(v22);
  return v8;
}
