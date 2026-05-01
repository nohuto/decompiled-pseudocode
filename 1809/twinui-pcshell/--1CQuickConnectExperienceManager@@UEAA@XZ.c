/*
 * XREFs of ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x18017144C
 * Callers:
 *     ??_ECQuickConnectExperienceManager@@UEAAPEAXI@Z @ 0x180171AB0 (--_ECQuickConnectExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1803AE3BC (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

void __fastcall CQuickConnectExperienceManager::~CQuickConnectExperienceManager(CQuickConnectExperienceManager *this)
{
  __int64 v2; // rcx
  volatile int *v3; // rdx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
  WindowsDeleteString(*((HSTRING *)this + 45));
  *((_QWORD *)this + 45) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 38);
  v2 = *((_QWORD *)this + 33);
  if ( v2 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((CQuickConnectExperienceManager *)((char *)this + 72));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>(
    (__int64)this,
    v3);
}
