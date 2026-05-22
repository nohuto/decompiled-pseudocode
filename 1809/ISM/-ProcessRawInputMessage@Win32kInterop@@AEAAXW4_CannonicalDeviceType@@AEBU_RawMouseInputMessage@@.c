/*
 * XREFs of ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x1800834A4
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180083740 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReceivedRawInputMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x180081CE0 (-ReceivedRawInputMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800823AC (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Win32kInterop::ProcessRawInputMessage(__int64 a1, int a2, __int64 a3)
{
  Win32kInterop *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[16]; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-9Ch]
  int v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+78h] [rbp-88h]
  __int128 v22; // [rsp+238h] [rbp+138h]
  __int16 v23; // [rsp+26Ah] [rbp+16Ah]
  int v24; // [rsp+270h] [rbp+170h]
  int v25; // [rsp+274h] [rbp+174h]
  int v26; // [rsp+278h] [rbp+178h]
  int v27; // [rsp+27Ch] [rbp+17Ch]
  wil::details::in1diag3 *retaddr; // [rsp+6B8h] [rbp+5B8h]

  if ( a2 )
    return;
  v16[1] = -2LL;
  v4 = Win32kInterop::s_pInterop;
  v5 = *(_DWORD *)(a3 + 208);
  InputETW::Win32kInterop::ReceivedRawInputMessage(v5);
  if ( !Win32kInterop::IsDeviceAttached(v4, v5, 1) )
    return;
  memset_0(&v18, 0, 0x640uLL);
  v21 = 1600;
  v18 = 4096;
  v19 = v5;
  v20 = *(_DWORD *)(a3 + 200);
  v16[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)v4 + 6) + 72LL))(*((_QWORD *)v4 + 6), v16);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::FailFast_Hr(
      v7,
      (void *)0x416,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180083737LL);
  }
  v15 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)v16[0] + 48LL))(
         v16[0],
         v19,
         1LL,
         &v15);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x419,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_18;
  }
  v22 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v15 + 40LL))(v15, v17);
  v23 = *(_WORD *)(a3 + 176);
  v25 = *(_DWORD *)(a3 + 188);
  v26 = *(_DWORD *)(a3 + 192);
  v24 = *(_DWORD *)(a3 + 184);
  v27 = *(_DWORD *)(a3 + 196);
  v14 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**((_QWORD **)v4 + 6) + 96LL))(
    *((_QWORD *)v4 + 6),
    a3,
    *((_QWORD *)v4 + 40),
    &v14);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 24LL))(v14, &v18);
  v9 = *((_QWORD *)v4 + 40);
  v10 = v14;
  if ( v9 != v14 )
  {
    v11 = v14;
    if ( v14 )
    {
      (*(void (**)(void))(*(_QWORD *)v14 + 8LL))();
      v9 = *((_QWORD *)v4 + 40);
      v10 = v14;
    }
    *((_QWORD *)v4 + 40) = v11;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v10 = v14;
    }
  }
  if ( v10 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
}
