/*
 * XREFs of ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x1800BE2E0
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800BFC10 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800BCF24 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ReceivedRawInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800BED04 (-ReceivedRawInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Win32kInterop::ProcessRawInputMessage(__int64 a1, int a2, __int64 a3)
{
  Win32kInterop *v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 (__fastcall *v11)(__int64, __int64 *); // rdi
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, __int64 *); // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+64h] [rbp-9Ch]
  int v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+78h] [rbp-88h]
  __int128 v24; // [rsp+98h] [rbp-68h]
  __int16 v25; // [rsp+C2h] [rbp-3Eh]
  int v26; // [rsp+C8h] [rbp-38h]
  int v27; // [rsp+CCh] [rbp-34h]
  int v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D4h] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  if ( !a2 )
  {
    v18[1] = -2LL;
    v4 = Win32kInterop::s_pInterop;
    v5 = *(_DWORD *)(a3 + 152);
    InputETW::Win32kInterop::ReceivedRawInputMessage(v5);
    if ( v5 )
    {
      if ( v5 != -1 && !Win32kInterop::IsDeviceAttached(v4, v5, 1) )
        return;
    }
    else
    {
      v5 = -1;
    }
    memset_0(&v20, 0, 0x1A8uLL);
    v23 = 424;
    v20 = 4096;
    v21 = v5;
    v22 = *(_DWORD *)(a3 + 144);
    v18[0] = 0LL;
    v6 = *((_QWORD *)v4 + 6);
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 72LL);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v18);
    v8 = v7(v6, v18);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1367LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v16 = 0LL;
    v9 = v18[0];
    v10 = *(_QWORD *)v18[0];
    if ( v21 == -1 )
    {
      v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(v10 + 40);
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v16);
      v12 = v11(v9, &v16);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1372LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)v12);
        __debugbreak();
      }
    }
    else
    {
      v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(v10 + 56);
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v16);
      v14 = v13(v9, v21, 1LL, &v16);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1376LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)v14);
        __debugbreak();
      }
    }
    v24 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 40LL))(v16, v19);
    v25 = *(_WORD *)(a3 + 120);
    v27 = *(_DWORD *)(a3 + 132);
    v28 = *(_DWORD *)(a3 + 136);
    v26 = *(_DWORD *)(a3 + 128);
    v29 = *(_DWORD *)(a3 + 140);
    v17 = 0LL;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)v4 + 6) + 96LL))(
      *((_QWORD *)v4 + 6),
      a3,
      *((_QWORD *)v4 + 32),
      &v17);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 24LL))(v17, &v20);
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)v4 + 32, &v17);
    v15 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v18);
  }
}
