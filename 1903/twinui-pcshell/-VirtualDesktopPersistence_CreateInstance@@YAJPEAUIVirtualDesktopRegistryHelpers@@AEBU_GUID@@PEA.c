/*
 * XREFs of ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E8EFC
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1803E3550 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008C940 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotification@@@Z @ 0x1801418E8 (--4-$ComPtr@UIVirtualDesktopNotification@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopNotific.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ @ 0x1803E8450 (-InternalRelease@-$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall VirtualDesktopPersistence_CreateInstance(
        struct IVirtualDesktopRegistryHelpers *a1,
        const struct _GUID *a2,
        void **a3)
{
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  int v8; // ebx
  _DWORD *v9; // rcx
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  volatile signed __int32 *v14; // [rsp+48h] [rbp+28h] BYREF
  volatile signed __int32 *v15; // [rsp+50h] [rbp+30h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp+38h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease(&v14);
  v14 = 0LL;
  v5 = (volatile signed __int32 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v5;
  v6 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v15);
    v7 = 161LL;
    v8 = -2147024882;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_13;
  }
  *((_DWORD *)v5 + 3) = 1;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopPersistence>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v16 = v6;
  *(_QWORD *)v6 = &VirtualDesktopPersistence::`vftable';
  *((_QWORD *)v6 + 2) = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopNotification>::operator=((__int64 *)v6 + 2, (__int64)a1);
  _InterlockedIncrement(v6 + 3);
  v14 = v15;
  Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease(&v16);
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_8b7b392d_3980_4b4d_a71a_1982b2ef2162, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v14;
    *a3 = (void *)v14;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    v8 = 0;
  }
  else if ( InlineIsEqualGUID(v9, v9) )
  {
    v10 = v14;
    v8 = 0;
    *a3 = (void *)v14;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v8 = -2147467262;
  }
  if ( v8 < 0 )
  {
    v7 = 162LL;
    goto LABEL_12;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease(&v14);
  return (unsigned int)v8;
}
