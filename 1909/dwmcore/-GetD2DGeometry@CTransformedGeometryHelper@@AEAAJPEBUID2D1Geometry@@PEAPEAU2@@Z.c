/*
 * XREFs of ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x18024C988
 * Callers:
 *     ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x18024CB78 (-TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2600 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x18024C6F8 (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CTransformedGeometryHelper::GetD2DGeometry(
        CTransformedGeometryHelper *this,
        const struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  signed int D2DFactoryNoRef; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _QWORD *v9; // rsi
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  struct CD2DFactory *v19; // [rsp+50h] [rbp+8h] BYREF

  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v19);
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, D2DFactoryNoRef, 0xB3u, 0LL);
  }
  else
  {
    v9 = (_QWORD *)((char *)this + 32);
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)v19 + 3) + 80LL))(
            *((_QWORD *)v19 + 3),
            (char *)this + 32);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB5u, 0LL);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v9 + 136LL))(*v9, (char *)this + 40);
      v8 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB6u, 0LL);
      }
      else
      {
        v14 = CTransformedGeometryHelper::FlattenGeometry((CMILMatrix **)this, a2);
        v8 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xB8u, 0LL);
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5));
          v8 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xBAu, 0LL);
          }
          else
          {
            *a3 = (struct ID2D1Geometry *)*v9;
            *v9 = 0LL;
          }
        }
      }
    }
  }
  ReleaseInterface<IBitmapLock>((__int64 *)this + 4);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 5);
  return v8;
}
