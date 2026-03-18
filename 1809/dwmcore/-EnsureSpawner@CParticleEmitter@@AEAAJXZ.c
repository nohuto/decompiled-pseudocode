/*
 * XREFs of ?EnsureSpawner@CParticleEmitter@@AEAAJXZ @ 0x1801C58F8
 * Callers:
 *     ?SpawnParticles@CParticleEmitter@@IEAAJH@Z @ 0x1801C71C0 (-SpawnParticles@CParticleEmitter@@IEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x1801B1E74 (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 *     ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801BF94C (-GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??$make_unique@VCEllipseSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@AEAW4EmitFrom@2@$0A@@std@@YA?AV?$unique_ptr@VCEllipseSpawner@EmitterShapes@@U?$default_delete@VCEllipseSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0AEAW4EmitFrom@EmitterShapes@@@Z @ 0x1801C462C (--$make_unique@VCEllipseSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@AEAW4E.c)
 *     ??$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@@YA?AV?$unique_ptr@VCLineSpawner@EmitterShapes@@U?$default_delete@VCLineSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0@Z @ 0x1801C46D0 (--$make_unique@VCLineSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@$0A@@std@.c)
 *     ??$make_unique@VCPathSpawner@EmitterShapes@@PEAVCPathEmitterShape@2@$0A@@std@@YA?AV?$unique_ptr@VCPathSpawner@EmitterShapes@@U?$default_delete@VCPathSpawner@EmitterShapes@@@std@@@0@$$QEAPEAVCPathEmitterShape@EmitterShapes@@@Z @ 0x1801C4724 (--$make_unique@VCPathSpawner@EmitterShapes@@PEAVCPathEmitterShape@2@$0A@@std@@YA-AV-$unique_ptr@.c)
 *     ??$make_unique@VCPointSpawner@EmitterShapes@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPointSpawner@EmitterShapes@@U?$default_delete@VCPointSpawner@EmitterShapes@@@std@@@0@XZ @ 0x1801C4790 (--$make_unique@VCPointSpawner@EmitterShapes@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPointSpawner@Emitt.c)
 *     ??$make_unique@VCRectangleEdgeSpawner@EmitterShapes@@AEBMAEBMAEBMAEBM$0A@@std@@YA?AV?$unique_ptr@VCRectangleEdgeSpawner@EmitterShapes@@U?$default_delete@VCRectangleEdgeSpawner@EmitterShapes@@@std@@@0@AEBM000@Z @ 0x1801C47C4 (--$make_unique@VCRectangleEdgeSpawner@EmitterShapes@@AEBMAEBMAEBMAEBM$0A@@std@@YA-AV-$unique_ptr.c)
 *     ??$make_unique@VCRectangleVolumeSpawner@EmitterShapes@@AEBMAEBMAEBMAEBM$0A@@std@@YA?AV?$unique_ptr@VCRectangleVolumeSpawner@EmitterShapes@@U?$default_delete@VCRectangleVolumeSpawner@EmitterShapes@@@std@@@0@AEBM000@Z @ 0x1801C483C (--$make_unique@VCRectangleVolumeSpawner@EmitterShapes@@AEBMAEBMAEBMAEBM$0A@@std@@YA-AV-$unique_p.c)
 *     ?reset@?$unique_ptr@VIAnimator@Particles@@U?$default_delete@VIAnimator@Particles@@@std@@@std@@QEAAXPEAVIAnimator@Particles@@@Z @ 0x1801C80C0 (-reset@-$unique_ptr@VIAnimator@Particles@@U-$default_delete@VIAnimator@Particles@@@std@@@std@@QE.c)
 *     ?CreatePathEmitterShape@CPathEmitterShape@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x1801DC5A0 (-CreatePathEmitterShape@CPathEmitterShape@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z.c)
 */

