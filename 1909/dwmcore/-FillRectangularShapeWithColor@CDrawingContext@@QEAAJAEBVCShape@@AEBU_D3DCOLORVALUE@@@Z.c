/*
 * XREFs of ?FillRectangularShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016DE28
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z @ 0x18021840C (-RenderBlackShape@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBVCShape@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180034D0C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18003F594 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x180042858 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180098B60 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800C0A10 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillRectangularShapeWithColor(
        CDrawingContext *this,
        const struct CShape *a2,
        const __m128i *a3)
{
  signed int v6; // ebx
  CDrawingContext *v7; // rcx
  unsigned int v8; // ebx
  char *v9; // rax
  __int64 v10; // rcx
  char *v11; // rdi
  CGeometryOnlyDrawListBrush *v12; // rcx
  CGeometryOnlyDrawListBrush *v13; // rcx
  CGeometryOnlyDrawListBrush *v14; // rax
  __m128 v15; // xmm1
  CGeometryOnlyDrawListBrush *v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rcx
  signed int v19; // eax
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
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xC1Cu, 0LL);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned __int64 *))(*(_QWORD *)a2 + 40LL))(
                a2,
                &v26) )
    {
      v27 = 0LL;
      v8 = v26;
      v9 = (char *)DefaultHeap::Alloc(saturated_mul((unsigned int)v26, 0x10uLL));
      v11 = v9;
      if ( v9 )
        `vector constructor iterator'(
          v9,
          16LL,
          v8,
          (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
      else
        v11 = 0LL;
      if ( v11 )
      {
        (*(void (__fastcall **)(const struct CShape *, char *, _QWORD))(*(_QWORD *)a2 + 48LL))(
          a2,
          v11,
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
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v6, 0xC0Au, 0LL);
        }
        else
        {
          v14 = v27;
          *((_QWORD *)&v23 + 1) = v11;
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
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v6, 0xC13u, 0LL);
        }
        operator delete(v11);
        v12 = v27;
        if ( v27 )
          goto LABEL_10;
      }
      else
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0xC06u, 0LL);
        v12 = v27;
        if ( v27 )
LABEL_10:
          CGeometryOnlyDrawListBrush::`vector deleting destructor'(v12, 1);
      }
    }
  }
  return (unsigned int)v6;
}
