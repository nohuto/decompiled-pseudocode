/*
 * XREFs of ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x1803443C0
 * Callers:
 *     ?ViewDismissed@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180344470 (-ViewDismissed@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 *     ?ViewShown@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180344490 (-ViewShown@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18004D77C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___ @ 0x180343F78 (Windows--Internal--ComTaskPool--QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180413C68 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

void __fastcall MultitaskingViewVisibilityService::UpdateVisibility(_DWORD *a1, int a2, int a3)
{
  int v6; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct IObjectArray *v10; // [rsp+20h] [rbp-10h] BYREF
  int v11; // [rsp+28h] [rbp-8h]
  bool v12; // [rsp+2Ch] [rbp-4h]
  struct IObjectArray *v13; // [rsp+50h] [rbp+20h] BYREF
  RTL_SRWLOCK *v14; // [rsp+68h] [rbp+38h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((__int64)(a1 + 14), (__int64)&v14);
  v13 = 0LL;
  a1[16] = a3 & a2 | a1[16] & ~a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( (int)CGITRegistrationList::GetCallbackArray((CGITRegistrationList *)(a1 + 18), &v13) >= 0 )
  {
    v6 = a1[16];
    v10 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v7 = a1[30];
    v11 = a3;
    v12 = (v6 & a3) != 0;
    Windows::Internal::ComTaskPool::QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___(v9, v8, v7, &v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
}
