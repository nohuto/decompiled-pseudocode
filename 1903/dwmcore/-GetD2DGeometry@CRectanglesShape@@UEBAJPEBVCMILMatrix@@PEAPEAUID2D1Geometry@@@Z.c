/*
 * XREFs of ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18024B100
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18024B674 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2370 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18021D1A0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x18024AE1C (-EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ.c)
 */

__int64 __fastcall CRectanglesShape::GetD2DGeometry(
        CRectanglesShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  signed int D2DFactoryNoRef; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int i; // ebx
  __int64 v16; // rax
  int v17; // xmm2_4
  int v18; // xmm0_4
  signed int v19; // eax
  __int64 v20; // rcx
  struct ID2D1Geometry *v21; // rax
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
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, D2DFactoryNoRef, 0x39u, 0LL);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**((_QWORD **)v25 + 3) + 80LL))(
              *((_QWORD *)v25 + 3),
              &v24);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3Bu, 0LL);
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v24 + 136LL))(v24, &v23);
        v8 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x3Du, 0LL);
        }
        else
        {
          for ( i = 0; i < *((_DWORD *)this + 10); ++i )
          {
            v16 = *((_QWORD *)this + 2);
            v17 = *(_DWORD *)(v16 + 16LL * i);
            v18 = *(_DWORD *)(v16 + 16LL * i + 8);
            v27 = *(_DWORD *)(v16 + 16LL * i + 4);
            v29 = v27;
            v31 = *(_DWORD *)(v16 + 16LL * i + 12);
            v33 = v31;
            v26 = v17;
            v28 = v18;
            v30 = v18;
            v32 = v17;
            CMILMatrix::Transform(a2, (const struct MilPoint2F *)&v26, (struct MilPoint2F *)v34, 4);
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
          v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 72LL))(v23);
          v8 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x5Fu, 0LL);
          }
          else
          {
            v21 = v24;
            v24 = 0LL;
            *a3 = v21;
          }
        }
      }
    }
  }
  else
  {
    v6 = CRectanglesShape::EnsureD2DGeometry(this);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x30u, 0LL);
    }
    else
    {
      *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 8);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 8LL))(*((_QWORD *)this + 8));
    }
  }
  ReleaseInterface<IBitmapLock>((__int64 *)&v24);
  ReleaseInterface<IBitmapLock>(&v23);
  return v8;
}
