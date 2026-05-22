/*
 * XREFs of ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x180082A10
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180083740 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBULegacyInputInfo@@@Z @ 0x180081728 (-ReceiveInterceptMessage@ISM@InputTraceLogging@@SAXPEBULegacyInputInfo@@@Z.c)
 *     ?ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x180081D84 (-ReceivedInterceptMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800823AC (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  int v15; // [rsp+218h] [rbp+110h]
  char v16; // [rsp+22Dh] [rbp+125h]
  __int16 v17; // [rsp+232h] [rbp+12Ah]
  __int16 v18; // [rsp+234h] [rbp+12Ch]
  __int16 v19; // [rsp+236h] [rbp+12Eh]
  int v20; // [rsp+23Ch] [rbp+134h]
  int v21; // [rsp+240h] [rbp+138h]
  char v22; // [rsp+658h] [rbp+550h]
  int v23; // [rsp+65Ch] [rbp+554h]
  char v24; // [rsp+660h] [rbp+558h]
  char v25; // [rsp+662h] [rbp+55Ah]
  char v26; // [rsp+663h] [rbp+55Bh]
  wil::details::in1diag3 *retaddr; // [rsp+680h] [rbp+578h]

  v3 = Win32kInterop::s_pInterop;
  LOBYTE(v6) = (unsigned __int8)memset_0(v12, 0, 0x640uLL);
  v14 = 1600;
  if ( !a2 )
  {
    v7 = *(_DWORD *)a3;
    InputETW::Win32kInterop::ReceivedInterceptMessage(*(_DWORD *)a3);
    LOBYTE(v6) = Win32kInterop::IsDeviceAttached(v3, v7, 0);
    if ( (_BYTE)v6 )
    {
      v12[2] = *(_DWORD *)(a3 + 8);
      v13 = *(_QWORD *)(a3 + 16);
      v17 = *(_WORD *)(a3 + 24);
      v18 = *(_WORD *)(a3 + 26);
      v19 = *(_WORD *)(a3 + 28);
      v20 = *(_DWORD *)(a3 + 32);
      v21 = *(_DWORD *)(a3 + 36);
      v8 = *(_BYTE *)(a3 + 40) & 1;
      v14 = 1600;
      v22 = v8;
      v12[0] = 2;
      v12[1] = v7;
      v16 = 1;
      v23 = 4;
      InputTraceLogging::ISM::ReceiveInterceptMessage((const struct LegacyInputInfo *)v12);
      v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v3 + 7) + 24LL))(*((_QWORD *)v3 + 7), v12);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x21E,
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
            (void *)0x245,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
            v9);
          JUMPOUT(0x180082C01LL);
      }
    }
  }
  return v6;
}
