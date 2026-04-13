/*
 * XREFs of ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180005460
 * Callers:
 *     ?get_ContextualSuggestionsManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIContextualSuggestionsManager@2@@Z @ 0x1800100F0 (-get_ContextualSuggestionsManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUI.c)
 *     ?get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnailCacheHelper@2@@Z @ 0x1800102A0 (-get_ThumbnailCacheHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIThumbnai.c)
 *     ?get_FeatureManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIFeatureManager@2@@Z @ 0x180010830 (-get_FeatureManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIFeatureManager.c)
 *     ?get_IdentityManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIIdentityManager@2@@Z @ 0x1800109E0 (-get_IdentityManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIIdentityManag.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180003714 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x1800537CC (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1800538F8 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180053B20 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z @ 0x180053C9C (-IsProcessAppContainer@CallerIdentity@@YAJPEAXPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(
        CreativeFramework::LockScreenCategoryConfig *this,
        const unsigned __int16 *const *a2)
{
  __int64 v2; // rdx
  signed int CallingProcessHandle; // ebx
  bool *v4; // r8
  char *v5; // rcx
  int v7; // eax
  void **v8; // r8
  signed int LastError; // eax
  char *v10; // rcx
  const WCHAR **v11; // rbx
  const char *v12; // rsi
  __int64 v13; // rdx
  const WCHAR *v14; // r8
  const WCHAR *v15; // rcx
  unsigned __int16 **v16; // rdx
  void *v17; // rdi
  LPWSTR StringSid; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+48h] [rbp-28h]
  LPVOID pv; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  HANDLE hObject; // [rsp+A0h] [rbp+30h] BYREF
  int v26; // [rsp+A8h] [rbp+38h] BYREF
  PSID Sid; // [rsp+B0h] [rbp+40h] BYREF

  v26 = (int)a2;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  if ( CallingProcessHandle >= 0 )
    CallingProcessHandle = CallerIdentity::IsProcessAppContainer(hObject, &v26, v4);
  v5 = (char *)hObject;
  hObject = 0LL;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  if ( CallingProcessHandle >= 0 )
  {
    if ( !(_BYTE)v26 )
      return 0LL;
    v19 = -1LL;
    v20 = -1LL;
    StringSid = 0LL;
    hObject = 0LL;
    v7 = CallerIdentity::GetCallingProcessHandle(v5, v2, &hObject);
    CallingProcessHandle = 0;
    if ( v7 < 0 )
      CallingProcessHandle = v7;
    if ( CallingProcessHandle >= 0 )
    {
      StringSid = 0LL;
      CallingProcessHandle = CallerIdentity::GetPackageSidFromProcessHandle(hObject, &Sid, v8);
      if ( CallingProcessHandle >= 0 )
      {
        if ( ConvertSidToStringSidW(Sid, &StringSid) )
        {
          CallingProcessHandle = 0;
        }
        else
        {
          LastError = GetLastError();
          CallingProcessHandle = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            CallingProcessHandle = LastError;
          if ( CallingProcessHandle >= 0 )
            CallingProcessHandle = -2147467259;
        }
        LocalFree(Sid);
      }
    }
    v10 = (char *)hObject;
    hObject = 0LL;
    if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v10);
    if ( CallingProcessHandle >= 0 )
    {
      v11 = (const WCHAR **)&off_1800D3678;
      v12 = (const char *)&Src;
      do
      {
        LODWORD(v13) = v19;
        if ( v19 == -1 )
        {
          if ( StringSid )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( StringSid[v13] );
          }
          else
          {
            LODWORD(v13) = 0;
          }
        }
        v14 = &Src;
        if ( *v11 )
          v14 = *v11;
        v15 = &Src;
        if ( StringSid )
          v15 = StringSid;
        if ( CompareStringOrdinal(v15, v13, v14, -(*v11 != 0LL), 1) == 2 )
        {
          CallingProcessHandle = 0;
          goto LABEL_43;
        }
        ++v11;
      }
      while ( (__int64)v11 < (__int64)&ContentManagement::LaunchManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ILaunchManager>'} );
      pv = 0LL;
      v22 = -1LL;
      v23 = -1LL;
      CallerIdentity::GetCallingProcessPackageFullName((CallerIdentity *)&pv, v16);
      v17 = pv;
      if ( pv )
        v12 = (const char *)pv;
      CallingProcessHandle = -2147024891;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x83,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencategoryconfig.h",
        (const char *)0x80070005LL,
        (__int64)"%ls",
        v12);
      if ( v17 )
      {
        CoTaskMemFree(v17);
        pv = 0LL;
      }
      v22 = 0LL;
      v23 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x73,
        (__int64)"internal\\onecoreuapshell\\inc\\lockscreencategoryconfig.h",
        (const char *)(unsigned int)CallingProcessHandle);
    }
LABEL_43:
    if ( StringSid )
    {
      CoTaskMemFree(StringSid);
      StringSid = 0LL;
    }
    v19 = 0LL;
    v20 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (__int64)"internal\\onecoreuapshell\\inc\\lockscreencategoryconfig.h",
      (const char *)(unsigned int)CallingProcessHandle);
  }
  return (unsigned int)CallingProcessHandle;
}
