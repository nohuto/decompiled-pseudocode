/*
 * XREFs of ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180040A6C
 * Callers:
 *     _lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_::operator() @ 0x18003FB88 (_lambda_2c31ea12bccf7d61b4ea1b66f1c008a8_--operator().c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180003624 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800131A4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024328 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x180026898 (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXXZ @ 0x18003DA40 (-StartActivity@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Backgro.c)
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x18003DB5C (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18003E010 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAA.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x18003E43C (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 *     ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180040E5C (-RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagem.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180041360 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // r12
  RTL_SRWLOCK *v3; // rdi
  int v4; // r13d
  const unsigned __int16 *v5; // rdx
  _QWORD *Ptr; // r15
  _QWORD *i; // rsi
  CreativeFramework::SubscribedContentStore **v8; // rbx
  struct _FILETIME **v9; // r14
  CreativeFramework::SubscribedContentStore *v10; // rcx
  unsigned __int64 SubscriptionLastUpdated; // rax
  int v12; // eax
  const unsigned __int16 *v13; // r9
  wil::details::in1diag3 *v14; // rcx
  char *v15; // rdi
  int SettingValue; // ebx
  struct _FILETIME *v17; // r14
  void **v18; // rdi
  void **v19; // r14
  void *v20; // rbx
  LPVOID v21; // rcx
  int v22; // eax
  LPVOID v23; // rcx
  unsigned int *v24; // [rsp+30h] [rbp-D8h]
  bool v25; // [rsp+48h] [rbp-C0h]
  LPVOID v26; // [rsp+50h] [rbp-B8h] BYREF
  bool v27[8]; // [rsp+58h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v28; // [rsp+60h] [rbp-A8h]
  RTL_SRWLOCK *v29; // [rsp+68h] [rbp-A0h]
  LPVOID pv[7]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v31[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v32; // [rsp+C8h] [rbp-40h]
  int *v33; // [rsp+D0h] [rbp-38h]
  int *v34; // [rsp+D8h] [rbp-30h]
  int v35; // [rsp+E0h] [rbp-28h] BYREF
  char v36; // [rsp+E4h] [rbp-24h]
  int v37; // [rsp+108h] [rbp+0h] BYREF
  const char *v38; // [rsp+110h] [rbp+8h]
  __int64 v39; // [rsp+118h] [rbp+10h]
  char v40; // [rsp+120h] [rbp+18h]
  __int64 v41; // [rsp+128h] [rbp+20h]
  char v42[144]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v43; // [rsp+1C0h] [rbp+B8h]
  __int64 v44; // [rsp+1C8h] [rbp+C0h]
  __int64 v45; // [rsp+1D0h] [rbp+C8h]
  __int64 v46; // [rsp+1D8h] [rbp+D0h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  pv[3] = (LPVOID)-2LL;
  v31[1] = 0LL;
  v31[2] = v31;
  v31[3] = 0LL;
  v32 = 0;
  v33 = &v37;
  v34 = &v35;
  v35 = 0;
  v36 = 0;
  v40 = 0;
  v37 = 0;
  v38 = "SubscriptionManagerContentUpdatedActivity";
  v39 = 0LL;
  v41 = 1LL;
  v43 = 0LL;
  memset_0(v42, 0, sizeof(v42));
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v31[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::StartActivity((ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v31);
  v2 = this + 10;
  v29 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  v28 = this + 10;
  ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)this);
  if ( this != (RTL_SRWLOCK *)-80LL )
    ReleaseSRWLockExclusive(this + 10);
  v3 = 0LL;
  v4 = 0;
  AcquireSRWLockShared(this + 10);
  pv[4] = &this[10];
  Ptr = this[11].Ptr;
  for ( i = (_QWORD *)*Ptr; i != Ptr; i = (_QWORD *)*i )
  {
    v8 = (CreativeFramework::SubscribedContentStore **)(i + 2);
    v9 = (struct _FILETIME **)(i + 6);
    v3 = (RTL_SRWLOCK *)((char *)v3 + ((__int64)(*(_QWORD *)(i[6] + 16LL) - *(_QWORD *)(i[6] + 8LL)) >> 3));
    v28 = v3;
    if ( i[5] < 8uLL )
      v10 = (CreativeFramework::SubscribedContentStore *)(i + 2);
    else
      v10 = *v8;
    SubscriptionLastUpdated = (unsigned __int64)CreativeFramework::SubscribedContentStore::GetSubscriptionLastUpdated(
                                                  v10,
                                                  v5);
    v5 = (const unsigned __int16 *)((*v9)[4].dwLowDateTime + ((unsigned __int64)(*v9)[4].dwHighDateTime << 32));
    if ( (unsigned int)SubscriptionLastUpdated + (HIDWORD(SubscriptionLastUpdated) << 32) > (unsigned __int64)v5 )
    {
      (*v9)[4] = (struct _FILETIME)SubscriptionLastUpdated;
      if ( i[5] >= 8uLL )
        v8 = (CreativeFramework::SubscribedContentStore **)*v8;
      v26 = 0LL;
      memset(pv, 0, 24);
      v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
              (__int64)pv,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
              v8);
      v14 = retaddr;
      if ( v12 < 0 )
        goto LABEL_38;
      v15 = (char *)pv[0];
      v26 = pv[0];
      v25 = 0;
      SettingValue = CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
                       (CreativeFramework::ContentDeliveryManagerSettings *)0xFFFFFFFF80000001LL,
                       (const WCHAR *)pv[0],
                       L"UpdateDrivenByExpiration",
                       v13,
                       v27,
                       v24);
      if ( SettingValue >= 0 )
      {
        v25 = *(_DWORD *)v27 != 0;
        SettingValue = 0;
      }
      else
      {
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x12B,
          (__int64)"internal\\onecoreuapshell\\inc\\contentdeliverymanagersettings.h",
          (const char *)(unsigned int)SettingValue,
          (__int64)"RegKey: %ws %ws",
          v15);
      }
      if ( SettingValue < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x1BB,
          (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstore.h",
          (const char *)(unsigned int)SettingValue);
LABEL_38:
        wil::details::in1diag3::Throw_Hr(
          v14,
          (void *)0x36,
          (__int64)"internal\\onecoreuapshell\\inc\\subscribedcontentstoreshared.h",
          (const char *)(unsigned int)v12);
        JUMPOUT(0x180040E52LL);
      }
      if ( v15 )
        CoTaskMemFree(v15);
      v17 = *v9;
      v18 = (void **)v17[1];
      v19 = (void **)v17[2];
      if ( v18 != v19 )
      {
        while ( 1 )
        {
          v20 = *v18;
          pv[5] = v20;
          if ( v20 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 8LL))(v20);
          v21 = 0LL;
          v26 = 0LL;
          if ( !v20 )
            goto LABEL_23;
          if ( (*(int (__fastcall **)(void *, GUID *, LPVOID *))(*(_QWORD *)v20 + 24LL))(
                 v20,
                 &GUID_abd0aea7_14e7_4d83_80d4_ee8a293e8af9,
                 &v26) >= 0 )
            break;
LABEL_26:
          v23 = v26;
          if ( v26 )
          {
            v26 = 0LL;
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v23 + 16LL))(v23);
          }
          if ( v20 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
          if ( ++v18 == v19 )
          {
            v2 = v29;
            goto LABEL_32;
          }
        }
        v21 = v26;
LABEL_23:
        LOBYTE(v5) = v25;
        v22 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *))(*(_QWORD *)v21 + 48LL))(v21, v5);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC6,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\subscriptionmanager.cpp",
            (const char *)(unsigned int)v22);
        ++v4;
        goto LABEL_26;
      }
LABEL_32:
      v3 = v28;
    }
  }
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity *)v31,
    (int)v3,
    v4);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  v31[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::SubscriptionManagerContentUpdatedActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v31);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v31);
}
