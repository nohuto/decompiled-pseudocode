/*
 * XREFs of ?UpdateConstantForDeviceAsync@MPCConstantManagerClient@@UEAAJIW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x1800E07A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x1800E13CC (-CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@W.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&UpdateConstantForDeviceAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_0020444391bc65c77824af03bb11f5f3___ @ 0x1800E16B8 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-UpdateConstantForDevic.c)
 */

__int64 __fastcall MPCConstantManagerClient::UpdateConstantForDeviceAsync(
        __int64 a1,
        int a2,
        int a3,
        HSTRING a4,
        struct Windows::Foundation::IPropertyValue *a5,
        __int64 a6)
{
  int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // r8
  tagPROPVARIANT v14; // [rsp+20h] [rbp-50h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+44h] [rbp-2Ch]
  __int128 v18; // [rsp+48h] [rbp-28h]
  BYTE *pData; // [rsp+58h] [rbp-18h]
  HSTRING v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  HSTRING newString; // [rsp+90h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 152LL) )
  {
    v11 = MPCConstantManagerClient::CreatePROPVARIANTFromPropertyValue(a5, &v14);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
        (const char *)(unsigned int)v11);
      JUMPOUT(0x1800E0880LL);
    }
    WindowsDuplicateString(a4, &newString);
    v12 = *(_OWORD *)&v14.vt;
    v14.lVal = 0;
    v18 = v12;
    v15 = a1;
    v16 = a2;
    v17 = a3;
    pData = v14.bstrblobVal.pData;
    v20 = newString;
    *(_QWORD *)&v14.vt = 4LL;
    return ((__int64 (__fastcall *)(tagPROPVARIANT *, __int64, __int64, __int64 *))Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions__UpdateConstantForDeviceAsyncCasualityName__GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_0020444391bc65c77824af03bb11f5f3___)(
             &v14,
             a6,
             v13,
             &v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
