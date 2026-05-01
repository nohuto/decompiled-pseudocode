/*
 * XREFs of ?RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaStoreAppHelper@@YAJXZ @ 0x1801C7EAC
 * Callers:
 *     ?ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z @ 0x1801C634C (-ApplyReplaceDecision@CortanaStoreAppHelper@@YAJEE@Z.c)
 * Callees:
 *     ?GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z @ 0x18003D92C (-GetCortanaCapabilities@CortanaCapabilities@@YAJPEAW4CapabilityFlags@1@PEA_N@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180040358 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$?0$0EG@@StringReference@Internal@Windows@@QEAA@AEAY0EG@$$CBG@Z @ 0x1801C12E8 (--$-0$0EG@@StringReference@Internal@Windows@@QEAA@AEAY0EG@$$CBG@Z.c)
 *     ??$GetActivationFactory@V?$ComPtr@UICapabilityConsentManagerStatics@Management@CapabilityAccess@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UICapabilityConsentManagerStatics@Management@CapabilityAccess@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801C182C (--$GetActivationFactory@V-$ComPtr@UICapabilityConsentManagerStatics@Management@CapabilityAccess@.c)
 *     ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1801C18A4 (--$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA-AV-$unique_ptr.c)
 *     ??$Undocking_CurrentSystemAppCapabilities@AEAW4CapabilityFlags@CortanaCapabilities@@@CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaProactiveTelemetry@@QEAAXAEAW4CapabilityFlags@CortanaCapabilities@@@Z @ 0x1801C2080 (--$Undocking_CurrentSystemAppCapabilities@AEAW4CapabilityFlags@CortanaCapabilities@@@CortanaUndo.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801C4438 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801C4438.c)
 *     ??1CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4EE0 (--1CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaProactiveTelemetry@@QE.c)
 *     ?ConvertCapabilitiesFlagToCapabilitiesString@CortanaStoreAppHelper@@YAJW4CapabilityFlags@CortanaCapabilities@@PEAPEAUHSTRING__@@@Z @ 0x1801C667C (-ConvertCapabilitiesFlagToCapabilitiesString@CortanaStoreAppHelper@@YAJW4CapabilityFlags@Cortana.c)
 *     ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBG0K@Z @ 0x1801C82B0 (-SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBG0K@Z.c)
 *     ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z @ 0x1801C82F4 (-SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z.c)
 *     ?StartActivity@CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801C8F34 (-StartActivity@CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace@CortanaProactiveT.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801C936C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_.c)
 *     ?UseStoreIdentity@CortanaIdentity@Cortana@Windows@@CA_NXZ @ 0x1801CC6A4 (-UseStoreIdentity@CortanaIdentity@Cortana@Windows@@CA_NXZ.c)
 *     ?reset@?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKEN_USER@@@Z @ 0x1801CDDE0 (-reset@-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKE.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801CDE08 (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CortanaStoreAppHelper::RevokeDeviceCapabilitiesFromSystemAppOnReplace(CortanaStoreAppHelper *this)
{
  __int64 v1; // rdx
  const unsigned __int16 *v2; // rdx
  BOOL v3; // ebx
  const char *v4; // r9
  unsigned int LastError; // ebx
  __int64 *v6; // rax
  int CortanaCapabilities; // eax
  enum CortanaCapabilities::CapabilityFlags *v8; // rdx
  bool *v9; // r8
  __int64 v10; // rdx
  int v11; // r15d
  const WCHAR **v12; // r14
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, __int64 *); // rsi
  HSTRING_HEADER *v15; // rdi
  int v16; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, PVOID, PVOID, __int64); // rsi
  bool v19; // al
  const WCHAR *v20; // rcx
  HSTRING_HEADER *v21; // rdi
  HSTRING_HEADER *v22; // rax
  __int64 v23; // rdx
  __int16 v24; // di
  unsigned int v25; // r9d
  int v26; // eax
  __int64 v27; // rdx
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v29; // r8
  unsigned int v30; // r9d
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  HLOCAL hMem; // [rsp+50h] [rbp-B8h] BYREF
  const WCHAR *v36; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v37[2]; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING_HEADER v38; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER v39; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v40[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v37[1] = -2LL;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v40,
    (__int64)"CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace");
  v40[0] = &CortanaProactiveTelemetry::CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace::`vftable';
  CortanaProactiveTelemetry::CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace::StartActivity((CortanaProactiveTelemetry::CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace *)v40);
  hMem = 0LL;
  wil::details::GetTokenInfoWrap<_TOKEN_USER,wil::err_exception_policy,0>(v37, v1);
  v38.Reserved.Reserved1 = &hMem;
  *(_QWORD *)&v38.Reserved.Reserved2[8] = 0LL;
  v38.Reserved.Reserved2[16] = 1;
  v3 = ConvertSidToStringSidW(*(PSID *)v37[0], (LPWSTR *)&v38.Reserved.Reserved2[8]);
  if ( v38.Reserved.Reserved2[16] )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      v38.Reserved.Reserved1,
      *(_QWORD *)&v38.Reserved.Reserved2[8]);
  if ( !v3 )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x2F0,
                  (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
                  v4);
    goto LABEL_31;
  }
  v34 = 0LL;
  v6 = (__int64 *)Windows::Internal::StringReference::StringReference(
                    (HSTRING *)&v38,
                    (const unsigned __int16 (*)[70])v2);
  CortanaCapabilities = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::CapabilityAccess::Management::ICapabilityConsentManagerStatics>>(
                          *v6,
                          &v34);
  LastError = CortanaCapabilities;
  if ( CortanaCapabilities >= 0 )
  {
    v11 = 0;
    v12 = (const WCHAR **)&unk_180467A20;
    do
    {
      if ( ((*(_DWORD *)v12 - 16) & 0xFFFFFFEF) != 0 )
      {
        v11 |= *(_DWORD *)v12;
        v32 = 0LL;
        v13 = v34;
        v14 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v34 + 48LL);
        v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, v12 + 1);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
        v16 = v14(v13, v15[1].Reserved.Reserved1, &v32);
        LastError = v16;
        if ( v16 < 0 )
        {
          v23 = 770LL;
          goto LABEL_19;
        }
        v17 = v32;
        v18 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64))(*(_QWORD *)v32 + 144LL);
        v19 = Windows::Cortana::CortanaIdentity::UseStoreIdentity();
        v20 = L"Microsoft.Cortana_8wekyb3d8bbwe";
        if ( !v19 )
          v20 = L"Microsoft.Windows.Cortana_cw5n1h2txyewy";
        v36 = v20;
        v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v38, &v36);
        v36 = (const WCHAR *)hMem;
        v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v39, &v36);
        v16 = v18(v17, v22[1].Reserved.Reserved1, v21[1].Reserved.Reserved1, 2LL);
        LastError = v16;
        if ( v16 < 0 )
        {
          v23 = 775LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v23,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
            (const char *)(unsigned int)v16);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
          goto LABEL_30;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
      }
      v12 += 2;
    }
    while ( v12 != (const WCHAR **)&`Cortana::ViewModeHelpers::GetMainViewMode'::`5'::searchViewModeProtocolPrefix );
    CortanaCapabilities = CortanaCapabilities::GetCortanaCapabilities((CortanaCapabilities *)&v32, v8, v9);
    LastError = CortanaCapabilities;
    if ( CortanaCapabilities < 0 )
    {
      v10 = 780LL;
      goto LABEL_22;
    }
    CortanaProactiveTelemetry::CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace::Undocking_CurrentSystemAppCapabilities<enum CortanaCapabilities::CapabilityFlags &>(
      (__int64)v40,
      (int *)&v32);
    v24 = ~(_WORD)v11 & v32;
    CortanaCapabilities = CortanaStoreAppHelper::SetCortanaRegKey(
                            L"CortanaCapabilityFlags",
                            (const unsigned __int16 *)(~v11 & (unsigned int)v32),
                            0,
                            v25);
    LastError = CortanaCapabilities;
    if ( CortanaCapabilities < 0 )
    {
      v10 = 785LL;
      goto LABEL_22;
    }
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v26 = CortanaStoreAppHelper::ConvertCapabilitiesFlagToCapabilitiesString(v24, &string);
    LastError = v26;
    if ( v26 >= 0 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v26 = CortanaStoreAppHelper::SetCortanaRegKey(
              (CortanaStoreAppHelper *)L"CortanaCapabilities",
              StringRawBuffer,
              v29,
              v30);
      LastError = v26;
      if ( v26 >= 0 )
      {
        wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v40);
        LastError = 0;
        goto LABEL_29;
      }
      v27 = 789LL;
    }
    else
    {
      v27 = 788LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)v26);
LABEL_29:
    WindowsDeleteString(string);
    string = 0LL;
    goto LABEL_30;
  }
  v10 = 755LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)CortanaCapabilities);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
LABEL_31:
  wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(v37, 0LL);
  if ( hMem )
    LocalFree(hMem);
  CortanaProactiveTelemetry::CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace::~CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace((CortanaProactiveTelemetry::CortanaUndocking_RevokeDeviceCapabilitiesFromSystemAppOnReplace *)v40);
  return LastError;
}
