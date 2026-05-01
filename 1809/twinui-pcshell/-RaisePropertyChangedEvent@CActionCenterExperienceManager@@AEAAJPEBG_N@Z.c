/*
 * XREFs of ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18000FBF8
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18000E55C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?EventRaised@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x18000FB54 (-EventRaised@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXPEBG_N@Z @ 0x180010E38 (-StartActivity@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUI.c)
 *     ??1EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAA@XZ @ 0x1800110EC (--1EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@Q.c)
 *     ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180013C94 (--0-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180015858 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x180026320 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180027064 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18003EC80 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@QEAAXXZ @ 0x180149A20 (-NoOp_ApplicationNotRunning@EM_RaiseApplicationEventActivity@NotificationCenterTelemetry@Notific.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActionCenterExperienceManager::RaisePropertyChangedEvent(
        CActionCenterExperienceManager *this,
        const unsigned __int16 *a2,
        bool a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  HSTRING v7; // rdx
  int v8; // eax
  __int64 v9; // rax
  __int64 v11; // rdx
  int v12; // [rsp+28h] [rbp-E0h]
  struct Windows::Foundation::Collections::IPropertySet *v13; // [rsp+38h] [rbp-D0h]
  struct Windows::Foundation::Collections::IPropertySet *v14; // [rsp+40h] [rbp-C8h]
  HSTRING v15; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING v16; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+80h] [rbp-88h]
  _QWORD v20[40]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v17[1] = -2LL;
  v17[0] = L"Ready";
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    v20,
    "EM_RaiseApplicationEventActivity");
  v20[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::`vftable';
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::StartActivity(
    (NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v20,
    L"Ready",
    a3);
  if ( !*((_QWORD *)this + 18) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::NoOp_ApplicationNotRunning((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v20);
    goto LABEL_6;
  }
  v15 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v19,
         &v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x239,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v12);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    goto LABEL_7;
  }
  v16 = v15;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  v7 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v17) + 24);
  v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v16,
         v7);
  v6 = v8;
  if ( v8 < 0 )
  {
    v11 = 572LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    goto LABEL_12;
  }
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, off_1803C1418);
  v8 = ExperienceManagerUtils::RaiseReactivatedEvent(
         *((ExperienceManagerUtils **)this + 18),
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 62),
         *((_QWORD *)this + 16),
         *((HSTRING *)this + 17),
         *(HSTRING *)(v9 + 24),
         v15,
         v13,
         v14);
  v6 = v8;
  if ( v8 < 0 )
  {
    v11 = 573LL;
    goto LABEL_11;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::EventRaised((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
LABEL_6:
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20, 0LL);
  v6 = 0;
LABEL_7:
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity::~EM_RaiseApplicationEventActivity((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_RaiseApplicationEventActivity *)v20);
  return v6;
}
