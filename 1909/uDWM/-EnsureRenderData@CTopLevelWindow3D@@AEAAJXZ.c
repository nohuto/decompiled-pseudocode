/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180021780
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800214B0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180024974 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180024A68 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x180026504 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x180037BD8 (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x18003A35C (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CTopLevelWindow3D *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rsi
  CBaseObject *v3; // r14
  int v6; // eax
  bool v7; // r12
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // eax
  float v14; // xmm2_4
  float v15; // xmm1_4
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  CBaseObject *v20; // r12
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  void *v26; // [rsp+28h] [rbp-20h]
  CBaseObject *v27; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *CVIForAnimation; // [rsp+38h] [rbp-10h]
  CBaseObject *v29; // [rsp+80h] [rbp+38h] BYREF
  CBaseObject *v30; // [rsp+88h] [rbp+40h] BYREF
  CBaseObject *v31; // [rsp+90h] [rbp+48h] BYREF
  struct CRenderDataInstruction *v32; // [rsp+98h] [rbp+50h] BYREF

  v1 = 0;
  v2 = 0LL;
  v27 = 0LL;
  v3 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( !*((_DWORD *)this + 68) )
  {
    v6 = *((_DWORD *)this + 92);
    v7 = v6 == 3 || v6 == 6;
    v8 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 43), &v29);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2B7u, v26);
    }
    else
    {
      v9 = CRenderDataVisual::AddInstruction(this, v29);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2B8u, v26);
      }
      else
      {
        v10 = (_DWORD *)*((_QWORD *)this + 42);
        v11 = 0;
        if ( v10[20] - v10[23] - v10[22] >= 0 )
          v11 = v10[20] - v10[23] - v10[22];
        v12 = v10[21] - v10[25] - v10[24];
        v13 = 0;
        if ( v12 >= 0 )
          v13 = v12;
        if ( v13 <= 0 )
          v14 = FLOAT_0_1;
        else
          v14 = 1.0 / (float)v13;
        if ( v11 <= 0 )
          v15 = FLOAT_0_1;
        else
          v15 = 1.0 / (float)v11;
        v16 = CScaleTransformProxy::Update(*((CScaleTransformProxy **)this + 44), v15, v14, 0.0, 0.0);
        v1 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x2C3u, v26);
        }
        else
        {
          v17 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 44), &v30);
          v1 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x2C5u, v26);
          }
          else
          {
            v18 = CRenderDataVisual::AddInstruction(this, v30);
            v1 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x2C6u, v26);
            }
            else
            {
              CVIForAnimation = CSecondaryWindowRepresentation::CreateCVIForAnimation(
                                  *((CSecondaryWindowRepresentation **)this + 42),
                                  v7);
              v19 = CDrawBitmapInstruction::Create(CVIForAnimation, &v27);
              v20 = v27;
              v1 = v19;
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x2CBu, v26);
              }
              else
              {
                v21 = CRenderDataVisual::AddInstruction(this, v27);
                v1 = v21;
                if ( v21 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x2CCu, v26);
                }
                else
                {
                  v22 = CPopInstruction::Create(&v31);
                  v1 = v22;
                  if ( v22 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x2CFu, v26);
                    v2 = v31;
                  }
                  else
                  {
                    v2 = v31;
                    v23 = CRenderDataVisual::AddInstruction(this, v31);
                    v1 = v23;
                    if ( v23 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x2D0u, v26);
                    }
                    else if ( v29 )
                    {
                      v24 = CPopInstruction::Create(&v32);
                      v1 = v24;
                      if ( v24 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x2D4u, v26);
                        v3 = v32;
                      }
                      else
                      {
                        v3 = v32;
                        v25 = CRenderDataVisual::AddInstruction(this, v32);
                        v1 = v25;
                        if ( v25 < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x2D5u, v26);
                      }
                    }
                  }
                }
              }
              if ( CVIForAnimation )
                CBaseObject::Release(CVIForAnimation);
              if ( v20 )
                CBaseObject::Release(v20);
            }
          }
          if ( v30 )
            CBaseObject::Release(v30);
          if ( v2 )
            CBaseObject::Release(v2);
        }
      }
    }
    if ( v29 )
      CBaseObject::Release(v29);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  return v1;
}
