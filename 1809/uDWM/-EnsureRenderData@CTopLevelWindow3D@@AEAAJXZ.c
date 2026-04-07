/*
 * XREFs of ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180014D1C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180014A70 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18000EE08 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800218A8 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x180026164 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800377CC (-Create@CDrawBitmapInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::EnsureRenderData(CTopLevelWindow3D *this)
{
  unsigned int v1; // ebx
  CBaseObject *v2; // rsi
  struct CPopInstruction *v3; // r14
  int v6; // eax
  bool v7; // r12
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  CBaseObject *v14; // r12
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  CBaseObject *v20; // [rsp+40h] [rbp-18h] BYREF
  CBaseObject *CVIForAnimation; // [rsp+48h] [rbp-10h]
  CBaseObject *v22; // [rsp+90h] [rbp+38h] BYREF
  CBaseObject *v23; // [rsp+98h] [rbp+40h] BYREF
  CBaseObject *v24; // [rsp+A0h] [rbp+48h] BYREF
  struct CPopInstruction *v25; // [rsp+A8h] [rbp+50h] BYREF

  v1 = 0;
  v2 = 0LL;
  v20 = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( !*((_DWORD *)this + 68) )
  {
    v6 = *((_DWORD *)this + 92);
    v7 = v6 == 6 || v6 == 3;
    v8 = CPushTransformInstruction::Create(*((struct CResource **)this + 43), &v22);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x2B9u);
    }
    else
    {
      v9 = CRenderDataVisual::AddInstruction(this, v22);
      v1 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x2BAu);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 44) + 16LL) + 1144LL))(
                *(_QWORD *)(*((_QWORD *)this + 44) + 16LL),
                *(unsigned int *)(*((_QWORD *)this + 44) + 24LL));
        v1 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x2C6u);
        }
        else
        {
          v11 = CPushTransformInstruction::Create(*((struct CResource **)this + 44), &v23);
          v1 = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x2C8u);
          }
          else
          {
            v12 = CRenderDataVisual::AddInstruction(this, v23);
            v1 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x2C9u);
            }
            else
            {
              CVIForAnimation = CSecondaryWindowRepresentation::CreateCVIForAnimation(
                                  *((CSecondaryWindowRepresentation **)this + 42),
                                  v7);
              v13 = CDrawBitmapInstruction::Create(CVIForAnimation, &v20);
              v14 = v20;
              v1 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2CEu);
              }
              else
              {
                v15 = CRenderDataVisual::AddInstruction(this, v20);
                v1 = v15;
                if ( v15 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x2CFu);
                }
                else
                {
                  v16 = CPopInstruction::Create(&v24);
                  v1 = v16;
                  if ( v16 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x2D2u);
                    v2 = v24;
                  }
                  else
                  {
                    v2 = v24;
                    v17 = CRenderDataVisual::AddInstruction(this, v24);
                    v1 = v17;
                    if ( v17 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x2D3u);
                    }
                    else if ( v22 )
                    {
                      v18 = CPopInstruction::Create(&v25);
                      v1 = v18;
                      if ( v18 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x2D7u);
                        v3 = v25;
                      }
                      else
                      {
                        v3 = v25;
                        v19 = CRenderDataVisual::AddInstruction(this, v25);
                        v1 = v19;
                        if ( v19 < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x2D8u);
                      }
                    }
                  }
                }
              }
              if ( CVIForAnimation )
                CBaseObject::Release(CVIForAnimation);
              if ( v14 )
                CBaseObject::Release(v14);
            }
          }
          if ( v23 )
            CBaseObject::Release(v23);
          if ( v2 )
            CBaseObject::Release(v2);
        }
      }
    }
    if ( v22 )
      CBaseObject::Release(v22);
    if ( v3 )
      CBaseObject::Release(v3);
  }
  return v1;
}
