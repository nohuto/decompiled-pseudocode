/*
 * XREFs of ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x1801B35A0
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801B31D0 (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForBounds(CSpriteVectorShape *this)
{
  __int64 *v1; // rdi
  unsigned int v2; // ebx
  float v3; // xmm1_4
  int v4; // eax
  float v5; // xmm0_4
  bool v6; // zf
  int D2DFactoryNoRef; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct CD2DFactory *v12; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v13[8]; // [rsp+38h] [rbp-30h] BYREF

  v1 = (__int64 *)((char *)this + 112);
  v2 = 0;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fmaxf(0.0, *((float *)this + 48))) & _xmm);
  if ( v3 >= 0.0000011920929 )
  {
    if ( !*v1 )
    {
      v4 = *((_DWORD *)this + 43);
      v13[5] = 0;
      v13[6] = 0;
      v5 = fmaxf(1.0, *((float *)this + 47));
      v13[0] = v4;
      v13[1] = *((_DWORD *)this + 44);
      v13[2] = *((_DWORD *)this + 42);
      v13[3] = *((_DWORD *)this + 45);
      v6 = *((_BYTE *)this + 196) == 0;
      *(float *)&v13[4] = v5;
      v13[7] = !v6;
      D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, &v12);
      v2 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, D2DFactoryNoRef, 0x1CDu);
      }
      else
      {
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v1);
        v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, __int64 *))(**((_QWORD **)v12 + 3) + 144LL))(
               *((_QWORD *)v12 + 3),
               v13,
               0LL,
               0LL,
               v1);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1D2u);
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 14);
    return (unsigned int)-2003304438;
  }
  return v2;
}
