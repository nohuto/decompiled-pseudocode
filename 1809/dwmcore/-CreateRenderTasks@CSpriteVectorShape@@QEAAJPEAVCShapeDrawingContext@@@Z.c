/*
 * XREFs of ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801B32A8
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x1802236D4 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x180018BA0 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x180165870 (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801B36DC (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x180223180 (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::CreateRenderTasks(CSpriteVectorShape *this, struct CShapeDrawingContext *a2)
{
  int ShapeData; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  struct CShapeRenderTask *v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  float v12; // xmm6_4
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  struct CShapeRenderTask *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int128 v21; // xmm0
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  struct CShapeRenderTask *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  struct CShapeRenderTask *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int128 v32; // xmm0
  int v33; // eax
  __int64 v34; // rcx
  struct CShapeRenderTask *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int128 v39; // xmm0
  CShape *v41; // [rsp+30h] [rbp-30h] BYREF
  char v42; // [rsp+38h] [rbp-28h]
  __int128 v43; // [rsp+40h] [rbp-20h]
  struct CShapeRenderTask *v44; // [rsp+70h] [rbp+10h] BYREF

  v41 = 0LL;
  v42 = 0;
  ShapeData = CGeometry::GetShapeData(*((CGeometry **)this + 13), 0LL, (struct CShapePtr *)&v41);
  v6 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, ShapeData, 0x14Cu);
    goto LABEL_31;
  }
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v41) )
  {
    if ( *((_QWORD *)this + 11) )
    {
      if ( CShapePtr::IsAxisAlignedRectangle(&v41) )
      {
        v7 = CShapeDrawingContext::CreateRenderTask(a2, &v44);
        v6 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x155u);
          goto LABEL_31;
        }
        v9 = v44;
        v10 = *((_QWORD *)this + 11);
        *(_DWORD *)v44 = 4;
        v11 = *((_OWORD *)this + 8);
        *((_QWORD *)v9 + 3) = v10;
        v43 = v11;
        *(_OWORD *)((char *)v9 + 8) = v11;
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                  *((_QWORD *)this + 11),
                  19LL) )
      {
        v22 = CShapeDrawingContext::CreateRenderTask(a2, &v44);
        v6 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x15Cu);
          goto LABEL_31;
        }
        v24 = *((_QWORD *)this + 11);
        v25 = v44;
        v26 = *((_QWORD *)this + 13);
        *(_DWORD *)v44 = 2;
        *((_QWORD *)v25 + 1) = v26;
        *((_OWORD *)v25 + 1) = *(_OWORD *)(v24 + 72);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                  *((_QWORD *)this + 11),
                  88LL) )
      {
        v27 = CShapeDrawingContext::CreateRenderTask(a2, &v44);
        v6 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x163u);
          goto LABEL_31;
        }
        v29 = v44;
        v30 = *((_QWORD *)this + 13);
        v31 = *((_QWORD *)this + 11);
        *(_DWORD *)v44 = 3;
        *((_QWORD *)v29 + 1) = v30;
        v32 = *((_OWORD *)this + 8);
        *((_QWORD *)v29 + 4) = v31;
        v43 = v32;
        *((_OWORD *)v29 + 1) = v32;
      }
    }
    if ( *((_QWORD *)this + 12) && *((_QWORD *)this + 14) )
    {
      v12 = fmaxf(0.0, *((float *)this + 48));
      if ( *((_BYTE *)this + 196) )
        v12 = v12 * fminf(*((float *)a2 + 126), *((float *)a2 + 127));
      v13 = CSpriteVectorShape::EnsureStrokeStyleForRender(this);
      v6 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x172u);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(
                  *((_QWORD *)this + 12),
                  19LL) )
      {
        v15 = CShapeDrawingContext::CreateRenderTask(a2, &v44);
        v6 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x177u);
        }
        else
        {
          v17 = *((_QWORD *)this + 12);
          v18 = v44;
          v19 = *((_QWORD *)this + 13);
          v20 = *((_QWORD *)this + 15);
          *(_DWORD *)v44 = 5;
          *((_QWORD *)v18 + 1) = v19;
          v21 = *(_OWORD *)(v17 + 72);
          *((_QWORD *)v18 + 5) = v20;
          *((float *)v18 + 8) = v12;
          *((_OWORD *)v18 + 1) = v21;
        }
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(
                  *((_QWORD *)this + 12),
                  88LL) )
      {
        v33 = CShapeDrawingContext::CreateRenderTask(a2, &v44);
        v6 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x182u);
        }
        else
        {
          v35 = v44;
          v36 = *((_QWORD *)this + 13);
          v37 = *((_QWORD *)this + 12);
          v38 = *((_QWORD *)this + 15);
          *(_DWORD *)v44 = 6;
          *((_QWORD *)v35 + 1) = v36;
          v39 = *((_OWORD *)this + 8);
          *((_QWORD *)v35 + 4) = v37;
          *((float *)v35 + 10) = v12;
          v43 = v39;
          *((_QWORD *)v35 + 6) = v38;
          *((_OWORD *)v35 + 1) = v39;
        }
      }
    }
  }
LABEL_31:
  CShapePtr::Release((CShapePtr *)&v41);
  return v6;
}
