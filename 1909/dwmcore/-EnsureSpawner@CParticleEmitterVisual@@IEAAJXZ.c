/*
 * XREFs of ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801EB2D0
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z @ 0x1801EC9E8 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHPEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800049E4 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x18001D28C (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_ptr@VCSpawner@EmitterShapes@@U?$default_delete@VCSpawner@EmitterShapes@@@std@@@std@@QEAAXPEAVCSpawner@EmitterShapes@@@Z @ 0x1801A1D5C (-reset@-$unique_ptr@VCSpawner@EmitterShapes@@U-$default_delete@VCSpawner@EmitterShapes@@@std@@@s.c)
 *     ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801BD8E0 (-GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??$make_unique@VCEllipseSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@AEAW4EmitFrom@2@$0A@@std@@YA?AV?$unique_ptr@VCEllipseSpawner@EmitterShapes@@U?$default_delete@VCEllipseSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0AEAW4EmitFrom@EmitterShapes@@@Z @ 0x1801E953C (--$make_unique@VCEllipseSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@AEAW4E.c)
 *     ??$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@@YA?AV?$unique_ptr@VCLineSpawner@EmitterShapes@@U?$default_delete@VCLineSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0@Z @ 0x1801E95E0 (--$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@.c)
 *     ??$make_unique@VCPathAreaSpawner@EmitterShapes@@PEAVCPathEmitterArea@2@$0A@@std@@YA?AV?$unique_ptr@VCPathAreaSpawner@EmitterShapes@@U?$default_delete@VCPathAreaSpawner@EmitterShapes@@@std@@@0@$$QEAPEAVCPathEmitterArea@EmitterShapes@@@Z @ 0x1801E9634 (--$make_unique@VCPathAreaSpawner@EmitterShapes@@PEAVCPathEmitterArea@2@$0A@@std@@YA-AV-$unique_p.c)
 *     ??$make_unique@VCPathEdgeSpawner@EmitterShapes@@PEAVCPathEmitterEdge@2@$0A@@std@@YA?AV?$unique_ptr@VCPathEdgeSpawner@EmitterShapes@@U?$default_delete@VCPathEdgeSpawner@EmitterShapes@@@std@@@0@$$QEAPEAVCPathEmitterEdge@EmitterShapes@@@Z @ 0x1801E96A0 (--$make_unique@VCPathEdgeSpawner@EmitterShapes@@PEAVCPathEmitterEdge@2@$0A@@std@@YA-AV-$unique_p.c)
 *     ??$make_unique@VCPointSpawner@EmitterShapes@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPointSpawner@EmitterShapes@@U?$default_delete@VCPointSpawner@EmitterShapes@@@std@@@0@XZ @ 0x1801E970C (--$make_unique@VCPointSpawner@EmitterShapes@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPointSpawner@Emitt.c)
 *     ??$make_unique@VCRectangleEdgeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA?AV?$unique_ptr@VCRectangleEdgeSpawner@EmitterShapes@@U?$default_delete@VCRectangleEdgeSpawner@EmitterShapes@@@std@@@0@AEAM000@Z @ 0x1801E9740 (--$make_unique@VCRectangleEdgeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA-AV-$unique_ptr.c)
 *     ??$make_unique@VCRectangleVolumeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA?AV?$unique_ptr@VCRectangleVolumeSpawner@EmitterShapes@@U?$default_delete@VCRectangleVolumeSpawner@EmitterShapes@@@std@@@0@AEAM000@Z @ 0x1801E97B8 (--$make_unique@VCRectangleVolumeSpawner@EmitterShapes@@AEAMAEAMAEAMAEAM$0A@@std@@YA-AV-$unique_p.c)
 *     ?CreatePathEmitterArea@CPathEmitterArea@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x18020ABE0 (-CreatePathEmitterArea@CPathEmitterArea@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z.c)
 *     ?CreatePathEmitterShape@CPathEmitterEdge@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x18020AD08 (-CreatePathEmitterShape@CPathEmitterEdge@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::EnsureSpawner(CParticleEmitterVisual *this)
{
  void **v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char v5; // al
  CRectangleGeometry *v6; // rcx
  char v7; // r14
  char v8; // al
  _DWORD *v9; // rcx
  int v10; // xmm1_4
  unsigned int v11; // xmm0_4
  void **v12; // rax
  void *v13; // rdx
  _DWORD *v14; // rax
  int v15; // xmm1_4
  unsigned int v16; // xmm0_4
  signed int BoundsSafe; // eax
  __int64 v18; // rcx
  __int64 *v19; // rax
  void *v20; // rdx
  void *v21; // rcx
  void **v22; // rax
  void *v23; // rdx
  CGeometry *v24; // rcx
  signed int ShapeData; // eax
  __int64 v26; // rcx
  const struct CMILMatrix *v27; // rdx
  signed int D2DGeometry; // eax
  __int64 v29; // rcx
  signed int v30; // eax
  __int64 v31; // rcx
  void **v32; // rax
  void *v33; // rdx
  void *v34; // rdi
  signed int v35; // eax
  __int64 v36; // rcx
  void **v37; // rax
  void *v38; // rdx
  void *v39; // rdi
  void **v40; // rax
  void *v41; // rdx
  struct EmitterShapes::CPathEmitterArea *v43; // [rsp+30h] [rbp-40h] BYREF
  struct ID2D1Geometry *v44; // [rsp+38h] [rbp-38h] BYREF
  void *v45; // [rsp+40h] [rbp-30h] BYREF
  __int64 v46; // [rsp+48h] [rbp-28h] BYREF
  char v47; // [rsp+50h] [rbp-20h]
  __int128 v48; // [rsp+58h] [rbp-18h] BYREF

  v1 = (void **)((char *)this + 6096);
  v3 = 0;
  if ( *((_QWORD *)this + 762) )
    return v3;
  v4 = *((_QWORD *)this + 763);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 136LL);
    v6 = (CRectangleGeometry *)*((_QWORD *)this + 763);
    if ( !v5 || (v7 = 1, !CRectangleGeometry::IsRoundedRectangleGeometry(v6)) )
      v7 = 0;
    v8 = (*(__int64 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v6 + 48LL))(v6, 54LL);
    v9 = (_DWORD *)*((_QWORD *)this + 763);
    if ( v8 )
    {
      v10 = v9[37];
      LODWORD(v43) = v9[36];
      v11 = v9[34];
      HIDWORD(v43) = v10;
      v44 = (struct ID2D1Geometry *)__PAIR64__(v9[35], v11);
      v12 = (void **)std::make_unique<EmitterShapes::CEllipseSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,enum EmitterShapes::EmitFrom &,0>(
                       &v45,
                       &v44,
                       (__int64 *)&v43,
                       (int *)this + 1545);
      goto LABEL_8;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v9 + 48LL))(v9, 97LL) )
    {
      v14 = (_DWORD *)*((_QWORD *)this + 763);
      v15 = v14[37];
      LODWORD(v43) = v14[36];
      v16 = v14[34];
      HIDWORD(v43) = v15;
      v44 = (struct ID2D1Geometry *)__PAIR64__(v14[35], v16);
      v12 = (void **)std::make_unique<EmitterShapes::CLineSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,0>(
                       (__int64 *)&v45,
                       &v44,
                       &v43);
LABEL_8:
      v13 = *v12;
      *v12 = 0LL;
      std::unique_ptr<EmitterShapes::CSpawner>::reset(v1, v13);
      if ( v45 )
        operator delete(v45);
      return v3;
    }
    if ( v7
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 763) + 48LL))(
            *((_QWORD *)this + 763),
            136LL) )
    {
      v24 = (CGeometry *)*((_QWORD *)this + 763);
      v46 = 0LL;
      v47 = 0;
      v44 = 0LL;
      ShapeData = CGeometry::GetShapeData(v24, 0LL, (struct CShapePtr *)&v46);
      v3 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, ShapeData, 0x246u, 0LL);
      }
      else
      {
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v44);
        D2DGeometry = CShapePtr::GetD2DGeometry((CShapePtr *)&v46, v27, &v44);
        v3 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, D2DGeometry, 0x247u, 0LL);
        }
        else
        {
          v43 = 0LL;
          if ( *((_DWORD *)this + 1545) )
          {
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v43);
            v35 = EmitterShapes::CPathEmitterArea::CreatePathEmitterArea(v44, &v43);
            v3 = v35;
            if ( v35 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x252u, 0LL);
            }
            else
            {
              *(_QWORD *)&v48 = v43;
              v37 = (void **)std::make_unique<EmitterShapes::CPathAreaSpawner,EmitterShapes::CPathEmitterArea *,0>(
                               &v45,
                               (__int64 *)&v48);
              v38 = *v37;
              *v37 = 0LL;
              std::unique_ptr<EmitterShapes::CSpawner>::reset(v1, v38);
              v39 = v45;
              if ( v45 )
              {
                Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v45 + 1);
                operator delete(v39);
              }
            }
          }
          else
          {
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v43);
            v30 = EmitterShapes::CPathEmitterEdge::CreatePathEmitterShape(v44, &v43);
            v3 = v30;
            if ( v30 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x24Cu, 0LL);
            }
            else
            {
              v45 = v43;
              v32 = (void **)std::make_unique<EmitterShapes::CPathEdgeSpawner,EmitterShapes::CPathEmitterEdge *,0>(
                               &v48,
                               (__int64 *)&v45);
              v33 = *v32;
              *v32 = 0LL;
              std::unique_ptr<EmitterShapes::CSpawner>::reset(v1, v33);
              v34 = (void *)v48;
              if ( (_QWORD)v48 )
              {
                Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)(v48 + 8));
                operator delete(v34);
              }
            }
          }
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v43);
        }
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v44);
      CShapePtr::Release((CShapePtr *)&v46);
      goto LABEL_39;
    }
    BoundsSafe = CGeometry::GetBoundsSafe(*((CGeometry **)this + 763), 0LL, &v48);
    v3 = BoundsSafe;
    if ( BoundsSafe < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, BoundsSafe, 0x235u, 0LL);
      goto LABEL_39;
    }
    if ( *((_DWORD *)this + 1545) )
    {
      v22 = (void **)std::make_unique<EmitterShapes::CRectangleVolumeSpawner,float &,float &,float &,float &,0>(
                       &v45,
                       (int *)&v48,
                       (int *)&v48 + 1,
                       (int *)&v48 + 2,
                       (_DWORD *)&v48 + 3);
      v23 = *v22;
      *v22 = 0LL;
      std::unique_ptr<EmitterShapes::CSpawner>::reset((void **)this + 762, v23);
      v21 = v45;
      if ( !v45 )
        goto LABEL_39;
    }
    else
    {
      v19 = std::make_unique<EmitterShapes::CRectangleEdgeSpawner,float &,float &,float &,float &,0>(
              (__int64 *)&v45,
              (float *)&v48,
              (float *)&v48 + 1,
              (float *)&v48 + 2,
              (float *)&v48 + 3);
      v20 = (void *)*v19;
      *v19 = 0LL;
      std::unique_ptr<EmitterShapes::CSpawner>::reset((void **)this + 762, v20);
      v21 = v45;
      if ( !v45 )
        goto LABEL_39;
    }
  }
  else
  {
    v40 = (void **)std::make_unique<EmitterShapes::CPointSpawner,,0>(&v48);
    v41 = *v40;
    *v40 = 0LL;
    std::unique_ptr<EmitterShapes::CSpawner>::reset(v1, v41);
    v21 = (void *)v48;
    if ( !(_QWORD)v48 )
      return v3;
  }
  operator delete(v21);
LABEL_39:
  if ( (v3 & 0x80000000) != 0 )
    std::unique_ptr<EmitterShapes::CSpawner>::reset(v1, 0LL);
  return v3;
}
