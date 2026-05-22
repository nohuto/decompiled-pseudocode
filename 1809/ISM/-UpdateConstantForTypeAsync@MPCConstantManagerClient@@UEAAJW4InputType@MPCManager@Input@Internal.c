/*
 * XREFs of ?UpdateConstantForTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x1800E0890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x1800E13CC (-CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@W.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&UpdateConstantForTypeAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d4d997c91d9ada6146019f0263a22bf4___ @ 0x1800E1808 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-UpdateConstantForTypeA.c)
 */

__int64 __fastcall MPCConstantManagerClient::UpdateConstantForTypeAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        struct Windows::Foundation::IPropertyValue *a4,
        __int64 a5)
{
  int v9; // eax
  __int128 v10; // xmm0
  __int64 v11; // r8
  struct tagPROPVARIANT v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+48h] [rbp-28h]
  BYTE *pData; // [rsp+58h] [rbp-18h]
  HSTRING v17; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  HSTRING newString; // [rsp+80h] [rbp+10h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 152LL) )
  {
    v9 = MPCConstantManagerClient::CreatePROPVARIANTFromPropertyValue(a4, &v12);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x1800E096ALL);
    }
    WindowsDuplicateString(a3, &newString);
    v10 = *(_OWORD *)&v12.vt;
    v12.lVal = 0;
    v15 = v10;
    v13 = a1;
    v14 = a2;
    pData = v12.bstrblobVal.pData;
    v17 = newString;
    *(_QWORD *)&v12.vt = 4LL;
    return ((__int64 (__fastcall *)(struct tagPROPVARIANT *, __int64, __int64, __int64 *))Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions__UpdateConstantForTypeAsyncCasualityName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d4d997c91d9ada6146019f0263a22bf4___)(
             &v12,
             a5,
             v11,
             &v13);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
