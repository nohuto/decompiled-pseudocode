/*
 * XREFs of ?GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801ECFC4
 * Callers:
 *     ?GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801EA4B0 (-GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18004E9C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18004EA28 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180075FE8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076050 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x180078B10 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180091838 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z @ 0x1801EC600 (-CreateParticlesPrimitive@CParticleEmitterVisual@@IEAAJPEAVCDrawListPrimitive@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::GenerateDrawList(
        CParticleEmitterVisual *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  FLOAT height; // xmm1_4
  int DrawList; // eax
  struct CDrawListPrimitive *v10; // rcx
  int ParticlesPrimitive; // ebx
  bool v12; // bl
  unsigned int i; // edi
  _BYTE *v14; // rsi
  __int64 v15; // rcx
  CGeometryOnlyDrawListBrush *v16; // r8
  FLOAT v17; // xmm1_4
  FLOAT v18; // xmm0_4
  CGeometryOnlyDrawListBrush *v19; // rax
  __int128 v20; // xmm1
  unsigned int v21; // r9d
  __int64 v22; // rdi
  int v23; // eax
  struct CDrawListPrimitive *v24; // rdx
  __int64 (__fastcall ***v25)(_QWORD, __int64); // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  struct CDrawListPrimitive *v30[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v31; // [rsp+40h] [rbp-C0h]
  CGeometryOnlyDrawListBrush *v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v33[2])(_QWORD, __int64); // [rsp+50h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+70h] [rbp-90h]
  _BYTE v36[3]; // [rsp+BCh] [rbp-44h]
  struct CDrawingContext *v37; // [rsp+C0h] [rbp-40h] BYREF
  FLOAT width; // [rsp+C8h] [rbp-38h]
  FLOAT v39; // [rsp+CCh] [rbp-34h]
  int v40; // [rsp+D0h] [rbp-30h]
  __int128 v41; // [rsp+D4h] [rbp-2Ch]
  _QWORD v42[4]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v43; // [rsp+108h] [rbp+8h]
  char v44; // [rsp+10Ch] [rbp+Ch]
  struct CDrawListEntry **v45[5]; // [rsp+110h] [rbp+10h] BYREF
  __int64 *v46; // [rsp+138h] [rbp+38h]
  __int64 v47; // [rsp+140h] [rbp+40h]

  height = a3->height;
  width = a3->width;
  v41 = _xmm;
  v39 = height;
  v32 = 0LL;
  v33[0] = 0LL;
  v37 = a2;
  v40 = 0;
  memset(v42, 0, sizeof(v42));
  v43 = 0;
  v44 = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v45);
  v35 = 0;
  v34 = 0LL;
  *(_WORD *)v36 = 1;
  v36[2] = 0;
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)&v37);
  DrawList = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext *, const struct D2D_SIZE_F *))(**((_QWORD **)this + 765) + 360LL))(
               *((_QWORD *)this + 765),
               a2,
               a3);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v29 = 294;
    goto LABEL_36;
  }
  DrawList = (*(__int64 (__fastcall **)(_QWORD, struct CDrawingContext **))(**((_QWORD **)this + 765) + 368LL))(
               *((_QWORD *)this + 765),
               &v37);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v29 = 295;
    goto LABEL_36;
  }
  v12 = 0;
  for ( i = 0; i < v43; ++i )
  {
    v14 = (_BYTE *)v42[i];
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v14 + 8LL))(v42[i], 3LL) )
      {
        ParticlesPrimitive = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, 0x80004005, 0x132u, 0LL);
        goto LABEL_38;
      }
      v12 = v12 || v14[52];
    }
  }
  *(_WORD *)&v36[1] = 257;
  v36[0] = 0;
  if ( !v12 )
  {
    v30[1] = 0LL;
    v30[0] = (struct CDrawListPrimitive *)&v32;
    v31 = 1;
    ParticlesPrimitive = CGeometryOnlyDrawListBrush::Create(&v30[1]);
    if ( v31 )
    {
      v10 = v30[0];
      v16 = *(CGeometryOnlyDrawListBrush **)v30[0];
      *(_QWORD *)v30[0] = v30[1];
      if ( v16 )
        CGeometryOnlyDrawListBrush::`vector deleting destructor'(v16, 1);
    }
    if ( ParticlesPrimitive < 0 )
    {
      v29 = 321;
LABEL_22:
      v21 = ParticlesPrimitive;
LABEL_37:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, v21, v29, 0LL);
      goto LABEL_38;
    }
    v17 = a3->width;
    v18 = a3->height;
    v19 = v32;
    v30[0] = 0LL;
    v30[1] = (struct CDrawListPrimitive *)__PAIR64__(LODWORD(v18), LODWORD(v17));
    v20 = *(_OWORD *)v30;
    *((_BYTE *)v32 + 52) = 1;
    *((_DWORD *)v19 + 12) = 50529027;
    *((_OWORD *)v19 + 2) = v20;
    *(_QWORD *)&v34 = v32;
  }
  DrawList = CBrushDrawListGenerator::GenerateDrawList(
               (CBrushDrawListGenerator *)&v37,
               (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v34,
               (struct CDrawListEntryBuilder *)v45);
  ParticlesPrimitive = DrawList;
  if ( DrawList < 0 )
  {
    v29 = 326;
LABEL_36:
    v21 = DrawList;
    goto LABEL_37;
  }
  if ( (unsigned int)((v47 - (__int64)v46) >> 3) != 1 )
  {
    ParticlesPrimitive = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0, 0x80004005, 0x149u, 0LL);
    goto LABEL_38;
  }
  v22 = *v46;
  v23 = *(_DWORD *)(*v46 + 132);
  if ( (v23 & 8) != 0 )
    *(_DWORD *)(v22 + 132) = v23 & 0xFFFFFFF7;
  v24 = *(struct CDrawListPrimitive **)(v22 + 144);
  v30[0] = (struct CDrawListPrimitive *)v33;
  v30[1] = 0LL;
  v31 = 1;
  ParticlesPrimitive = CParticleEmitterVisual::CreateParticlesPrimitive(this, v24, &v30[1]);
  if ( v31 )
  {
    v25 = *(__int64 (__fastcall ****)(_QWORD, __int64))v30[0];
    *(_QWORD *)v30[0] = v30[1];
    if ( v25 )
      std::default_delete<CShape>::operator()((__int64)v10, v25);
  }
  if ( ParticlesPrimitive < 0 )
  {
    v29 = 338;
    goto LABEL_22;
  }
  CHWDrawListEntry::ReplacePrimitive(v22, v30, (__int64 *)v33, v22 + 64);
  if ( v30[0] )
    std::default_delete<CShape>::operator()(v26, (__int64 (__fastcall ***)(_QWORD, __int64))v30[0]);
  CDrawListCache::Update(a4, a2, v45);
LABEL_38:
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v45);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v37);
  if ( v33[0] )
    std::default_delete<CShape>::operator()(v27, v33[0]);
  if ( v32 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v32, 1);
  return (unsigned int)ParticlesPrimitive;
}
