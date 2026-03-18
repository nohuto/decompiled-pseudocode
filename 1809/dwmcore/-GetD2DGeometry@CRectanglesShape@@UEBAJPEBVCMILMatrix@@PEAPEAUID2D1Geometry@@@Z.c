/*
 * XREFs of ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180016B40
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18021D7E0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180016DAC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x18021D448 (-EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ.c)
 */

__int64 __fastcall CRectanglesShape::GetD2DGeometry(
        CRectanglesShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int D2DFactoryNoRef; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int i; // ebx
  __int64 v14; // rax
  int v15; // xmm2_4
  int v16; // xmm0_4
  int v17; // eax
  unsigned int v18; // ecx
  struct ID2D1Geometry *v19; // rax
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // [rsp+30h] [rbp-29h] BYREF
  struct ID2D1Geometry *v24; // [rsp+38h] [rbp-21h] BYREF
  struct CD2DFactory *v25; // [rsp+40h] [rbp-19h] BYREF
  int v26; // [rsp+48h] [rbp-11h] BYREF
  int v27; // [rsp+4Ch] [rbp-Dh]
  int v28; // [rsp+50h] [rbp-9h]
  int v29; // [rsp+54h] [rbp-5h]
  int v30; // [rsp+58h] [rbp-1h]
  int v31; // [rsp+5Ch] [rbp+3h]
  int v32; // [rsp+60h] [rbp+7h]
  int v33; // [rsp+64h] [rbp+Bh]
  _DWORD v34[8]; // [rsp+68h] [rbp+Fh] BYREF

  v24 = 0LL;
  v23 = 0LL;
  if ( a2 )
  {
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v25);
    v8 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, D2DFactoryNoRef, 0x3Cu);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**((_QWORD **)v25 + 3) + 80LL))(
             *((_QWORD *)v25 + 3),
             &v24);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x3Eu);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v24 + 136LL))(v24, &v23);
        v8 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x40u);
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)this + 10); ++i )
          {
            v14 = *((_QWORD *)this + 2);
            v15 = *(_DWORD *)(v14 + 16LL * i);
            v16 = *(_DWORD *)(v14 + 16LL * i + 8);
            v27 = *(_DWORD *)(v14 + 16LL * i + 4);
            v29 = v27;
            v31 = *(_DWORD *)(v14 + 16LL * i + 12);
            v33 = v31;
            v26 = v15;
            v28 = v16;
            v30 = v16;
            v32 = v15;
            CMILMatrix::Transform(a2, (const struct MilPoint2F *)&v26, (struct MilPoint2F *)v34, 4u);
            (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v23 + 40LL))(
              v23,
              _mm_unpacklo_ps((__m128)v34[0], (__m128)v34[1]).m128_u64[0],
              0LL);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 80LL))(
              v23,
              _mm_unpacklo_ps((__m128)v34[2], (__m128)v34[3]).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 80LL))(
              v23,
              _mm_unpacklo_ps((__m128)v34[4], (__m128)v34[5]).m128_u64[0]);
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 80LL))(
              v23,
              _mm_unpacklo_ps((__m128)v34[6], (__m128)v34[7]).m128_u64[0]);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 64LL))(v23, 1LL);
          }
          v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 72LL))(v23);
          v8 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x62u);
          }
          else
          {
            v19 = v24;
            v24 = 0LL;
            *a3 = v19;
          }
        }
      }
    }
  }
  else
  {
    v21 = CRectanglesShape::EnsureD2DGeometry(this);
    v8 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x33u);
    }
    else
    {
      *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 8);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8));
    }
  }
  ReleaseInterface<ID2D1Geometry>(&v24);
  ReleaseInterface<IBitmapLock>(&v23);
  return v8;
}
