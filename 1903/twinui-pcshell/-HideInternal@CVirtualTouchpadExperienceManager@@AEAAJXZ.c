/*
 * XREFs of ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801A8AEC
 * Callers:
 *     ?Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ @ 0x1801A8A20 (-Hide@CVirtualTouchpadExperienceManager@@UEAAJXZ.c)
 *     ?OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x1801A9290 (-OnCommand@CVirtualTouchpadExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18002CE60 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180050428 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver@@@wil@@C.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_47c4ee998602912f584be58de1a81d16__&_ @ 0x1801A6A4C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_47c4ee998602912f584be58de1a81d16__-_.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x1801A72B8 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ?AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManagerAnimationHelper@@@Z @ 0x1801A78C4 (-AnimateFrame@CVirtualTouchpadExperienceManager@@AEAAJW4AnimateFrameType@1@QEAVCExperienceManage.c)
 *     ?Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1801A8A68 (-Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801A9CB8 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Stop@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801AA5E4 (-Stop@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_Tlg.c)
 *     ?TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA?AV12@XZ @ 0x1801AA9F4 (-TransferToCurrentThread@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA-AV1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::HideInternal(
        CVirtualTouchpadExperienceManager *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // si
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  CVirtualTouchpadExperienceManager *v14; // [rsp+48h] [rbp-C0h] BYREF
  CVirtualTouchpadExperienceManager *v15; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16[2]; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING v18; // [rsp+80h] [rbp-88h]
  _BYTE v19[320]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v16[1] = -2LL;
  v14 = this;
  v4 = 1;
  LOBYTE(v15) = 1;
  *((_DWORD *)this + 184) = 3;
  if ( *((_BYTE *)this + 300) )
  {
    *((_BYTE *)this + 300) = 0;
    CVirtualTouchpadExperienceManager::SaveFramePosition(this);
  }
  wil::Feature<__WilFeatureTraits_Feature_LowAnimationsOnBatterySaver>::ReportUsageToService((__int64)this, a2, a3);
  v5 = CVirtualTouchpadExperienceManager::AnimateFrame((__int64)this, 1, (__int64)this + 704);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x264,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 41) + 40LL))(*((_QWORD *)this + 41), 1LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 615LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_16;
  }
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SessionEnded", 0xDu, 0xCu);
  v6 = ExperienceManagerUtils::RaiseReactivatedEvent(
         *((ExperienceManagerUtils **)this + 11),
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 48),
         *((HSTRING *)this + 9),
         *((HSTRING *)this + 10),
         v18,
         0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 618LL;
    goto LABEL_9;
  }
  v16[0] = (__int64)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
  v14 = this;
  v15 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v12 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_47c4ee998602912f584be58de1a81d16____(
          v10,
          v9,
          v11,
          &v14);
  v7 = v12;
  if ( v12 >= 0 )
  {
    if ( **((_DWORD **)this + 51) == 1 )
    {
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::Hide((CVirtualTouchpadExperienceManager *)((char *)this + 360));
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TransferToCurrentThread((char *)this + 360, v19);
      wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v19,
        0LL);
      TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v19);
    }
    v4 = 0;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
LABEL_16:
  if ( v4 )
    *((_DWORD *)this + 184) = 0;
  return v7;
}
