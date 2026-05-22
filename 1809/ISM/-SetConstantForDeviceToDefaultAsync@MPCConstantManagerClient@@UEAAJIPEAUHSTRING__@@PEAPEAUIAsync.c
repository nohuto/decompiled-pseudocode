/*
 * XREFs of ?SetConstantForDeviceToDefaultAsync@MPCConstantManagerClient@@UEAAJIPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x1800E0BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&SetConstantForDeviceToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_806f78d28c8f10a2fa7e8f1910bc87ed___ @ 0x1800E1A9C (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-SetConstantForDeviceTo.c)
 */

__int64 __fastcall MPCConstantManagerClient::SetConstantForDeviceToDefaultAsync(
        MPCConstantManagerClient *this,
        int a2,
        HSTRING a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  __int64 v8; // r8
  _DWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF
  MPCConstantManagerClient *v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  HSTRING v12; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING newString; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*((_QWORD *)this + 4) + 152LL) )
  {
    WindowsDuplicateString(a3, &newString);
    v9[1] = 0;
    v9[2] = 0;
    v12 = newString;
    v10 = this;
    v11 = a2;
    v9[0] = 4;
    return ((__int64 (__fastcall *)(_DWORD *, struct Windows::Foundation::IAsyncAction **, __int64, MPCConstantManagerClient **))Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions__SetConstantForDeviceToDefaultAsyncCasualityName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_806f78d28c8f10a2fa7e8f1910bc87ed___)(
             v9,
             a4,
             v8,
             &v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
