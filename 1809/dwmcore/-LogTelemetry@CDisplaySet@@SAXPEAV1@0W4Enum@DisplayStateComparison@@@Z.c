/*
 * XREFs of ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18007D9B4
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18007EE70 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 * Callees:
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18001D118 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x18001D164 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_ @ 0x18002034C (SAFE_DELETE_ARRAY__CDisplaySet--LogTelemetry_--_5_--DisplayData_.c)
 *     TraceLoggingProviderEnabled @ 0x18002C0A0 (TraceLoggingProviderEnabled.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180031C88 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180081530 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x18008C6C8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008FE94 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800A8E54 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800D7D64 (-IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800D7D80 (-IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CDisplaySet::LogTelemetry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // r13
  char *v6; // r15
  int *v7; // r14
  unsigned __int64 v8; // rbx
  int v9; // ecx
  __int64 v10; // r12
  int *v11; // rbx
  __m128i *v12; // rdi
  __m128i v13; // xmm1
  __int64 v14; // xmm0_8
  int v15; // eax
  CDisplay *v16; // rcx
  int v17; // r10d
  CDisplay *v18; // rcx
  int v19; // r10d
  int v20; // r10d
  __int64 v21; // r11
  int v22; // r10d
  unsigned __int64 v23; // rbx
  int v24; // ecx
  __int64 v25; // rsi
  int *v26; // rax
  __int64 v27; // r15
  int *v28; // rbx
  __int64 v29; // r12
  __m128i *v30; // rdi
  __m128i v31; // xmm1
  __int64 v32; // xmm0_8
  CDisplay *v33; // rcx
  int v34; // r10d
  CDisplay *v35; // rcx
  int v36; // r10d
  int v37; // r10d
  __int64 v38; // r11
  int v39; // r10d
  int v40; // r9d
  int v41; // [rsp+30h] [rbp-D0h] BYREF
  int AdapterPopulationUniqueness; // [rsp+34h] [rbp-CCh] BYREF
  int v43; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v44; // [rsp+3Ch] [rbp-C4h] BYREF
  int v45; // [rsp+40h] [rbp-C0h] BYREF
  int v46; // [rsp+44h] [rbp-BCh] BYREF
  int v47; // [rsp+48h] [rbp-B8h] BYREF
  int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  char *v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+58h] [rbp-A8h]
  int *v51; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  __int32 v53; // [rsp+80h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  GUID *v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  int *v59; // [rsp+D0h] [rbp-30h]
  __int64 v60; // [rsp+D8h] [rbp-28h]
  _DWORD *v61; // [rsp+E0h] [rbp-20h]
  __int64 v62; // [rsp+E8h] [rbp-18h]
  char *v63; // [rsp+F0h] [rbp-10h]
  _DWORD v64[2]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v65; // [rsp+100h] [rbp+0h]
  __int64 v66; // [rsp+108h] [rbp+8h]
  int *v67; // [rsp+110h] [rbp+10h]
  _DWORD v68[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v69; // [rsp+120h] [rbp+20h]
  __int64 v70; // [rsp+128h] [rbp+28h]
  int *v71; // [rsp+130h] [rbp+30h]
  __int64 v72; // [rsp+138h] [rbp+38h]
  int *p_AdapterPopulationUniqueness; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  int *v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  int *v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+168h] [rbp+68h]
  ULONG *v79; // [rsp+170h] [rbp+70h]
  __int64 v80; // [rsp+178h] [rbp+78h]

  v43 = a3;
  v3 = a2;
  v50 = a2;
  v5 = 0LL;
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_180305E80, 4u, 0x400000000000uLL) )
  {
    v49 = 0LL;
    AdapterPopulationUniqueness = 0;
    v45 = -1;
    v6 = 0LL;
    v47 = -1;
    v7 = 0LL;
    v51 = 0LL;
    v41 = 0;
    v46 = -1;
    v48 = -1;
    if ( a1 )
    {
      v8 = *(unsigned int *)(a1 + 72);
      v9 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
      v47 = *(_DWORD *)(a1 + 4);
      v45 = v9;
      if ( (_DWORD)v8 )
      {
        v10 = (unsigned int)v8;
        v49 = (char *)operator new(saturated_mul(v8, 0x5CuLL));
        v6 = v49;
        if ( v49 )
        {
          AdapterPopulationUniqueness = 92 * v8;
          v11 = (int *)(v49 + 88);
          do
          {
            v12 = *(__m128i **)(*(_QWORD *)(a1 + 48) + v5);
            *((_QWORD *)v11 - 11) = (unsigned int)v12[15].m128i_i64[0] | (unsigned __int64)((__int64)(int)HIDWORD(v12[15].m128i_i64[0]) << 32);
            *(v11 - 20) = v12[15].m128i_i32[2];
            *(v11 - 19) = *(_DWORD *)CDisplay::GetDisplayId(v12, &v44);
            *(v11 - 18) = v12[15].m128i_i32[3];
            v13 = v12[17];
            v14 = v12[18].m128i_i64[0];
            v53 = v12[18].m128i_i32[2];
            *(v11 - 16) = v13.m128i_i32[1];
            *(v11 - 17) = _mm_cvtsi128_si32(v13);
            v52 = v14;
            *(v11 - 14) = _mm_srli_si128(v13, 8).m128i_i32[1];
            *((_BYTE *)v11 - 52) = v52;
            *((_BYTE *)v11 - 51) = v53;
            *((_BYTE *)v11 - 50) = BYTE4(v52);
            *(v11 - 15) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
            *((_BYTE *)v11 - 49) = v12[19].m128i_i8[0];
            *(v11 - 12) = v12[7].m128i_i32[2];
            *(v11 - 11) = v12[7].m128i_i32[3];
            *(v11 - 10) = v12[8].m128i_i32[0] - v12[7].m128i_i32[2];
            *(v11 - 9) = v12[8].m128i_i32[1] - v12[7].m128i_i32[3];
            *(v11 - 8) = v12[5].m128i_i32[2];
            *(v11 - 7) = v12[5].m128i_i32[3];
            *(v11 - 6) = v12[6].m128i_i32[0] - v12[5].m128i_i32[2];
            *(v11 - 5) = v12[6].m128i_i32[1] - v12[5].m128i_i32[3];
            *(v11 - 4) = v12[6].m128i_i32[2];
            *(v11 - 3) = v12[6].m128i_i32[3];
            *(v11 - 2) = v12[7].m128i_i32[0] - v12[6].m128i_i32[2];
            v15 = v12[7].m128i_i32[1] - v12[6].m128i_i32[3];
            *v11 = 0;
            *(v11 - 1) = v15;
            if ( CDisplay::NeedsDesktopMoves((CDisplay *)v12) )
            {
              *v11 = 1;
              v17 = 1;
            }
            if ( v12[20].m128i_i8[0] == 1 )
              *v11 = v17 | 2;
            if ( CDisplay::IsPrimary(v16) )
            {
              v19 |= 4u;
              *v11 = v19;
            }
            if ( (__m128i *)v12[9].m128i_i64[1] != v12 )
            {
              v19 |= 8u;
              *v11 = v19;
            }
            if ( v12[20].m128i_i8[3] == 1 )
            {
              v19 |= 0x10u;
              *v11 = v19;
            }
            if ( v12[20].m128i_i8[2] == 1 )
              *v11 = v19 | 0x20;
            if ( CDisplay::HasVirtualModeScale(v18) == 1 )
              *v11 = v20 | 0x40;
            if ( ((unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                     &v12[6].m128i_u64[1],
                                     v21) ^ 1) == 1 )
              *v11 = v22 | 0x80;
            if ( CDisplay::ShouldTripleBuffer((CDisplay *)v12) == 1 )
              *v11 |= 0x100u;
            if ( v12[19].m128i_i8[4] && v12[19].m128i_i8[5] )
              *v11 |= 0x200u;
            if ( CDisplay::HasDDAChanged((CDisplay *)v12) )
              *v11 |= 0x400u;
            if ( v12[20].m128i_i8[5] && v12[20].m128i_i8[2] )
              *v11 |= 0x800u;
            if ( v12[19].m128i_i8[6] == 1 )
              *v11 |= 0x1000u;
            if ( v12[16].m128i_i32[1] < 2000 )
              *v11 |= 0x4000u;
            if ( CDisplay::IsOldIntelOverlayDriver((CDisplay *)v12) )
              *v11 |= 0x8000u;
            if ( CDisplay::IsOldQualcommOverlayDriver((CDisplay *)v12) )
              *v11 |= 0x10000u;
            v5 += 8LL;
            v11 += 23;
            --v10;
          }
          while ( v10 );
          v3 = v50;
        }
      }
    }
    if ( v3 )
    {
      v23 = *(unsigned int *)(v3 + 72);
      v24 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 56LL);
      v48 = *(_DWORD *)(v3 + 4);
      v46 = v24;
      if ( (_DWORD)v23 )
      {
        v25 = (unsigned int)v23;
        v26 = (int *)operator new(saturated_mul(v23, 0x5CuLL));
        v51 = v26;
        v7 = v26;
        if ( v26 )
        {
          v41 = 92 * v23;
          v27 = v50;
          v28 = v26 + 22;
          v29 = 0LL;
          do
          {
            v30 = *(__m128i **)(v29 + *(_QWORD *)(v27 + 48));
            *((_QWORD *)v28 - 11) = (unsigned int)v30[15].m128i_i64[0] | (unsigned __int64)((__int64)(int)HIDWORD(v30[15].m128i_i64[0]) << 32);
            *(v28 - 20) = v30[15].m128i_i32[2];
            *(v28 - 19) = *(_DWORD *)CDisplay::GetDisplayId(v30, &v44);
            *(v28 - 18) = v30[15].m128i_i32[3];
            v31 = v30[17];
            v32 = v30[18].m128i_i64[0];
            v53 = v30[18].m128i_i32[2];
            *(v28 - 16) = v31.m128i_i32[1];
            *(v28 - 17) = _mm_cvtsi128_si32(v31);
            v52 = v32;
            *(v28 - 14) = _mm_srli_si128(v31, 8).m128i_i32[1];
            *((_BYTE *)v28 - 52) = v52;
            *((_BYTE *)v28 - 51) = v53;
            *((_BYTE *)v28 - 50) = BYTE4(v52);
            *(v28 - 15) = _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
            *((_BYTE *)v28 - 49) = v30[19].m128i_i8[0];
            *(v28 - 12) = v30[7].m128i_i32[2];
            *(v28 - 11) = v30[7].m128i_i32[3];
            *(v28 - 10) = v30[8].m128i_i32[0] - v30[7].m128i_i32[2];
            *(v28 - 9) = v30[8].m128i_i32[1] - v30[7].m128i_i32[3];
            *(v28 - 8) = v30[5].m128i_i32[2];
            *(v28 - 7) = v30[5].m128i_i32[3];
            *(v28 - 6) = v30[6].m128i_i32[0] - v30[5].m128i_i32[2];
            *(v28 - 5) = v30[6].m128i_i32[1] - v30[5].m128i_i32[3];
            *(v28 - 4) = v30[6].m128i_i32[2];
            *(v28 - 3) = v30[6].m128i_i32[3];
            *(v28 - 2) = v30[7].m128i_i32[0] - v30[6].m128i_i32[2];
            *(_QWORD *)(v28 - 1) = (unsigned int)(v30[7].m128i_i32[1] - v30[6].m128i_i32[3]);
            if ( CDisplay::NeedsDesktopMoves((CDisplay *)v30) )
            {
              *v28 = 1;
              v34 = 1;
            }
            if ( v30[20].m128i_i8[0] == 1 )
              *v28 = v34 | 2;
            if ( CDisplay::IsPrimary(v33) )
            {
              v36 |= 4u;
              *v28 = v36;
            }
            if ( (__m128i *)v30[9].m128i_i64[1] != v30 )
            {
              v36 |= 8u;
              *v28 = v36;
            }
            if ( v30[20].m128i_i8[3] == 1 )
            {
              v36 |= 0x10u;
              *v28 = v36;
            }
            if ( v30[20].m128i_i8[2] == 1 )
              *v28 = v36 | 0x20;
            if ( CDisplay::HasVirtualModeScale(v35) == 1 )
              *v28 = v37 | 0x40;
            if ( ((unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                     &v30[6].m128i_u64[1],
                                     v38) ^ 1) == 1 )
              *v28 = v39 | 0x80;
            if ( CDisplay::ShouldTripleBuffer((CDisplay *)v30) == 1 )
              *v28 |= 0x100u;
            if ( v30[19].m128i_i8[4] && v30[19].m128i_i8[5] )
              *v28 |= 0x200u;
            if ( CDisplay::HasDDAChanged((CDisplay *)v30) )
              *v28 |= 0x400u;
            if ( v30[20].m128i_i8[5] && v30[20].m128i_i8[2] )
              *v28 |= 0x800u;
            if ( v30[19].m128i_i8[6] == 1 )
              *v28 |= 0x1000u;
            if ( v30[16].m128i_i32[1] < 2000 )
              *v28 |= 0x4000u;
            if ( CDisplay::IsOldIntelOverlayDriver((CDisplay *)v30) )
              *v28 |= 0x8000u;
            if ( CDisplay::IsOldQualcommOverlayDriver((CDisplay *)v30) )
              *v28 |= 0x10000u;
            v29 += 8LL;
            v28 += 23;
            --v25;
          }
          while ( v25 );
          v6 = v49;
        }
      }
    }
    if ( dword_180305E80 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180305E80, 0x400000000000uLL) )
      {
        v41 = 1;
        v55 = &v41;
        v57 = &gDwmCoreTelemetryActivityId;
        v59 = &v43;
        v61 = v64;
        v64[0] = AdapterPopulationUniqueness;
        v65 = v68;
        v69 = &v45;
        v71 = &v46;
        v56 = 4LL;
        v58 = 16LL;
        v60 = 4LL;
        v62 = 2LL;
        v63 = v6;
        v64[1] = 0;
        v66 = 2LL;
        v67 = v7;
        v68[0] = v40;
        v68[1] = 0;
        v70 = 4LL;
        v72 = 4LL;
        AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness();
        p_AdapterPopulationUniqueness = &AdapterPopulationUniqueness;
        v75 = &v47;
        v77 = &v48;
        v74 = 4LL;
        v76 = 4LL;
        v78 = 4LL;
        v44 = GdiEntry13();
        v79 = &v44;
        v80 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_180305E80, &unk_1802B6447, 0LL, 0LL, 0xFu, &pData);
      }
    }
    SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_((void **)&v49);
    SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_((void **)&v51);
  }
}
