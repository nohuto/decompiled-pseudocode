/*
 * XREFs of ?GetConstantForDeviceAsync@MPCConstantManagerClient@@UEAAJIW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@6@@Z @ 0x1800E0980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncOperationHelper@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@PEAUIPropertyValue@Foundation@3@VComTaskPoolHandler@23@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x1800E1E64 (--$MakeAsyncOperationHelper@V-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@In.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall MPCConstantManagerClient::GetConstantForDeviceAsync(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        HSTRING a4,
        __int64 a5)
{
  char *v9; // rax
  __int64 v10; // r8
  __int128 v11; // xmm0
  HSTRING v12; // xmm1_8
  _DWORD v13[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h]
  HSTRING v15; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  HSTRING newString; // [rsp+60h] [rbp+10h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 152LL) )
  {
    WindowsDuplicateString(a4, &newString);
    v13[1] = 0;
    v13[2] = 0;
    v15 = newString;
    *(_QWORD *)&v14 = a1;
    *((_QWORD *)&v14 + 1) = __PAIR64__(a3, a2);
    v13[0] = 4;
    v9 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v9 )
    {
      v11 = v14;
      v12 = v15;
      *(_QWORD *)v9 = off_180141CE8;
      *(_OWORD *)(v9 + 8) = v11;
      *((_QWORD *)v9 + 3) = v12;
    }
    return ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, char *))Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>,Windows::Foundation::IPropertyValue *,Windows::Internal::ComTaskPoolHandler>)(
             v13,
             a5,
             v10,
             v9);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
