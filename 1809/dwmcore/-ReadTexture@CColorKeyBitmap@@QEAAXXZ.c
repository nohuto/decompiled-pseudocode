/*
 * XREFs of ?ReadTexture@CColorKeyBitmap@@QEAAXXZ @ 0x18022A208
 * Callers:
 *     ?ReadTexture@CColorKeyBitmapRealization@@UEAAXXZ @ 0x180226A80 (-ReadTexture@CColorKeyBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x1801E1680 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 */

void __fastcall CColorKeyBitmap::ReadTexture(CColorKeyBitmap *this)
{
  char *v1; // rbx
  int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // edi
  enum DXGI_FORMAT v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  void *v12; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v13[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+58h] [rbp-28h] BYREF
  int v17; // [rsp+5Ch] [rbp-24h] BYREF
  _BYTE v18[16]; // [rsp+60h] [rbp-20h] BYREF

  v11 = 0LL;
  v1 = (char *)this + 16;
  v12 = 0LL;
  *(_QWORD *)v13 = 0LL;
  (*(void (__fastcall **)(char *, int *, int *))(*(_QWORD *)v1 + 32LL))(v1, &v16, &v17);
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v11);
  v2 = (*(__int64 (__fastcall **)(char *, _DWORD *, __int64 *))(*(_QWORD *)v1 + 64LL))(v1, v15, &v11);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x59u);
  }
  else
  {
    v4 = v16 - v15[0];
    v5 = v17 - v15[1];
    v6 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 24LL))(v11, v18);
    v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, void **))(*(_QWORD *)v11 + 48LL))(v11, v14, &v12);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x60u);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 40LL))(v11, v13);
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x62u);
      else
        DebugInspectSysMemSurface(v12, v4, v5, v6, v13[0]);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v11);
}
