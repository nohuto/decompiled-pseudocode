/*
 * XREFs of ?_MoveViewToDesktopAfterDelayIfSlate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJ_N@Z @ 0x180234F44
 * Callers:
 *     ?RaisePresentationNotReady@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x180231890 (-RaisePresentationNotReady@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ.c)
 *     ?TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x1802341B0 (-TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180053BE0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6937d4ae17bb244dbfbdfe30bf95aa3c___ @ 0x1800A673C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_6937d4ae17bb244dbfbdfe30bf95aa3c___.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18011E570 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z @ 0x180236750 (-get_FrameworkViewType@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAH@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_MoveViewToDesktopAfterDelayIfSlate(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = 6;
  if ( !IsHolographicWin32SlatesFeatureEnabled()
    || (int)Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_FrameworkViewType(this, &v11) < 0
    || v11 )
  {
    return 0LL;
  }
  AcquireSRWLockShared((PSRWLOCK)this + 26);
  v8 = *((_QWORD *)this + 53);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
  v9 = a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 60);
  v6 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_6937d4ae17bb244dbfbdfe30bf95aa3c___(
         v5,
         v4,
         (__int64)this + 480,
         &v8);
  Microsoft::WRL::WeakRef::~WeakRef(&v8);
  if ( v6 >= 0 )
  {
    if ( this != (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)-208LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 26);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41E,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v6);
  if ( this != (Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *)-208LL )
    ReleaseSRWLockShared((PSRWLOCK)this + 26);
  return (unsigned int)v6;
}
