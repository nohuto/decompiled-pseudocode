/*
 * XREFs of ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x18024970C
 * Callers:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1802499F0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2600 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectanglesShape::EnsureD2DGeometry(CRectanglesShape *this)
{
  unsigned int v2; // ebx
  signed int D2DFactoryNoRef; // eax
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  signed __int64 v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int i; // esi
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  signed __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  signed __int64 v18; // [rsp+40h] [rbp-30h] BYREF
  struct CD2DFactory *v19; // [rsp+48h] [rbp-28h] BYREF
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  if ( *((_QWORD *)this + 8) )
    return v2;
  v19 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v19);
  v2 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, D2DFactoryNoRef, 0xF6u, 0LL);
  }
  else if ( *((_DWORD *)this + 10) == 1 )
  {
    v20 = *(_OWORD *)*((_QWORD *)this + 2);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, signed __int64 *))(**((_QWORD **)v19 + 3) + 40LL))(
           *((_QWORD *)v19 + 3),
           &v20,
           &v18);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v7 = v18;
      v18 = 0LL;
LABEL_13:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v7, 0LL) && v7 )
        (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v7 + 16LL))(v7);
      goto LABEL_20;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xFBu, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, signed __int64 *))(**((_QWORD **)v19 + 3) + 80LL))(
           *((_QWORD *)v19 + 3),
           &v17);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x102u, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(signed __int64, __int64 *))(*(_QWORD *)v17 + 136LL))(v17, &v16);
      v2 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x104u, 0LL);
      }
      else
      {
        for ( i = 0; i < *((_DWORD *)this + 10); ++i )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v16 + 40LL))(
            v16,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 4)).m128_u64[0],
            0LL);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 80LL))(
            v16,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 8),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 4)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 80LL))(
            v16,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 8),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 80LL))(
            v16,
            _mm_unpacklo_ps(
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i),
              (__m128)*(unsigned int *)(*((_QWORD *)this + 2) + 16LL * i + 12)).m128_u64[0]);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL))(v16, 1LL);
        }
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
        v2 = v13;
        if ( v13 >= 0 )
        {
          v7 = v17;
          v17 = 0LL;
          goto LABEL_13;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x112u, 0LL);
      }
    }
  }
LABEL_20:
  if ( v18 )
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v17 + 16LL))(v17);
  return v2;
}
