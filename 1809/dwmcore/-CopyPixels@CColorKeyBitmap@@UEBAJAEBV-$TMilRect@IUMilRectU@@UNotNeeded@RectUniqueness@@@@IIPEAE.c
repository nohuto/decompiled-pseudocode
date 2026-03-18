/*
 * XREFs of ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180229BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x18007F2E4 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CColorKeyBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  enum DXGI_FORMAT v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v24; // [rsp+5Ch] [rbp-15h] BYREF
  int v25; // [rsp+60h] [rbp-11h] BYREF
  int v26; // [rsp+64h] [rbp-Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v28[16]; // [rsp+70h] [rbp-1h] BYREF

  v22 = 0LL;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  Src = 0LL;
  v23 = 0;
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v22);
  v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, a2, &v22);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x7Au);
  }
  else
  {
    v12 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v22 + 24LL))(v22, v28);
    v13 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v22 + 32LL))(v22, &v26, &v25);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x7Du);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 40LL))(v22, &v24);
      v11 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x7Eu);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v22 + 48LL))(
                v22,
                &v23,
                &Src);
        v11 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x80u);
        }
        else
        {
          v19 = CBitmap::CopyPixelsHelper(v12, a2[2] - *a2, a2[3] - a2[1], v24, v23, Src, a3, a4, a5);
          v11 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x8Bu);
        }
      }
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v22);
  return v11;
}
