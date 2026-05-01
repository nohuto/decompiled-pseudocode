/*
 * XREFs of ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801921B4
 * Callers:
 *     ??_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x1801922A0 (--_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x18041063C (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180412AF0 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 */

void __fastcall CPeopleBarJumpViewExperienceManager::~CPeopleBarJumpViewExperienceManager(
        CPeopleBarJumpViewExperienceManager *this)
{
  __int64 v2; // rcx

  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CPeopleBarJumpViewExperienceManager *)((char *)this + 384));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CPeopleBarJumpViewExperienceManager *)((char *)this + 352));
  WindowsDeleteString(*((HSTRING *)this + 43));
  *((_QWORD *)this + 43) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 37));
  *((_QWORD *)this + 37) = 0LL;
  v2 = *((_QWORD *)this + 34);
  if ( v2 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 31);
  CSingleViewShellExperience::~CSingleViewShellExperience((CPeopleBarJumpViewExperienceManager *)((char *)this + 56));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>((__int64)this);
}
