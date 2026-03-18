/*
 * XREFs of ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800AE220
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x18000E2A0 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x18000E314 (-Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEA.c)
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800155B8 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAVCDrawingContext@@PEAPEAVCPrimitiveGroupDraw.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800457F0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18005C55C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800AE7D4 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800AEDD0 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B1E70 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetBrushParameters(
        CPrimitiveGroupDrawListGenerator ***this,
        struct CBrushDrawListGenerator *a2)
{
  int v4; // esi
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  struct IImageSource *v8; // rdx
  const struct CDrawingContext *v9; // r8
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rbx
  char v13; // si
  int v14; // r15d
  int v15; // eax
  CSurfaceDrawListBrush *v16; // rcx
  int v17; // ecx
  int v18; // ecx
  CSurfaceDrawListBrush *v19; // rcx
  CSurfaceDrawListBrush *v20; // rax
  CSurfaceDrawListBrush *v21; // rcx
  __int64 v22; // xmm1_8
  CSurfaceDrawListBrush **v23; // rax
  CSurfaceDrawListBrush *v24; // r8
  CSurfaceDrawListBrush *v25; // rbx
  CSurfaceDrawListBrush *v26; // rdx
  int v27; // eax
  int DrawListGeneratorNoRef; // eax
  unsigned int v30; // ecx
  __int64 v31; // rcx
  CPrimitiveGroupDrawListBrush *v32; // rcx
  CSurfaceDrawListBrush *v33; // rax
  __int64 v34; // xmm1_8
  __int128 v35; // xmm0
  CSurfaceDrawListBrush *v36; // rax
  __int64 v37; // rcx
  __int64 (__fastcall ***v38)(_QWORD, __int64); // rdx
  CPrimitiveGroupDrawListGenerator **v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  int v42; // ecx
  __int64 v43; // rax
  char v44; // bl
  char v45; // [rsp+30h] [rbp-39h] BYREF
  __int128 v46; // [rsp+38h] [rbp-31h] BYREF
  char v47; // [rsp+48h] [rbp-21h]
  CSurfaceDrawListBrush **v48; // [rsp+50h] [rbp-19h]
  CSurfaceDrawListBrush *v49; // [rsp+58h] [rbp-11h] BYREF
  char v50; // [rsp+60h] [rbp-9h]
  __int128 v51; // [rsp+68h] [rbp-1h] BYREF
  __int64 v52; // [rsp+78h] [rbp+Fh]
  __int128 v53[4]; // [rsp+80h] [rbp+17h] BYREF
  CSurfaceDrawListBrush *v54; // [rsp+D0h] [rbp+67h] BYREF
  CSurfaceDrawListBrush *v55; // [rsp+D8h] [rbp+6Fh] BYREF
  struct CPrimitiveGroupDrawListGenerator *v56; // [rsp+E0h] [rbp+77h] BYREF

  v4 = 0;
  *((_BYTE *)a2 + 76) = 0;
  v5 = 0;
  *((_DWORD *)a2 + 4) = 0;
  for ( *(_OWORD *)((char *)a2 + 20) = _xmm; v5 < *((_DWORD *)a2 + 18); ++v5 )
  {
    v38 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + v5 + 5);
    *((_QWORD *)a2 + v5 + 5) = 0LL;
    if ( v38 )
      std::default_delete<CShape>::operator()((__int64)this, v38);
  }
  *((_DWORD *)a2 + 18) = 0;
  if ( this[11] )
  {
    v6 = CSurfaceBrush::ComputeLayout(
           (CSurfaceBrush *)this,
           (const struct D2D_SIZE_F *)a2 + 1,
           0,
           (struct CContent::LayoutData *)&v51,
           0LL);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x25Cu);
    }
    else
    {
      v8 = (struct IImageSource *)this[12];
      if ( !v8 )
      {
        if ( (*((unsigned __int8 (__fastcall **)(CPrimitiveGroupDrawListGenerator **, __int64))*this[11] + 6))(
               this[11],
               109LL) )
        {
          DrawListGeneratorNoRef = CPrimitiveGroup::GetDrawListGeneratorNoRef(
                                     this[11],
                                     *(struct CDrawingContext **)a2,
                                     &v56);
          v4 = DrawListGeneratorNoRef;
          if ( DrawListGeneratorNoRef < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, DrawListGeneratorNoRef, 0x2A7u);
          }
          else
          {
            v31 = *((unsigned int *)this + 21);
            v55 = 0LL;
            LOBYTE(v54) = InterpolationMode::FromD2D1InterpolationMode(v31);
            *(_WORD *)((char *)&v54 + 1) = 257;
            v48 = &v55;
            v49 = 0LL;
            v50 = 1;
            v4 = CPrimitiveGroupDrawListBrush::Create(v56, (__int16 *)&v54, &v49);
            if ( v50 )
            {
              v32 = *v48;
              *v48 = v49;
              if ( v32 )
                CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v32, 1);
            }
            if ( v4 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v32, 0LL, 0, v4, 0x2ADu);
            }
            else
            {
              v33 = v55;
              v34 = v52;
              *(_OWORD *)((char *)v55 + 8) = v51;
              v35 = v53[0];
              *((_QWORD *)v33 + 3) = v34;
              v36 = v55;
              *((_BYTE *)v55 + 52) = 1;
              *((_OWORD *)v36 + 2) = v35;
              *((_DWORD *)v36 + 12) = 50529027;
              v54 = v55;
              v55 = 0LL;
              CBrushDrawListGenerator::AttachInput((__int64)a2, 0, &v54);
              if ( v54 )
                std::default_delete<CShape>::operator()(v37, (__int64 (__fastcall ***)(_QWORD, __int64))v54);
            }
            if ( v55 )
              CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v55, 1);
          }
        }
        goto LABEL_32;
      }
      v9 = *(const struct CDrawingContext **)a2;
      v47 = 0;
      v46 = 0LL;
      v10 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v46, v8, v9, 0);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x261u);
      }
      else
      {
        v12 = v46;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v46 + 32LL))(v46) && *((_BYTE *)this[2] + 1256) )
        {
          *(_OWORD *)((char *)a2 + 20) = _xmm;
          *((_BYTE *)a2 + 76) = 0;
          *((_DWORD *)a2 + 4) = 4;
LABEL_28:
          if ( *((_QWORD *)&v46 + 1) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 16LL))(*((_QWORD *)&v46 + 1));
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          goto LABEL_32;
        }
        v13 = 2;
        v14 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) != 0 ? 2 : 0;
        if ( (*((unsigned __int8 (__fastcall **)(CPrimitiveGroupDrawListGenerator **, __int64))*this[11] + 6))(
               this[11],
               15LL) )
        {
          v39 = this[11];
          v40 = (__int64)(v39 + 27);
          if ( !v39 )
            v40 = 232LL;
          v41 = *(_QWORD *)v40;
          v42 = v14 | 0x100;
          v43 = (__int64)v39 + 365;
          if ( v41 != *(_QWORD *)(*(_QWORD *)a2 + 6056LL) )
            v42 = v14;
          if ( !v39 )
            v43 = 381LL;
          v14 = v42 | 4;
          if ( *(_BYTE *)v43 != 2 )
            v14 = v42;
        }
        else
        {
          v54 = 0LL;
          v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, CSurfaceDrawListBrush **))v12)(
                  v12,
                  &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
                  &v54);
          v16 = v54;
          if ( v15 >= 0 )
          {
            v44 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *))(*(_QWORD *)v54 + 96LL))(v54);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v54);
            v14 |= 0x10u;
            if ( v44 )
              v14 |= 0x100u;
          }
          else if ( v54 )
          {
            v54 = 0LL;
            (*(void (__fastcall **)(CSurfaceDrawListBrush *))(*(_QWORD *)v16 + 16LL))(v16);
          }
        }
        v17 = *((_DWORD *)this + 21);
        v55 = 0LL;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( !v18 || v18 != 2 )
            v13 = 1;
        }
        else
        {
          v13 = 0;
        }
        LOBYTE(v54) = v13;
        *(_WORD *)((char *)&v54 + 1) = 257;
        v48 = &v55;
        v49 = 0LL;
        v50 = 1;
        v4 = CSurfaceDrawListBrush::CreateWithContentRect(&v46, &v54, v53, &v49);
        if ( v50 )
        {
          v19 = *v48;
          *v48 = v49;
          if ( v19 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1);
        }
        if ( v4 >= 0 )
        {
          v20 = v55;
          v21 = 0LL;
          v22 = v52;
          *(_OWORD *)((char *)v55 + 8) = v51;
          *((_QWORD *)v20 + 3) = v22;
          v23 = (CSurfaceDrawListBrush **)((char *)a2 + 40);
          v24 = v55;
          v55 = 0LL;
          v25 = v24;
          if ( (char *)a2 + 40 != &v45 )
          {
            v26 = *v23;
            v25 = 0LL;
            *v23 = v24;
            v24 = 0LL;
            if ( v26 )
            {
              std::default_delete<CShape>::operator()(0LL, (__int64 (__fastcall ***)(_QWORD, __int64))v26);
              v21 = v55;
              v24 = 0LL;
            }
          }
          v27 = 1;
          if ( *((_DWORD *)a2 + 18) > 1u )
            v27 = *((_DWORD *)a2 + 18);
          *((_DWORD *)a2 + 18) = v27;
          if ( v24 )
          {
            std::default_delete<CShape>::operator()((__int64)v21, (__int64 (__fastcall ***)(_QWORD, __int64))v25);
            v21 = v55;
          }
          *((_DWORD *)a2 + 4) = v14;
          if ( v21 )
            CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1);
          v12 = v46;
          goto LABEL_28;
        }
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v19, 0LL, 0, v4, 0x299u);
        if ( v55 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v55, 1);
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v46 + 1);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v46);
    }
LABEL_32:
    if ( v4 < 0 )
      CBrushDrawListGenerator::Reset(a2);
  }
  return (unsigned int)v4;
}
