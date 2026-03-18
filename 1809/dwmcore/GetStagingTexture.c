/*
 * XREFs of GetStagingTexture @ 0x1801E1A48
 * Callers:
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x1801E16E8 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015BA40 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetStagingTexture(__int64 a1, __int64 *a2)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v14[28]; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+64h] [rbp-1Ch]
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]
  int v18; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 80LL))(a1, v14);
  if ( v15 == 3 )
  {
    *a2 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  else
  {
    v5 = *(_QWORD *)a1;
    v12 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(v5 + 24))(a1, &v12);
    v13 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 320LL))(v12, &v13);
    v11 = 0LL;
    v16 = 0;
    v18 = 0;
    v6 = v12;
    v15 = 3;
    v17 = 0x20000;
    wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v11);
    v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v6 + 40LL))(v6, v14, 0LL, &v11);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, const GUID *, __int64, const char *))(*(_QWORD *)v11 + 40LL))(
             v11,
             &WKPDID_D3DDebugObjectName,
             25LL,
             "DWM Temp Readback (debug)");
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x77,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
          (const char *)(unsigned int)v9);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 376LL))(v13, v11, a1);
      v10 = v11;
      v11 = 0LL;
      v8 = 0;
      *a2 = v10;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v7);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v11);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v13);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v12);
    return v8;
  }
}
