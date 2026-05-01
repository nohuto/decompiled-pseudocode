/*
 * XREFs of ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1803F18AC
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1803E3550 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008C940 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1803B9EAC (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopAnimationSyncNotificationServicePrivate@@UIVirtualDesktopAnimationSyncNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopAnimationSyncNotificationServicePrivate@@UIVirtualDesktopAnimationSyncNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1803F0E98 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$_ea_1803F0E98.c)
 *     ??0VirtualDesktopAnimationSyncNotifications@@QEAA@XZ @ 0x1803F114C (--0VirtualDesktopAnimationSyncNotifications@@QEAA@XZ.c)
 */

__int64 __fastcall VirtualDesktopAnimationSyncNotifications_CreateInstance(int a1, const struct _GUID *a2, void **a3)
{
  void *v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r9
  VirtualDesktopAnimationSyncNotifications *v9; // rax
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  VirtualDesktopAnimationSyncNotifications *v13; // [rsp+38h] [rbp+10h] BYREF
  void *v14; // [rsp+40h] [rbp+18h] BYREF
  VirtualDesktopAnimationSyncNotifications *v15; // [rsp+48h] [rbp+20h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v13);
  v13 = 0LL;
  v5 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
    v6 = -2147024882;
    v7 = 149LL;
    v8 = 2147942414LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)v8);
    goto LABEL_6;
  }
  v9 = VirtualDesktopAnimationSyncNotifications::VirtualDesktopAnimationSyncNotifications((VirtualDesktopAnimationSyncNotifications *)v5);
  v15 = v9;
  *((_DWORD *)v9 + 22) = a1;
  _InterlockedIncrement((volatile signed __int32 *)v9 + 11);
  v13 = v9;
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v15);
  v10 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopAnimationSyncNotificationServicePrivate,IVirtualDesktopAnimationSyncNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>>(
          (__int64)v13,
          &GUID_5c757a3f_6157_41b3_a760_926c0b131916,
          a3);
  v6 = v10;
  if ( v10 < 0 )
  {
    v8 = (unsigned int)v10;
    v7 = 150LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((__int64 *)&v13);
  return v6;
}
