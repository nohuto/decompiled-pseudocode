/*
 * XREFs of GetStagingTexture @ 0x18021C3F8
 * Callers:
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18021BE8C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18021C000 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180167F50 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetStagingTexture(__int64 a1, __int64 *a2)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _BYTE *, _QWORD, __int64 *); // rdi
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v15[28]; // [rsp+48h] [rbp-38h] BYREF
  int v16; // [rsp+64h] [rbp-1Ch]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  int v19; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 80LL))(a1, v15);
  if ( v16 == 3 )
  {
    *a2 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0LL;
  }
  else
  {
    v5 = *(_QWORD *)a1;
    v13 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(v5 + 24))(a1, &v13);
    v14 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 320LL))(v13, &v14);
    v6 = v13;
    v12 = 0LL;
    v17 = 0;
    v19 = 0;
    v16 = 3;
    v18 = 0x20000;
    v7 = *(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, __int64 *))(*(_QWORD *)v13 + 40LL);
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v12);
    v8 = v7(v6, v15, 0LL, &v12);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, const GUID *, __int64, const char *))(*(_QWORD *)v12 + 40LL))(
              v12,
              &WKPDID_D3DDebugObjectName,
              25LL,
              "DWM Temp Readback (debug)");
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x78,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
          (const char *)(unsigned int)v10);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 376LL))(v14, v12, a1);
      v11 = v12;
      v12 = 0LL;
      v9 = 0;
      *a2 = v11;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v8);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v12);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v14);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v13);
    return v9;
  }
}
