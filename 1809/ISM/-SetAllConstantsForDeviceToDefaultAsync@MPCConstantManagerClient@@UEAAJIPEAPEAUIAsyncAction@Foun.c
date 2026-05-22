/*
 * XREFs of ?SetAllConstantsForDeviceToDefaultAsync@MPCConstantManagerClient@@UEAAJIPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x1800E0B40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&SetAllConstantsForDeviceToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_891e6175c7f2ccc3599c4db7fcbe05a3___ @ 0x1800E1958 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-SetAllConstantsForDevi.c)
 */

__int64 __fastcall MPCConstantManagerClient::SetAllConstantsForDeviceToDefaultAsync(
        MPCConstantManagerClient *this,
        int a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  MPCConstantManagerClient *v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_QWORD *)(*((_QWORD *)this + 4) + 152LL) )
  {
    v6 = this;
    v7 = a2;
    v5 = 0;
    v4 = 4LL;
    return ((__int64 (__fastcall *)(__int64 *, struct Windows::Foundation::IAsyncAction **, struct Windows::Foundation::IAsyncAction **, MPCConstantManagerClient **))Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions__SetAllConstantsForDeviceToDefaultAsyncCasualityName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_891e6175c7f2ccc3599c4db7fcbe05a3___)(
             &v4,
             a3,
             a3,
             &v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
