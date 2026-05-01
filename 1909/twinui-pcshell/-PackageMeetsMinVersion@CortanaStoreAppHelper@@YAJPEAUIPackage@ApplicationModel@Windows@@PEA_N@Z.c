/*
 * XREFs of ?PackageMeetsMinVersion@CortanaStoreAppHelper@@YAJPEAUIPackage@ApplicationModel@Windows@@PEA_N@Z @ 0x1801E6A3C
 * Callers:
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIOneSettingsPayloadStatics@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIOneSettingsPayloadStatics@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801E0888 (--$GetActivationFactory@V-$ComPtr@UIOneSettingsPayloadStatics@OneSettings@Flighting@Internal@Win.c)
 *     ?GetOneSettingsCortanaAppKey@CortanaStoreAppHelper@@YAPEBGXZ @ 0x1801E5BF0 (-GetOneSettingsCortanaAppKey@CortanaStoreAppHelper@@YAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CortanaStoreAppHelper::PackageMeetsMinVersion(
        CortanaStoreAppHelper *this,
        struct Windows::ApplicationModel::IPackage *a2,
        bool *a3)
{
  int v5; // eax
  CortanaStoreAppHelper *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, __int64 *); // rsi
  HSTRING_HEADER *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, double *); // rdi
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64, double *); // rdi
  int v17; // eax
  __int64 v18; // rdx
  double v19; // xmm0_8
  bool v20; // al
  __int64 v21; // rcx
  __int64 v23; // [rsp+28h] [rbp-39h] BYREF
  __int64 v24; // [rsp+30h] [rbp-31h] BYREF
  __int64 v25; // [rsp+38h] [rbp-29h] BYREF
  __int64 v26; // [rsp+40h] [rbp-21h] BYREF
  double v27; // [rsp+48h] [rbp-19h] BYREF
  const WCHAR *OneSettingsCortanaAppKey; // [rsp+50h] [rbp-11h] BYREF
  double v29[2]; // [rsp+58h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+7h] BYREF
  __int64 v31; // [rsp+80h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v29[1] = NAN;
  *(_BYTE *)a2 = 0;
  v26 = 0LL;
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Flighting.OneSettings.OneSettingsPayload",
    0x3Au,
    0x39u);
  v5 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Flighting::OneSettings::IOneSettingsPayloadStatics>>(
         v31,
         &v26);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v23 = 0LL;
    v8 = v26;
    v9 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v26 + 48LL);
    OneSettingsCortanaAppKey = CortanaStoreAppHelper::GetOneSettingsCortanaAppKey(v6);
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &OneSettingsCortanaAppKey);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    v11 = v9(v8, v10[1].Reserved.Reserved1, &v23);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 181LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
        (const char *)(unsigned int)v11);
LABEL_23:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      goto LABEL_24;
    }
    v13 = v23;
    v14 = *(__int64 (__fastcall **)(__int64, __int64, double *))(*(_QWORD *)v23 + 80LL);
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MinMajorVersion", 0x10u, 0xFu);
    v11 = v14(v13, v31, &v27);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 184LL;
      goto LABEL_9;
    }
    v15 = v23;
    v16 = *(__int64 (__fastcall **)(__int64, __int64, double *))(*(_QWORD *)v23 + 80LL);
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"MinMinorVersion", 0x10u, 0xFu);
    v11 = v16(v15, v31, v29);
    v7 = v11;
    if ( v11 < 0 )
    {
      v12 = 187LL;
      goto LABEL_9;
    }
    v24 = 0LL;
    v17 = (*(__int64 (__fastcall **)(CortanaStoreAppHelper *, __int64 *))(*(_QWORD *)this + 48LL))(this, &v24);
    v7 = v17;
    if ( v17 >= 0 )
    {
      v25 = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 56LL))(v24, &v25);
      v7 = v17;
      if ( v17 >= 0 )
      {
        v19 = (double)(unsigned __int16)v25;
        v20 = v19 > v27 || v19 == v27 && (double)WORD1(v25) >= v29[0];
        *(_BYTE *)a2 = v20;
        v7 = 0;
        goto LABEL_21;
      }
      v18 = 193LL;
    }
    else
    {
      v18 = 190LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)v17);
LABEL_21:
    v21 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)v5);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  return v7;
}
