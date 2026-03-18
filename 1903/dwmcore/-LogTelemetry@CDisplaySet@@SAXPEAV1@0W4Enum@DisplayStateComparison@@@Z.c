/*
 * XREFs of ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A2AC8
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800E97B0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 * Callees:
 *     ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18001F5E8 (-HasDDAChanged@CDisplay@@QEBA_NXZ.c)
 *     ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x18001F634 (-ShouldTripleBuffer@CDisplay@@QEBA_NXZ.c)
 *     SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_ @ 0x1800222D4 (SAFE_DELETE_ARRAY__CDisplaySet--LogTelemetry_--_5_--DisplayData_.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180042DC8 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x18004ABC0 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     TraceLoggingProviderEnabled @ 0x180086B28 (TraceLoggingProviderEnabled.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180089DA0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800A4DB0 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800AF914 (-IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800AF930 (-IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B1158 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CDisplaySet::LogTelemetry(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  char *v5; // r13
  char *v6; // r15
  unsigned __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // r12
  int *v10; // rdi
  __int64 v11; // rsi
  int v12; // ebx
  __m128i v13; // xmm1
  __int64 v14; // xmm0_8
  CDisplay *v15; // rcx
  CDisplay *v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned __int64 v19; // rbx
  int v20; // ecx
  __int64 v21; // r14
  int *v22; // rax
  __int64 v23; // r15
  int *v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rsi
  int v27; // ebx
  __m128i v28; // xmm1
  __int64 v29; // xmm0_8
  CDisplay *v30; // rcx
  CDisplay *v31; // rcx
  __int64 v32; // r10
  __int64 v33; // r11
  int v34; // r9d
  int v35; // [rsp+30h] [rbp-D0h] BYREF
  int AdapterPopulationUniqueness; // [rsp+34h] [rbp-CCh] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v38; // [rsp+3Ch] [rbp-C4h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+4Ch] [rbp-B4h] BYREF
  int *v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h]
  char *v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h]
  int v47; // [rsp+80h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  GUID *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  int *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  _DWORD *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  char *v57; // [rsp+F0h] [rbp-10h]
  _DWORD v58[2]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  char *v61; // [rsp+110h] [rbp+10h]
  _DWORD v62[2]; // [rsp+118h] [rbp+18h] BYREF
  int *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  int *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  int *p_AdapterPopulationUniqueness; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  int *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  int *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  ULONG *v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]

  v37 = a3;
  v3 = a2;
  v44 = a2;
  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18033A1D0, 4u, 0x400000000000uLL) )
  {
    v45 = 0LL;
    AdapterPopulationUniqueness = 0;
    v39 = -1;
    v5 = 0LL;
    v41 = -1;
    v6 = 0LL;
    v43 = 0LL;
    v35 = 0;
    v40 = -1;
    v42 = -1;
    if ( a1 )
    {
      v7 = *(unsigned int *)(a1 + 72);
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
      v41 = *(_DWORD *)(a1 + 4);
      v39 = v8;
      if ( (_DWORD)v7 )
      {
        v9 = (unsigned int)v7;
        v45 = (char *)operator new(saturated_mul(v7, 0x5CuLL));
        v5 = v45;
        if ( v45 )
        {
          AdapterPopulationUniqueness = 92 * v7;
          v10 = (int *)(v45 + 88);
          do
          {
            v11 = *(_QWORD *)&v6[*(_QWORD *)(a1 + 48)];
            *((_QWORD *)v10 - 11) = (unsigned int)*(_QWORD *)(v11 + 232) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v11 + 232)) << 32);
            *(v10 - 20) = *(_DWORD *)(v11 + 240);
            v12 = 0;
            *(v10 - 19) = *CDisplay::GetDisplayId(v11, &v38);
            *(v10 - 18) = *(_DWORD *)(v11 + 244);
            v13 = *(__m128i *)(v11 + 264);
            v14 = *(_QWORD *)(v11 + 280);
            v47 = *(_DWORD *)(v11 + 288);
            *(v10 - 16) = v13.m128i_i32[1];
            *(v10 - 17) = _mm_cvtsi128_si32(v13);
            v46 = v14;
            *(v10 - 14) = _mm_srli_si128(v13, 8).m128i_i32[1];
            *((_BYTE *)v10 - 52) = v46;
            *((_BYTE *)v10 - 51) = v47;
            *((_BYTE *)v10 - 50) = BYTE4(v46);
            *(v10 - 15) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
            *((_BYTE *)v10 - 49) = *(_BYTE *)(v11 + 296);
            *(v10 - 12) = *(_DWORD *)(v11 + 120);
            *(v10 - 11) = *(_DWORD *)(v11 + 124);
            *(v10 - 10) = *(_DWORD *)(v11 + 128) - *(_DWORD *)(v11 + 120);
            *(v10 - 9) = *(_DWORD *)(v11 + 132) - *(_DWORD *)(v11 + 124);
            *(v10 - 8) = *(_DWORD *)(v11 + 88);
            *(v10 - 7) = *(_DWORD *)(v11 + 92);
            *(v10 - 6) = *(_DWORD *)(v11 + 96) - *(_DWORD *)(v11 + 88);
            *(v10 - 5) = *(_DWORD *)(v11 + 100) - *(_DWORD *)(v11 + 92);
            *(v10 - 4) = *(_DWORD *)(v11 + 104);
            *(v10 - 3) = *(_DWORD *)(v11 + 108);
            *(v10 - 2) = *(_DWORD *)(v11 + 112) - *(_DWORD *)(v11 + 104);
            *(_QWORD *)(v10 - 1) = (unsigned int)(*(_DWORD *)(v11 + 116) - *(_DWORD *)(v11 + 108));
            if ( CDisplay::NeedsDesktopMoves((CDisplay *)v11) == 1 )
            {
              *v10 = 1;
              v12 = 1;
            }
            if ( *(_BYTE *)(v11 + 312) == 1 )
            {
              v12 |= 2u;
              *v10 = v12;
            }
            if ( CDisplay::IsPrimary(v15) )
            {
              v12 |= 4u;
              *v10 = v12;
            }
            if ( *(_QWORD *)(v11 + 152) != v11 )
            {
              v12 |= 8u;
              *v10 = v12;
            }
            if ( *(_BYTE *)(v11 + 316) == 1 )
            {
              v12 |= 0x10u;
              *v10 = v12;
            }
            if ( *(_BYTE *)(v11 + 314) == 1 )
            {
              v12 |= 0x20u;
              *v10 = v12;
            }
            if ( CDisplay::HasVirtualModeScale(v16) == 1 )
            {
              v12 |= 0x40u;
              *v10 = v12;
            }
            if ( ((unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(v18, v17) ^ 1) == 1 )
            {
              v12 |= 0x80u;
              *v10 = v12;
            }
            if ( CDisplay::ShouldTripleBuffer((struct _LUID *)v11) == 1 )
            {
              v12 |= 0x100u;
              *v10 = v12;
            }
            if ( *(_BYTE *)(v11 + 300) && *(_BYTE *)(v11 + 301) )
              *v10 = v12 | 0x200;
            if ( CDisplay::HasDDAChanged((CDisplay *)v11) )
              *v10 |= 0x400u;
            if ( *(_BYTE *)(v11 + 319) && *(_BYTE *)(v11 + 314) )
              *v10 |= 0x800u;
            if ( *(_BYTE *)(v11 + 302) == 1 )
              *v10 |= 0x1000u;
            if ( *(int *)(v11 + 252) < 2000 )
              *v10 |= 0x4000u;
            if ( CDisplay::IsOldIntelOverlayDriver((CDisplay *)v11) )
              *v10 |= 0x8000u;
            if ( CDisplay::IsOldQualcommOverlayDriver((CDisplay *)v11) )
              *v10 |= 0x10000u;
            v10 += 23;
            v6 += 8;
            --v9;
          }
          while ( v9 );
          v6 = (char *)v43;
          v3 = v44;
        }
      }
    }
    if ( v3 )
    {
      v19 = *(unsigned int *)(v3 + 72);
      v20 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 56LL);
      v42 = *(_DWORD *)(v3 + 4);
      v40 = v20;
      if ( (_DWORD)v19 )
      {
        v21 = (unsigned int)v19;
        v22 = (int *)operator new(saturated_mul(v19, 0x5CuLL));
        v43 = v22;
        v6 = (char *)v22;
        if ( v22 )
        {
          v35 = 92 * v19;
          v23 = v44;
          v24 = v22 + 22;
          v25 = 0LL;
          do
          {
            v26 = *(_QWORD *)(v25 + *(_QWORD *)(v23 + 48));
            *((_QWORD *)v24 - 11) = (unsigned int)*(_QWORD *)(v26 + 232) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v26 + 232)) << 32);
            *(v24 - 20) = *(_DWORD *)(v26 + 240);
            v27 = 0;
            *(v24 - 19) = *CDisplay::GetDisplayId(v26, &v38);
            *(v24 - 18) = *(_DWORD *)(v26 + 244);
            v28 = *(__m128i *)(v26 + 264);
            v29 = *(_QWORD *)(v26 + 280);
            v47 = *(_DWORD *)(v26 + 288);
            *(v24 - 16) = v28.m128i_i32[1];
            *(v24 - 17) = _mm_cvtsi128_si32(v28);
            v46 = v29;
            *(v24 - 14) = _mm_srli_si128(v28, 8).m128i_i32[1];
            *((_BYTE *)v24 - 52) = v46;
            *((_BYTE *)v24 - 51) = v47;
            *((_BYTE *)v24 - 50) = BYTE4(v46);
            *(v24 - 15) = _mm_cvtsi128_si32(_mm_srli_si128(v28, 8));
            *((_BYTE *)v24 - 49) = *(_BYTE *)(v26 + 296);
            *(v24 - 12) = *(_DWORD *)(v26 + 120);
            *(v24 - 11) = *(_DWORD *)(v26 + 124);
            *(v24 - 10) = *(_DWORD *)(v26 + 128) - *(_DWORD *)(v26 + 120);
            *(v24 - 9) = *(_DWORD *)(v26 + 132) - *(_DWORD *)(v26 + 124);
            *(v24 - 8) = *(_DWORD *)(v26 + 88);
            *(v24 - 7) = *(_DWORD *)(v26 + 92);
            *(v24 - 6) = *(_DWORD *)(v26 + 96) - *(_DWORD *)(v26 + 88);
            *(v24 - 5) = *(_DWORD *)(v26 + 100) - *(_DWORD *)(v26 + 92);
            *(v24 - 4) = *(_DWORD *)(v26 + 104);
            *(v24 - 3) = *(_DWORD *)(v26 + 108);
            *(v24 - 2) = *(_DWORD *)(v26 + 112) - *(_DWORD *)(v26 + 104);
            *(_QWORD *)(v24 - 1) = (unsigned int)(*(_DWORD *)(v26 + 116) - *(_DWORD *)(v26 + 108));
            if ( CDisplay::NeedsDesktopMoves((CDisplay *)v26) == 1 )
            {
              *v24 = 1;
              v27 = 1;
            }
            if ( *(_BYTE *)(v26 + 312) == 1 )
            {
              v27 |= 2u;
              *v24 = v27;
            }
            if ( CDisplay::IsPrimary(v30) )
            {
              v27 |= 4u;
              *v24 = v27;
            }
            if ( *(_QWORD *)(v26 + 152) != v26 )
            {
              v27 |= 8u;
              *v24 = v27;
            }
            if ( *(_BYTE *)(v26 + 316) == 1 )
            {
              v27 |= 0x10u;
              *v24 = v27;
            }
            if ( *(_BYTE *)(v26 + 314) == 1 )
            {
              v27 |= 0x20u;
              *v24 = v27;
            }
            if ( CDisplay::HasVirtualModeScale(v31) == 1 )
            {
              v27 |= 0x40u;
              *v24 = v27;
            }
            if ( ((unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(v33, v32) ^ 1) == 1 )
            {
              v27 |= 0x80u;
              *v24 = v27;
            }
            if ( CDisplay::ShouldTripleBuffer((struct _LUID *)v26) == 1 )
            {
              v27 |= 0x100u;
              *v24 = v27;
            }
            if ( *(_BYTE *)(v26 + 300) && *(_BYTE *)(v26 + 301) )
              *v24 = v27 | 0x200;
            if ( CDisplay::HasDDAChanged((CDisplay *)v26) )
              *v24 |= 0x400u;
            if ( *(_BYTE *)(v26 + 319) && *(_BYTE *)(v26 + 314) )
              *v24 |= 0x800u;
            if ( *(_BYTE *)(v26 + 302) == 1 )
              *v24 |= 0x1000u;
            if ( *(int *)(v26 + 252) < 2000 )
              *v24 |= 0x4000u;
            if ( CDisplay::IsOldIntelOverlayDriver((CDisplay *)v26) )
              *v24 |= 0x8000u;
            if ( CDisplay::IsOldQualcommOverlayDriver((CDisplay *)v26) )
              *v24 |= 0x10000u;
            v24 += 23;
            v25 += 8LL;
            --v21;
          }
          while ( v21 );
          v6 = (char *)v43;
        }
      }
    }
    if ( dword_18033A1D0 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 0x400000000000uLL) )
      {
        v35 = 1;
        v49 = &v35;
        v51 = &gDwmCoreTelemetryActivityId;
        v53 = &v37;
        v55 = v58;
        v58[0] = AdapterPopulationUniqueness;
        v59 = v62;
        v63 = &v39;
        v65 = &v40;
        v50 = 4LL;
        v52 = 16LL;
        v54 = 4LL;
        v56 = 2LL;
        v57 = v5;
        v58[1] = 0;
        v60 = 2LL;
        v61 = v6;
        v62[0] = v34;
        v62[1] = 0;
        v64 = 4LL;
        v66 = 4LL;
        AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness();
        p_AdapterPopulationUniqueness = &AdapterPopulationUniqueness;
        v69 = &v41;
        v71 = &v42;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v38 = GdiEntry13();
        v73 = &v38;
        v74 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18033A1D0, &unk_1802D900B, 0LL, 0LL, 0xFu, &pData);
      }
    }
    SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_((void **)&v45);
    SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_((void **)&v43);
  }
}
