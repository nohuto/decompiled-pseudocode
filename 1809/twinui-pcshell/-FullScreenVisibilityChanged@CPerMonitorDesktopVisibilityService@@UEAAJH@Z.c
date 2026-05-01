/*
 * XREFs of ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x18032EAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___ @ 0x18032E44C (Windows--Internal--ComTaskPool--QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1803B188C (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPerMonitorDesktopVisibilityService::FullScreenVisibilityChanged(
        CPerMonitorDesktopVisibilityService *this,
        int a2)
{
  int v4; // esi
  int CallbackArray; // eax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  IUnknown *punk; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v12[2]; // [rsp+28h] [rbp-28h] BYREF
  struct IObjectArray *v13; // [rsp+38h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp-10h]
  void *v15; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *ppvOut; // [rsp+80h] [rbp+30h] BYREF
  struct IObjectArray *v18; // [rsp+88h] [rbp+38h] BYREF

  v12[1] = (RTL_SRWLOCK *)-2LL;
  if ( *((_DWORD *)this + 24) )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v12, (RTL_SRWLOCK *)this + 14);
    v4 = a2 == 0;
    if ( v4 != *((_DWORD *)this + 26) )
    {
      *((_DWORD *)this + 26) = v4;
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      CallbackArray = CGITRegistrationList::GetCallbackArray(
                        (CPerMonitorDesktopVisibilityService *)((char *)this + 48),
                        &v18);
      v6 = CallbackArray;
      if ( CallbackArray < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x72,
          (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)CallbackArray);
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v12);
        return (unsigned int)v6;
      }
      ppvOut = 0LL;
      punk = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 14) + 32LL))(
        (char *)this - 112,
        &GUID_00000000_0000_0000_c000_000000000046,
        &punk);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      v6 = IUnknown_QueryService(
             punk,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
      if ( v6 < 0 )
      {
        v7 = 118LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_10;
      }
      v13 = v18;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
      v14 = v4;
      v15 = ppvOut;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___(
             v9,
             v8,
             *((_DWORD *)this + 25),
             (__int64)&v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      if ( v6 < 0 )
      {
        v7 = 138LL;
        goto LABEL_9;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v12);
  }
  return 0LL;
}
