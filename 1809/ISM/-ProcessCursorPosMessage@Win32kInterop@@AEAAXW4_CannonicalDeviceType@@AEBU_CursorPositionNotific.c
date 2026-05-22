/*
 * XREFs of ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x180082C08
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x180083740 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z @ 0x180081C3C (-ReceivedCursorPosMessage@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800823AC (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Win32kInterop::ProcessCursorPosMessage(__int64 a1, __int64 a2, unsigned int *a3)
{
  Win32kInterop *v4; // rdi
  int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v18; // [rsp+50h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF

  v18 = a1;
  v4 = Win32kInterop::s_pInterop;
  InputETW::Win32kInterop::ReceivedCursorPosMessage(a3[2]);
  v18 = 0LL;
  v19 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v4 + 6) + 72LL))(*((_QWORD *)v4 + 6), &v19);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x259,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = a3[2];
  if ( v6 )
  {
    LOBYTE(v10) = Win32kInterop::IsDeviceAttached(v4, v6, 1);
    if ( !(_BYTE)v10 )
      goto LABEL_12;
    v11 = v19;
    v12 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v11 + 48LL))(
            v11,
            a3[2],
            1LL,
            &v18);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x267,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v13);
      JUMPOUT(0x180082DBDLL);
    }
  }
  else
  {
    v7 = v19;
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, &v18);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x25D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 24LL))(v18, *a3, a3[1]);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x26A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
LABEL_12:
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v10;
}
