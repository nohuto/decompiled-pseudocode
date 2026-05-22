/*
 * XREFs of ?SetAllConstantsForInputTypeToDefaultAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAPEAUIAsyncAction@Foundation@6@@Z @ 0x1801204E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&SetAllConstantsForInputTypeToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_16bcd66e868557b6123b295398ded03e___ @ 0x180117284 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-SetAllConstantsForInpu.c)
 */

__int64 __fastcall MPCConstantManagerClient::SetAllConstantsForInputTypeToDefaultAsync(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 152LL) )
  {
    *(_QWORD *)&v6 = a1;
    DWORD2(v6) = a2;
    v5 = 0;
    v4 = 4LL;
    return Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions__SetAllConstantsForInputTypeToDefaultAsyncCasualityName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_16bcd66e868557b6123b295398ded03e___(
             (int)&v4,
             a3,
             a3,
             &v6);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
