/*
 * XREFs of ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180220200
 * Callers:
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1802203C8 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x18021FF78 (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CTransformedGeometryHelper::GetD2DGeometry(
        CTransformedGeometryHelper *this,
        const struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  int D2DFactoryNoRef; // eax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct CD2DFactory *v19; // [rsp+50h] [rbp+8h] BYREF

  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v19);
  v8 = (_QWORD *)((char *)this + 32);
  v9 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, D2DFactoryNoRef, 0xB3u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v19 + 3) + 80LL))(
            *((_QWORD *)v19 + 3),
            (char *)this + 32);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB5u);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v8 + 136LL))(*v8, (char *)this + 40);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB6u);
      }
      else
      {
        v14 = CTransformedGeometryHelper::FlattenGeometry((CMILMatrix **)this, a2);
        v9 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB8u);
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
          v9 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xBAu);
          }
          else
          {
            *a3 = (struct ID2D1Geometry *)*v8;
            *v8 = 0LL;
          }
        }
      }
    }
  }
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 4);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 5);
  return v9;
}
