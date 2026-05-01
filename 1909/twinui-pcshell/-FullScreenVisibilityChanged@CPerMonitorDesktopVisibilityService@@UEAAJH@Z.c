/*
 * XREFs of ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x1803AE870
 * Callers:
 *     <none>
 * Callees:
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180045560 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18004FD90 (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E190 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___ @ 0x1803AE13C (Windows--Internal--ComTaskPool--QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1804332E8 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPerMonitorDesktopVisibilityService::FullScreenVisibilityChanged(
        CPerMonitorDesktopVisibilityService *this,
        int a2)
{
  int v4; // r14d
  int CallbackArray; // eax
  int v6; // ebx
  void (__fastcall *v7)(char *, GUID *, __int64); // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  IUnknown *punk; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v14[2]; // [rsp+28h] [rbp-28h] BYREF
  struct IObjectArray *v15; // [rsp+38h] [rbp-18h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  void *v17; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  void *ppvOut; // [rsp+90h] [rbp+40h] BYREF
  struct IObjectArray *v20; // [rsp+98h] [rbp+48h] BYREF

  v14[1] = (RTL_SRWLOCK *)-2LL;
  if ( *((_DWORD *)this + 24) )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v14, (RTL_SRWLOCK *)this + 14);
    v4 = a2 == 0;
    if ( v4 != *((_DWORD *)this + 26) )
    {
      *((_DWORD *)this + 26) = v4;
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      CallbackArray = CGITRegistrationList::GetCallbackArray(
                        (CPerMonitorDesktopVisibilityService *)((char *)this + 48),
                        &v20);
      v6 = CallbackArray;
      if ( CallbackArray < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x72,
          (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)CallbackArray);
LABEL_10:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v20);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v14);
        return (unsigned int)v6;
      }
      ppvOut = 0LL;
      punk = 0LL;
      v7 = *(void (__fastcall **)(char *, GUID *, __int64))(*((_QWORD *)this - 14) + 32LL);
      v8 = Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'((__int64)&punk);
      v7((char *)this - 112, &GUID_00000000_0000_0000_c000_000000000046, v8);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
      v6 = IUnknown_QueryService(
             punk,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      if ( v6 < 0 )
      {
        v9 = 118LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::WeakRef::~WeakRef((__int64 *)&ppvOut);
        goto LABEL_10;
      }
      v15 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v16 = v4;
      v17 = ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___(
             v11,
             v10,
             *((_DWORD *)this + 25),
             (__int64)&v15);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      if ( v6 < 0 )
      {
        v9 = 138LL;
        goto LABEL_9;
      }
      Microsoft::WRL::WeakRef::~WeakRef((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v20);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v14);
  }
  return 0LL;
}
