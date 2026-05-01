/*
 * XREFs of _lambda_0c37c1600930a15155a5eb9c2ae4abb7_::operator() @ 0x180409B60
 * Callers:
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x18040E190 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18000F610 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000F654 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180018340 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801C4CE0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801CDE08 (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ??1Package_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ @ 0x180409AF8 (--1Package_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ.c)
 *     ?GetAreMrtResourcesRedirected@Package_NoThrow@Entity@Cache@StateRepository@@QEBA_NXZ @ 0x18040AEA0 (-GetAreMrtResourcesRedirected@Package_NoThrow@Entity@Cache@StateRepository@@QEBA_NXZ.c)
 *     ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGW4CacheFlags@1234@AEAV1234@AEA_N@Z @ 0x18040B1DC (-GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager__ea_18040B1DC.c)
 *     ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18040E4B0 (-TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA-AV-$unique_any_t@V-$unique_sto.c)
 */

__int64 __fastcall lambda_0c37c1600930a15155a5eb9c2ae4abb7_::operator()(HSTRING *a1, const WCHAR *a2, PWSTR *a3)
{
  HSTRING v5; // rcx
  const WCHAR *v7; // rax
  HRESULT v8; // eax
  int v9; // ebx
  HSTRING v11; // rcx
  PCWSTR StringRawBuffer; // rax
  __int64 v13; // rcx
  HSTRING v14; // rcx
  PCWSTR v15; // rax
  __int64 v16; // r8
  HRESULT v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdx
  HRESULT v20; // eax
  __int64 v21; // rdx
  const WCHAR *v22; // rbx
  const WCHAR *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // [rsp+38h] [rbp-31h] BYREF
  char v27; // [rsp+40h] [rbp-29h]
  __int128 v28; // [rsp+50h] [rbp-19h] BYREF
  __int64 v29; // [rsp+60h] [rbp-9h]
  __int64 v30; // [rsp+68h] [rbp-1h]
  int v31; // [rsp+70h] [rbp+7h]
  __int64 v32; // [rsp+78h] [rbp+Fh]
  __int64 v33; // [rsp+80h] [rbp+17h]
  __int64 v34; // [rsp+88h] [rbp+1Fh]
  __int128 v35; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  PWSTR ppszPathOut; // [rsp+D0h] [rbp+67h] BYREF
  PWSTR pszPath; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v39; // [rsp+E8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v5 = *a1;
  if ( !v5 )
  {
    v11 = a1[1];
    if ( !v11 )
      return 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(v11, 0LL);
    ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(&pszPath, StringRawBuffer);
    if ( pszPath )
    {
      v39 = 0LL;
      v26 = 0LL;
      v27 = 1;
      v9 = SRCacheManager_Open(0LL, &v26);
      if ( v27 )
      {
        v13 = v39;
        v39 = v26;
        if ( v13 )
          SRCacheManager_Close();
      }
      if ( v9 >= 0 )
        v9 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9E,
          (__int64)"onecore\\internal\\base\\inc\\appmodel\\staterepository\\cache\\srcache-manager.hpp",
          (const char *)(unsigned int)v9);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x114,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
          (const char *)(unsigned int)v9);
LABEL_32:
        v24 = v39;
        v39 = 0LL;
        if ( v24 )
          SRCacheManager_Close();
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
        return (unsigned int)v9;
      }
      v14 = a1[1];
      v28 = 0LL;
      v35 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      LOBYTE(ppszPathOut) = 0;
      v15 = WindowsGetStringRawBuffer(v14, 0LL);
      v17 = StateRepository::Cache::Entity::Package_NoThrow::GetByPackageFullName(&v39, v15, v16, &v28, &ppszPathOut);
      v9 = v17;
      if ( v17 < 0 )
      {
        v18 = 286LL;
LABEL_30:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
          (const char *)(unsigned int)v17);
        goto LABEL_31;
      }
      if ( StateRepository::Cache::Entity::Package_NoThrow::GetAreMrtResourcesRedirected((StateRepository::Cache::Entity::Package_NoThrow *)&v28) )
      {
        v19 = -1LL;
        do
          ++v19;
        while ( pszPath[v19] );
        v17 = PathCchRemoveFileSpec(pszPath, v19 + 1);
        v9 = v17;
        if ( v17 < 0 )
        {
          v18 = 293LL;
          goto LABEL_30;
        }
        Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&ppszPathOut);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&ppszPathOut,
          0LL);
        v20 = PathAllocCombine(pszPath, L"Resources", 1u, &ppszPathOut);
        v9 = v20;
        if ( v20 < 0 )
        {
          v21 = 295LL;
LABEL_26:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
            (const char *)(unsigned int)v20);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&ppszPathOut);
LABEL_31:
          StateRepository::Cache::Entity::Package_NoThrow::~Package_NoThrow((StateRepository::Cache::Entity::Package_NoThrow *)&v28);
          goto LABEL_32;
        }
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&pszPath,
          0LL);
        v22 = ppszPathOut;
        v23 = WindowsGetStringRawBuffer(a1[1], 0LL);
        v20 = PathAllocCombine(v22, v23, 1u, &pszPath);
        v9 = v20;
        if ( v20 < 0 )
        {
          v21 = 296LL;
          goto LABEL_26;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&ppszPathOut);
      }
      v17 = PathAllocCombine(pszPath, a2, 1u, a3);
      v9 = v17;
      if ( v17 < 0 )
      {
        v18 = 299LL;
        goto LABEL_30;
      }
      StateRepository::Cache::Entity::Package_NoThrow::~Package_NoThrow((StateRepository::Cache::Entity::Package_NoThrow *)&v28);
      v25 = v39;
      v39 = 0LL;
      if ( v25 )
        SRCacheManager_Close();
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&pszPath);
    return 0LL;
  }
  v7 = WindowsGetStringRawBuffer(v5, 0LL);
  v8 = PathAllocCombine(v7, a2, 1u, a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x108,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.common.h",
      (const char *)(unsigned int)v8);
    return (unsigned int)v9;
  }
  return 0LL;
}
