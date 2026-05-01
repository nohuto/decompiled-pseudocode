/*
 * XREFs of ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18042FC7C
 * Callers:
 *     ??_EShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAPEAXI@Z @ 0x180092E30 (--_EShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAPEAXI@Z.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180097080 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x180194068 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x180198944 (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x18019C774 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 *     ??_EImeNotificationExperienceManager@@UEAAPEAXI@Z @ 0x1801A13C0 (--_EImeNotificationExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x1801A2280 (--_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x1801A3DC0 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x1801AD7BC (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801B12A4 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x1801B2FA8 (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$12 @ 0x1801B5B85 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$12.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$12_0 @ 0x1801B5EA9 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$12_0.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x1801B6008 (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x1801BA034 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x1801BF4BC (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1801C610C (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x1801CAEF8 (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ??1CInsightsExperienceManager@@EEAA@XZ @ 0x1801D6AC4 (--1CInsightsExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180012FEC (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18011FFC0 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 */

void __fastcall CSingleViewShellExperience::~CSingleViewShellExperience(CSingleViewShellExperience *this)
{
  __int64 *v2; // rdi
  struct _TP_TIMER *v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v2 = (__int64 *)((char *)this + 104);
  if ( *((_QWORD *)this + 14) )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 56LL))(*v2, *((_QWORD *)this + 14));
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  if ( *((_QWORD *)this + 22) )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 56LL))(*v2, *((_QWORD *)this + 22));
  WindowsDeleteString(*((HSTRING *)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 18);
  if ( v3 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 12);
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v4 )
    (**v4)(v4, 1LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
