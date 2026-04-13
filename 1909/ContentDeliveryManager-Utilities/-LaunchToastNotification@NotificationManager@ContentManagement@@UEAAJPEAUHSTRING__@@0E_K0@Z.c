/*
 * XREFs of ?LaunchToastNotification@NotificationManager@ContentManagement@@UEAAJPEAUHSTRING__@@0E_K0@Z @ 0x18000C6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::NotificationManager::LaunchToastNotification(
        ContentManagement::NotificationManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        unsigned __int64 a5,
        HSTRING string)
{
  HRESULT Instance; // eax
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  PCWSTR StringRawBuffer; // r14
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, const WCHAR *, PCWSTR, _QWORD, int, PCWSTR, PCWSTR, PCWSTR, _DWORD *, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD, BOOL, int *); // r15
  BOOL v16; // edi
  PCWSTR v17; // rsi
  PCWSTR v18; // rax
  int v19; // eax
  const char *v20; // r9
  wil::details::in1diag3 *v21; // rcx
  __int64 result; // rax
  int v23; // [rsp+90h] [rbp-48h] BYREF
  __int64 v24; // [rsp+98h] [rbp-40h] BYREF
  LPVOID ppv[2]; // [rsp+A0h] [rbp-38h] BYREF
  _DWORD v26[4]; // [rsp+B0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_0c9281f9_6da1_4006_8729_de6e6b61581c,
               0LL,
               0x17u,
               &GUID_df8e9480_ca73_448e_b8f0_da000f581428,
               ppv);
  try
  {
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)Instance);
    }
    else
    {
      v24 = 0LL;
      v10 = *(_QWORD *)ppv[0];
      v24 = 0LL;
      v11 = (*(__int64 (__fastcall **)(LPVOID, __int64 *))(v10 + 24))(ppv[0], &v24);
      v12 = retaddr;
      if ( v11 >= 0 )
      {
        v26[0] = 1;
        v26[1] = a5;
        StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
        v23 = 0;
        v14 = v24;
        v15 = *(__int64 (__fastcall **)(__int64, const WCHAR *, PCWSTR, _QWORD, int, PCWSTR, PCWSTR, PCWSTR, _DWORD *, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD, BOOL, int *))(*(_QWORD *)v24 + 64LL);
        v26[2] = HIDWORD(a5);
        v16 = a4 != 0;
        v17 = WindowsGetStringRawBuffer(a2, 0LL);
        v18 = WindowsGetStringRawBuffer(string, 0LL);
        v19 = v15(
                v14,
                L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
                v18,
                0LL,
                1,
                v17,
                StringRawBuffer,
                StringRawBuffer,
                v26,
                0,
                0,
                0LL,
                0LL,
                0LL,
                v16,
                &v23);
        v21 = retaddr;
        if ( v19 >= 0 )
        {
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          if ( ppv[0] )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
          return 0LL;
        }
LABEL_12:
        wil::details::in1diag3::Throw_Hr(
          v21,
          (void *)0x103,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v19);
        JUMPOUT(0x18000C8F9LL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0xEA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_12;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x106,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                           v20);
  }
  return result;
}
