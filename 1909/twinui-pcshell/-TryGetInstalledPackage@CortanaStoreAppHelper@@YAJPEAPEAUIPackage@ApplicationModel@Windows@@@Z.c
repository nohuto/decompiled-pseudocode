/*
 * XREFs of ?TryGetInstalledPackage@CortanaStoreAppHelper@@YAJPEAPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x1801EAA2C
 * Callers:
 *     _lambda_6beee81bb2061f57cf9eaca4a4fea397_::operator() @ 0x1801E4348 (_lambda_6beee81bb2061f57cf9eaca4a4fea397_--operator().c)
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaUndockingHelpers@@YA_NXZ @ 0x1801DC80C (-IsTestAppConfiguredAsReplacement@Testing@CortanaUndockingHelpers@@YA_NXZ.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801E075C (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CortanaStoreAppHelper::TryGetInstalledPackage(
        CortanaStoreAppHelper *this,
        struct Windows::ApplicationModel::IPackage **a2)
{
  int v3; // eax
  CortanaUndockingHelpers::Testing *v4; // rcx
  unsigned int v5; // ebx
  bool IsTestAppConfiguredAsReplacement; // al
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, _QWORD, PVOID, _QWORD **); // rdi
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, const WCHAR **); // rdi
  int v17; // eax
  const WCHAR *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _BYTE v22[8]; // [rsp+38h] [rbp-9h] BYREF
  const WCHAR *v23; // [rsp+40h] [rbp-1h] BYREF
  __int64 v24; // [rsp+48h] [rbp+7h] BYREF
  _QWORD *v25; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v26[2]; // [rsp+58h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+27h] BYREF
  __int64 v28; // [rsp+80h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v26[1] = -2LL;
  *(_QWORD *)this = 0LL;
  v26[0] = 0LL;
  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Management.Deployment.PackageManager",
    0x2Du,
    0x2Cu);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         v28,
         v26);
  v5 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_25;
  }
  v25 = 0LL;
  IsTestAppConfiguredAsReplacement = CortanaUndockingHelpers::Testing::IsTestAppConfiguredAsReplacement(v4);
  v7 = v26[0];
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, PVOID, _QWORD **))(*(_QWORD *)v26[0] + 160LL);
  if ( !IsTestAppConfiguredAsReplacement )
  {
    v23 = L"Microsoft.549981C3F5F10_8wekyb3d8bbwe";
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v23);
    v10 = v8(v7, 0LL, v12[1].Reserved.Reserved1, &v25);
    v5 = v10;
    if ( v10 < 0 )
    {
      v11 = 214LL;
      goto LABEL_8;
    }
LABEL_9:
    v24 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v25 + 48LL))(v25, &v24);
    v5 = v13;
    if ( v13 < 0 )
    {
      v14 = 218LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_21;
    }
    v22[0] = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v24 + 56LL))(v24, v22);
    v5 = v13;
    if ( v13 < 0 )
    {
      v14 = 221LL;
      goto LABEL_13;
    }
    if ( v22[0] )
    {
      v23 = 0LL;
      v15 = v24;
      v16 = *(__int64 (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)v24 + 48LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      v17 = v16(v15, &v23);
      v5 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE2,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
          (const char *)(unsigned int)v17);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        goto LABEL_21;
      }
      v18 = v23;
      if ( v23 )
      {
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v23 + 8LL))(v23);
        v18 = v23;
      }
      *(_QWORD *)this = v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    }
    v5 = 0;
LABEL_21:
    v19 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_23;
  }
  v23 = L"3242f7d9-db60-4380-a379-4205ea768bfc_zs4v8rx04ex0m";
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v23);
  v10 = v8(v7, 0LL, v9[1].Reserved.Reserved1, &v25);
  v5 = v10;
  if ( v10 >= 0 )
    goto LABEL_9;
  v11 = 210LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
    (const char *)(unsigned int)v10);
LABEL_23:
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v20 + 16LL))(v20, *v20);
  }
LABEL_25:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
  return v5;
}
