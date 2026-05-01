/*
 * XREFs of ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E57B8
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1803E3550 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008C940 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180378864 (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CVirtualDesktopLock_CreateInstance(const struct _GUID *a1, void **a2)
{
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rdx
  int v6; // ebx
  _DWORD *v7; // rcx
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  volatile signed __int32 *v12; // [rsp+40h] [rbp+20h] BYREF
  volatile signed __int32 *v13; // [rsp+48h] [rbp+28h] BYREF
  volatile signed __int32 *v14; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v12);
  v12 = 0LL;
  v3 = (volatile signed __int32 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v3;
  v4 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v13);
    v5 = 40LL;
    v6 = -2147024882;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoplock.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  *((_DWORD *)v3 + 3) = 1;
  *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopLock>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v4 = &CVirtualDesktopLock::`vftable';
  InitializeSRWLock((PSRWLOCK)v4 + 2);
  v14 = v4;
  _InterlockedIncrement(v4 + 3);
  v12 = v13;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v14);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_6f0436fc_29bf_4c71_b476_87fbdcf1e75a, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v9 = v12;
    *a2 = (void *)v12;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v7, v7) )
  {
    v8 = v12;
    v6 = 0;
    *a2 = (void *)v12;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v5 = 41LL;
    goto LABEL_12;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease(&v12);
  return (unsigned int)v6;
}
