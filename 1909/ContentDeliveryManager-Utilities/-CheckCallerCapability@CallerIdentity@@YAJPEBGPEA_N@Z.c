/*
 * XREFs of ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180054F24
 * Callers:
 *     ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x1800104B0 (-get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z.c)
 *     ?get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificationManager@2@@Z @ 0x180010A60 (-get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificat.c)
 *     ?get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2@@Z @ 0x180010C50 (-get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2.c)
 *     ?get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@Z @ 0x180011160 (-get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@.c)
 *     ?get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPhoneShellNamespaceHelper@2@@Z @ 0x180011350 (-get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPho.c)
 *     ?get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMobilityExperienceSettings@2@@Z @ 0x180011540 (-get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMo.c)
 *     ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x180041168 (-GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA-AV-$.c)
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x1800557D0 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180055A10 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x180055CD0 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x180055F90 (-MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180004808 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x180004850 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x180042DF0 (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180054E50 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18005538C (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCallerCapability(CallerIdentity *this, unsigned __int16 *a2, bool *a3)
{
  __int64 v5; // rdx
  HANDLE v6; // rcx
  int CallingProcessHandle; // eax
  bool *v8; // r9
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE hObject; // [rsp+38h] [rbp+10h] BYREF

  *(_BYTE *)a2 = 0;
  Microsoft::WRL::AgileRef::AgileRef((Microsoft::WRL::AgileRef *)&hObject);
  v6 = hObject;
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    wil::details::resource_policy<void *,int (*)(void *),&int CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>::close_reset(hObject);
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(v6, v5, &hObject);
  v9 = 0;
  if ( CallingProcessHandle < 0 )
    v9 = CallingProcessHandle;
  if ( v9 >= 0 )
    v9 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)hObject, this, a2, v8);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)v9);
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hObject);
  return (unsigned int)v9;
}
