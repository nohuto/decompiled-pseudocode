/*
 * XREFs of ?GetConstantForTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@6@@Z @ 0x1800E0A60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAsyncOperationHelper@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@PEAUIPropertyValue@Foundation@3@VComTaskPoolHandler@23@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@@01@@Z @ 0x1800E1E64 (--$MakeAsyncOperationHelper@V-$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@In.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall MPCConstantManagerClient::GetConstantForTypeAsync(__int64 a1, int a2, HSTRING a3, __int64 a4)
{
  char *v8; // rax
  __int64 v9; // r8
  __int128 v10; // xmm0
  HSTRING v11; // xmm1_8
  _DWORD v12[4]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h]
  HSTRING v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  HSTRING newString; // [rsp+60h] [rbp+10h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 152LL) )
  {
    WindowsDuplicateString(a3, &newString);
    v12[1] = 0;
    v12[2] = 0;
    v14 = newString;
    *(_QWORD *)&v13 = a1;
    DWORD2(v13) = a2;
    v12[0] = 4;
    v8 = (char *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8 )
    {
      v10 = v13;
      v11 = v14;
      *(_QWORD *)v8 = off_180141C58;
      *(_OWORD *)(v8 + 8) = v10;
      *((_QWORD *)v8 + 3) = v11;
    }
    return ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, char *))Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>,Windows::Foundation::IPropertyValue *,Windows::Internal::ComTaskPoolHandler>)(
             v12,
             a4,
             v9,
             v8);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)0x80010103LL);
    return 2147549443LL;
  }
}
