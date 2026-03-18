/*
 * XREFs of ?FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801650A4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x1801B9E74 (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005C7CC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180064010 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18008DAB4 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18008DCB4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillRectangularShapeWithColor(
        CDrawingContext *this,
        const struct CShape *a2,
        const __m128i *a3)
{
  int v6; // ebx
  CDrawingContext *v7; // rcx
  unsigned int v8; // ebx
  SIZE_T v9; // rax
  char *v10; // rax
  __int64 v11; // rcx
  char *v12; // rdi
  CGeometryOnlyDrawListBrush *v13; // rcx
  CGeometryOnlyDrawListBrush *v14; // rax
  __m128 v15; // xmm1
  CGeometryOnlyDrawListBrush *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h] BYREF
  struct CGeometryOnlyDrawListBrush *v24[2]; // [rsp+50h] [rbp-20h] BYREF
  char v25; // [rsp+60h] [rbp-10h]
  unsigned __int64 v26; // [rsp+A8h] [rbp+38h] BYREF
  CGeometryOnlyDrawListBrush *v27; // [rsp+B8h] [rbp+48h] BYREF

  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)a2 + 16LL))(a2)
    && *(float *)&a3->m128i_i32[3] > 0.0 )
  {
    if ( CDrawingContext::IsBounding(this) )
    {
      v19 = CDrawingContext::FillShapeForBounds(v7, a2);
      v6 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xBDEu);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned __int64 *))(*(_QWORD *)a2 + 40LL))(
                a2,
                &v26) )
    {
      v27 = 0LL;
      v8 = v26;
      v9 = 16LL * (unsigned int)v26;
      if ( !is_mul_ok((unsigned int)v26, 0x10uLL) )
        v9 = -1LL;
      if ( !v9 )
        v9 = 1LL;
      v10 = (char *)HeapAlloc(WPF::g_processHeap, 0, v9);
      v12 = v10;
      if ( v10 )
        `vector constructor iterator'(
          v10,
          16LL,
          v8,
          (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
      else
        v12 = 0LL;
      if ( v12 )
      {
        (*(void (__fastcall **)(const struct CShape *, char *, _QWORD))(*(_QWORD *)a2 + 48LL))(
          a2,
          v12,
          (unsigned int)v26);
        v24[1] = 0LL;
        v24[0] = (struct CGeometryOnlyDrawListBrush *)&v27;
        v25 = 1;
        v6 = CGeometryOnlyDrawListBrush::Create(&v24[1]);
        if ( v25 )
        {
          v13 = *(CGeometryOnlyDrawListBrush **)v24[0];
          *(_QWORD *)v24[0] = v24[1];
          if ( v13 )
            CGeometryOnlyDrawListBrush::`vector deleting destructor'(v13, 1);
        }
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v6, 0xBCCu);
        }
        else
        {
          v14 = v27;
          *((_QWORD *)&v23 + 1) = v12;
          *((_DWORD *)v27 + 12) = 0;
          *((_OWORD *)v14 + 2) = 0LL;
          *((_BYTE *)v14 + 52) = 1;
          v15 = (__m128)_mm_loadu_si128(a3);
          *(_QWORD *)&v23 = (unsigned int)v26;
          v16 = v27;
          v27 = 0LL;
          HIDWORD(v22) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
          LODWORD(v22) = v15.m128_i32[0];
          DWORD1(v22) = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
          DWORD2(v22) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
          v17 = v22;
          *(_QWORD *)&v22 = v16;
          *(_OWORD *)v24 = v17;
          v6 = CDrawingContext::FillRectanglesAsDrawList(this, (__int64 **)&v22, &v23, (__int128 *)v24);
          if ( (_QWORD)v22 )
            std::default_delete<CShape>::operator()(v18, (__int64 (__fastcall ***)(_QWORD, __int64))v22);
          if ( v6 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v6, 0xBD5u);
        }
        WPF::ProcessHeapImpl::Free(v12);
      }
      else
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0xBC8u);
      }
      if ( v27 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v27, 1);
    }
  }
  return (unsigned int)v6;
}
