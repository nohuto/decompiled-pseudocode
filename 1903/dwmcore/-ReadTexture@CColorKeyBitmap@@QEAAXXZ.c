/*
 * XREFs of ?ReadTexture@CColorKeyBitmap@@QEAAXXZ @ 0x180257FD0
 * Callers:
 *     ?ReadTexture@CColorKeyBitmapRealization@@UEAAXXZ @ 0x180256D30 (-ReadTexture@CColorKeyBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z @ 0x18021BE24 (-DebugInspectSysMemSurface@@YAXPEAXIIW4DXGI_FORMAT@@I@Z.c)
 */

void __fastcall CColorKeyBitmap::ReadTexture(CColorKeyBitmap *this)
{
  char *v1; // rdi
  __int64 (__fastcall *v2)(char *, _DWORD *, __int64 *); // rbx
  signed int v3; // eax
  __int64 v4; // rcx
  int v5; // ebx
  int v6; // edi
  enum DXGI_FORMAT v7; // esi
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  void *v13; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v14[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v16[2]; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+58h] [rbp-28h] BYREF
  int v18; // [rsp+5Ch] [rbp-24h] BYREF
  _BYTE v19[16]; // [rsp+60h] [rbp-20h] BYREF

  v12 = 0LL;
  v1 = (char *)this + 16;
  v13 = 0LL;
  *(_QWORD *)v14 = 0LL;
  (*(void (__fastcall **)(char *, int *, int *))(*(_QWORD *)v1 + 32LL))(v1, &v17, &v18);
  v2 = *(__int64 (__fastcall **)(char *, _DWORD *, __int64 *))(*(_QWORD *)v1 + 64LL);
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v12);
  v3 = v2(v1, v16, &v12);
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x57u, 0LL);
  }
  else
  {
    v5 = v17 - v16[0];
    v6 = v18 - v16[1];
    v7 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 24LL))(v12, v19);
    v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *, void **))(*(_QWORD *)v12 + 48LL))(v12, v15, &v13);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x5Eu, 0LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 40LL))(v12, v14);
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x60u, 0LL);
      else
        DebugInspectSysMemSurface(v13, v5, v6, v7, v14[0]);
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v12);
}
