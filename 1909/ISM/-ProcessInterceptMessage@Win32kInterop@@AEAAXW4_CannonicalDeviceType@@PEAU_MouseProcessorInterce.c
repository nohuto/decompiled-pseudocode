/*
 * XREFs of ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x1800BDA00
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800BFAC0 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800BCDD4 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z @ 0x1800BE5C4 (-ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBURawMouseInputInfo@@@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x1800BEB18 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 */

char __fastcall Win32kInterop::ProcessInterceptMessage(__int64 a1, int a2, __int64 a3)
{
  Win32kInterop *v3; // rsi
  int v6; // eax
  int v7; // ebx
  char v8; // al
  const char *v9; // r9
  bool v10; // zf
  int v12[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-D0h]
  int v14; // [rsp+40h] [rbp-C8h]
  int v15; // [rsp+50h] [rbp-B8h]
  char v16; // [rsp+59h] [rbp-AFh]
  __int16 v17; // [rsp+8Ah] [rbp-7Eh]
  __int16 v18; // [rsp+8Ch] [rbp-7Ch]
  __int16 v19; // [rsp+8Eh] [rbp-7Ah]
  int v20; // [rsp+94h] [rbp-74h]
  int v21; // [rsp+98h] [rbp-70h]
  char v22; // [rsp+A0h] [rbp-68h]
  int v23; // [rsp+A4h] [rbp-64h]
  char v24; // [rsp+A8h] [rbp-60h]
  char v25; // [rsp+AAh] [rbp-5Eh]
  char v26; // [rsp+ABh] [rbp-5Dh]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v3 = Win32kInterop::s_pInterop;
  LOBYTE(v6) = (unsigned __int8)memset_0(v12, 0, 0x1A8uLL);
  v14 = 424;
  if ( !a2 )
  {
    v7 = *(_DWORD *)a3;
    InputETW::Win32kInterop::ReceivedInterceptMessage(*(_DWORD *)a3);
    if ( v7 )
    {
      if ( v7 != -1 )
      {
        LOBYTE(v6) = Win32kInterop::IsDeviceAttached(v3, v7, 1);
        if ( !(_BYTE)v6 )
          return v6;
      }
    }
    else
    {
      v7 = -1;
    }
    v12[2] = *(_DWORD *)(a3 + 8);
    v13 = *(_QWORD *)(a3 + 16);
    v17 = *(_WORD *)(a3 + 24);
    v18 = *(_WORD *)(a3 + 26);
    v19 = *(_WORD *)(a3 + 28);
    v20 = *(_DWORD *)(a3 + 32);
    v21 = *(_DWORD *)(a3 + 36);
    v8 = *(_BYTE *)(a3 + 40) & 1;
    v12[0] = 4096;
    v22 = v8;
    v12[1] = v7;
    v16 = 1;
    v23 = 4;
    InputTraceLogging::ISM::ReceiveInterceptMessage((const struct RawMouseInputInfo *)v12);
    v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v3 + 7) + 24LL))(*((_QWORD *)v3 + 7), v12);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        825LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    switch ( v23 )
    {
      case 1:
        *(_DWORD *)(a3 + 48) = 0;
        break;
      case 2:
        v10 = v25 == 0;
        *(_DWORD *)(a3 + 48) = 2;
        if ( !v10 )
          *(_DWORD *)(a3 + 68) = 16;
        v10 = v24 == 0;
        *(_WORD *)(a3 + 60) = v17;
        *(_DWORD *)(a3 + 52) = v20;
        *(_DWORD *)(a3 + 56) = v21;
        LOBYTE(v6) = v15;
        *(_DWORD *)(a3 + 64) = v15;
        if ( !v10 )
          *(_DWORD *)(a3 + 68) |= 0x20u;
        if ( v26 )
          *(_DWORD *)(a3 + 68) |= 0x40u;
        break;
      case 4:
        *(_DWORD *)(a3 + 48) = 1;
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          864LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          v9);
        __debugbreak();
    }
  }
  return v6;
}
