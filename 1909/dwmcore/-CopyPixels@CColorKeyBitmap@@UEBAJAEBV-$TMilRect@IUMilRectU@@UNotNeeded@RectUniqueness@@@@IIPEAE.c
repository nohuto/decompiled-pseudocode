/*
 * XREFs of ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802561D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800CC7BC (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CColorKeyBitmap::CopyPixels(
        __int64 *a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rax
  __int64 (__fastcall *v9)(__int64 *, _DWORD *, __int64 *); // rbx
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int32 v14; // edi
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // [rsp+50h] [rbp-21h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-19h] BYREF
  unsigned int v26; // [rsp+5Ch] [rbp-15h] BYREF
  int v27; // [rsp+60h] [rbp-11h] BYREF
  int v28; // [rsp+64h] [rbp-Dh] BYREF
  unsigned __int8 *Src; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v30[16]; // [rsp+70h] [rbp-1h] BYREF

  v5 = *a1;
  v24 = 0LL;
  v28 = 0;
  v9 = *(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64 *))(v5 + 64);
  v27 = 0;
  v26 = 0;
  Src = 0LL;
  v25 = 0;
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v24);
  v11 = v9(a1, a2, &v24);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x78u, 0LL);
  }
  else
  {
    v14 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 24LL))(v24, v30);
    v15 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v24 + 32LL))(v24, &v28, &v27);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x7Bu, 0LL);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 40LL))(v24, &v26);
      v13 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x7Cu, 0LL);
      }
      else
      {
        v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v24 + 48LL))(
                v24,
                &v25,
                &Src);
        v13 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x7Eu, 0LL);
        }
        else
        {
          v21 = CBitmap::CopyPixelsHelper(v14, a2[2] - *a2, a2[3] - a2[1], v26, v25, Src, a3, a4, a5);
          v13 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x89u, 0LL);
        }
      }
    }
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v24);
  return v13;
}
