/*
 * XREFs of ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801FAC24
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x180253928 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18000475C (-IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18001E328 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801FB0A4 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x180253388 (-CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::CreateRenderTasks(CSpriteVectorShape *this, struct CShapeDrawingContext *a2)
{
  CGeometry *v4; // rcx
  signed int ShapeData; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  struct CShapeRenderTask *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  float v13; // xmm6_4
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct CShapeRenderTask *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int128 v22; // xmm0
  signed int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  struct CShapeRenderTask *v26; // rcx
  __int64 v27; // rax
  signed int v28; // eax
  __int64 v29; // rcx
  struct CShapeRenderTask *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int128 v33; // xmm0
  signed int v34; // eax
  __int64 v35; // rcx
  struct CShapeRenderTask *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int128 v40; // xmm0
  CShape *v42; // [rsp+30h] [rbp-30h] BYREF
  char v43; // [rsp+38h] [rbp-28h]
  __int128 v44; // [rsp+40h] [rbp-20h]
  struct CShapeRenderTask *v45; // [rsp+80h] [rbp+20h] BYREF

  v4 = (CGeometry *)*((_QWORD *)this + 13);
  v42 = 0LL;
  v43 = 0;
  ShapeData = CGeometry::GetShapeData(v4, 0LL, (struct CShapePtr *)&v42);
  v7 = ShapeData;
  if ( ShapeData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, ShapeData, 0x14Au, 0LL);
    goto LABEL_32;
  }
  if ( !CShapePtr::IsEmpty((CShapePtr *)&v42) )
  {
    if ( *((_QWORD *)this + 11) )
    {
      if ( !CShapePtr::IsAxisAlignedRectangle(&v42)
        || (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
             *((_QWORD *)this + 11),
             134LL) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
               *((_QWORD *)this + 11),
               19LL) )
        {
          v23 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
          v7 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x15Cu, 0LL);
            goto LABEL_32;
          }
          v25 = *((_QWORD *)this + 11);
          v26 = v45;
          v27 = *((_QWORD *)this + 13);
          *(_DWORD *)v45 = 2;
          *((_QWORD *)v26 + 1) = v27;
          *((_OWORD *)v26 + 1) = *(_OWORD *)(v25 + 80);
        }
        else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 48LL))(
                    *((_QWORD *)this + 11),
                    67LL) )
        {
          v28 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
          v7 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x163u, 0LL);
            goto LABEL_32;
          }
          v30 = v45;
          v31 = *((_QWORD *)this + 13);
          v32 = *((_QWORD *)this + 11);
          *(_DWORD *)v45 = 3;
          *((_QWORD *)v30 + 1) = v31;
          v33 = *((_OWORD *)this + 8);
          *((_QWORD *)v30 + 4) = v32;
          v44 = v33;
          *((_OWORD *)v30 + 1) = v33;
        }
      }
      else
      {
        v8 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
        v7 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x155u, 0LL);
          goto LABEL_32;
        }
        v10 = v45;
        v11 = *((_QWORD *)this + 11);
        *(_DWORD *)v45 = 4;
        v12 = *((_OWORD *)this + 8);
        *((_QWORD *)v10 + 3) = v11;
        v44 = v12;
        *(_OWORD *)((char *)v10 + 8) = v12;
      }
    }
    if ( *((_QWORD *)this + 12) && *((_QWORD *)this + 14) )
    {
      v13 = fmaxf(0.0, *((float *)this + 48));
      if ( *((_BYTE *)this + 196) )
        v13 = v13 * fminf(*((float *)a2 + 124), *((float *)a2 + 125));
      v14 = CSpriteVectorShape::EnsureStrokeStyleForRender(this);
      v7 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x172u, 0LL);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(
                  *((_QWORD *)this + 12),
                  19LL) )
      {
        v16 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
        v7 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x177u, 0LL);
        }
        else
        {
          v18 = *((_QWORD *)this + 12);
          v19 = v45;
          v20 = *((_QWORD *)this + 13);
          v21 = *((_QWORD *)this + 15);
          *(_DWORD *)v45 = 5;
          *((_QWORD *)v19 + 1) = v20;
          v22 = *(_OWORD *)(v18 + 80);
          *((_QWORD *)v19 + 5) = v21;
          *((float *)v19 + 8) = v13;
          *((_OWORD *)v19 + 1) = v22;
        }
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 48LL))(
                  *((_QWORD *)this + 12),
                  67LL) )
      {
        v34 = CShapeDrawingContext::CreateRenderTask(a2, &v45);
        v7 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x182u, 0LL);
        }
        else
        {
          v36 = v45;
          v37 = *((_QWORD *)this + 13);
          v38 = *((_QWORD *)this + 12);
          v39 = *((_QWORD *)this + 15);
          *(_DWORD *)v45 = 6;
          *((_QWORD *)v36 + 1) = v37;
          v40 = *((_OWORD *)this + 8);
          *((_QWORD *)v36 + 4) = v38;
          *((float *)v36 + 10) = v13;
          v44 = v40;
          *((_QWORD *)v36 + 6) = v39;
          *((_OWORD *)v36 + 1) = v40;
        }
      }
    }
  }
LABEL_32:
  CShapePtr::Release((CShapePtr *)&v42);
  return v7;
}