__int64 __fastcall CParticleEmitter::EnsureSpawner(CParticleEmitter *this)
{
  char *v1; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char v5; // al
  CRectangleGeometry *v6; // rcx
  char v7; // r14
  char v8; // al
  _DWORD *v9; // rcx
  int v10; // xmm1_4
  unsigned int v11; // xmm0_4
  __int64 *v12; // rax
  __int64 v13; // rdx
  void *v14; // rcx
  _DWORD *v15; // rax
  int v16; // xmm1_4
  unsigned int v17; // xmm0_4
  int *v18; // rdx
  int *v19; // r9
  int *v20; // r8
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // rdx
  CGeometry *v25; // rcx
  int ShapeData; // eax
  __int64 v27; // rcx
  const struct CMILMatrix *v28; // rdx
  int D2DGeometry; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 *v33; // rax
  __int64 v34; // rdx
  void *v35; // rdi
  __int64 *v36; // rax
  __int64 v37; // rdx
  float *v39; // [rsp+20h] [rbp-28h]
  __int64 v40; // [rsp+30h] [rbp-18h] BYREF
  char v41; // [rsp+38h] [rbp-10h]
  struct EmitterShapes::CPathEmitterShape *v42; // [rsp+80h] [rbp+38h] BYREF
  struct ID2D1Geometry *v43; // [rsp+88h] [rbp+40h] BYREF
  void *v44; // [rsp+90h] [rbp+48h] BYREF
  void *v45; // [rsp+98h] [rbp+50h] BYREF

  v1 = (char *)this + 5720;
  v3 = 0;
  if ( *((_QWORD *)this + 715) )
    return v3;
  v4 = *((_QWORD *)this + 716);
  if ( !v4 )
  {
    v36 = std::make_unique<EmitterShapes::CPointSpawner,,0>(&v42);
    v37 = *v36;
    *v36 = 0LL;
    std::unique_ptr<Particles::IAnimator>::reset(v1, v37);
    if ( !v42 )
      return v3;
    operator delete(v42);
LABEL_30:
    if ( (v3 & 0x80000000) != 0 )
      std::unique_ptr<Particles::IAnimator>::reset(v1, 0LL);
    return v3;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 119LL);
  v6 = (CRectangleGeometry *)*((_QWORD *)this + 716);
  if ( !v5 || (v7 = 1, !CRectangleGeometry::IsRoundedRectangleGeometry(v6)) )
    v7 = 0;
  v8 = (*(__int64 (__fastcall **)(CRectangleGeometry *, __int64))(*(_QWORD *)v6 + 48LL))(v6, 52LL);
  v9 = (_DWORD *)*((_QWORD *)this + 716);
  if ( v8 )
  {
    v10 = v9[37];
    LODWORD(v42) = v9[36];
    v11 = v9[34];
    HIDWORD(v42) = v10;
    v43 = (struct ID2D1Geometry *)__PAIR64__(v9[35], v11);
    v12 = std::make_unique<EmitterShapes::CEllipseSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,enum EmitterShapes::EmitFrom &,0>(
            &v44,
            &v43,
            (__int64 *)&v42,
            (int *)this + 1387);
    goto LABEL_8;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v9 + 48LL))(v9, 91LL) )
  {
    if ( !v7
      && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 716) + 48LL))(
           *((_QWORD *)this + 716),
           119LL) )
    {
      v18 = (int *)(*((_QWORD *)this + 716) + 136LL);
      v19 = (int *)(*((_QWORD *)this + 716) + 144LL);
      v39 = (float *)(*((_QWORD *)this + 716) + 148LL);
      v20 = (int *)(*((_QWORD *)this + 716) + 140LL);
      if ( *((_DWORD *)this + 1387) )
      {
        v23 = std::make_unique<EmitterShapes::CRectangleVolumeSpawner,float const &,float const &,float const &,float const &,0>(
                &v42,
                v18,
                v20,
                v19,
                v39);
        v24 = *v23;
        *v23 = 0LL;
        std::unique_ptr<Particles::IAnimator>::reset(v1, v24);
        v14 = v42;
        if ( !v42 )
          return v3;
      }
      else
      {
        v21 = std::make_unique<EmitterShapes::CRectangleEdgeSpawner,float const &,float const &,float const &,float const &,0>(
                (__int64 *)&v42,
                (float *)v18,
                (float *)v20,
                (float *)v19,
                v39);
        v22 = *v21;
        *v21 = 0LL;
        std::unique_ptr<Particles::IAnimator>::reset(v1, v22);
        v14 = v42;
        if ( !v42 )
          return v3;
      }
      goto LABEL_9;
    }
    v25 = (CGeometry *)*((_QWORD *)this + 716);
    v40 = 0LL;
    v41 = 0;
    v43 = 0LL;
    v42 = 0LL;
    ShapeData = CGeometry::GetShapeData(v25, 0LL, (struct CShapePtr *)&v40);
    v3 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, ShapeData, 0x16Eu);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v43);
      D2DGeometry = CShapePtr::GetD2DGeometry((CShapePtr *)&v40, v28, &v43);
      v3 = D2DGeometry;
      if ( D2DGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, D2DGeometry, 0x16Fu);
      }
      else
      {
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v42);
        v31 = EmitterShapes::CPathEmitterShape::CreatePathEmitterShape(v43, &v42);
        v3 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x170u);
        }
        else
        {
          v44 = v42;
          v33 = std::make_unique<EmitterShapes::CPathSpawner,EmitterShapes::CPathEmitterShape *,0>(
                  &v45,
                  (__int64 *)&v44);
          v34 = *v33;
          *v33 = 0LL;
          std::unique_ptr<Particles::IAnimator>::reset(v1, v34);
          v35 = v45;
          if ( v45 )
          {
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v45 + 1);
            operator delete(v35);
          }
        }
      }
    }
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v42);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v43);
    CShapePtr::Release((CShapePtr *)&v40);
    goto LABEL_30;
  }
  v15 = (_DWORD *)*((_QWORD *)this + 716);
  v16 = v15[37];
  LODWORD(v42) = v15[36];
  v17 = v15[34];
  HIDWORD(v42) = v16;
  v43 = (struct ID2D1Geometry *)__PAIR64__(v15[35], v17);
  v12 = std::make_unique<EmitterShapes::CLineSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,0>(
          (__int64 *)&v44,
          &v43,
          &v42);
LABEL_8:
  v13 = *v12;
  *v12 = 0LL;
  std::unique_ptr<Particles::IAnimator>::reset(v1, v13);
  v14 = v44;
  if ( v44 )
LABEL_9:
    operator delete(v14);
  return v3;
}
