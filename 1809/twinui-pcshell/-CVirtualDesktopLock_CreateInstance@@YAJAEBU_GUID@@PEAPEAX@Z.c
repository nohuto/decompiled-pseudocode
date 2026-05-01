/*
 * XREFs of ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18037F794
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18037D5B0 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B4F4 (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180089B50 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800E6520 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

__int64 __fastcall CVirtualDesktopLock_CreateInstance(const struct _GUID *a1, RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v3; // rax
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdx
  int v6; // ebx
  volatile int *v7; // rdx
  _DWORD *v8; // rcx
  RTL_SRWLOCK *v9; // rcx
  RTL_SRWLOCK *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v15; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v13);
  v13 = 0LL;
  v3 = (RTL_SRWLOCK *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v3;
  v4 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>((void **)&v14);
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
  HIDWORD(v3[1].Ptr) = 1;
  v3->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVirtualDesktopLock>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v4->Ptr = &CVirtualDesktopLock::`vftable';
  InitializeSRWLock(v4 + 2);
  v15 = v4;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
    (__int64)v4,
    v7);
  v13 = v4;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v15);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_6f0436fc_29bf_4c71_b476_87fbdcf1e75a, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v13;
    *a2 = v13;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v10->Ptr + 1))(v10);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v8, v8) )
  {
    v9 = v13;
    v6 = 0;
    *a2 = v13;
    (*((void (__fastcall **)(RTL_SRWLOCK *))v9->Ptr + 1))(v9);
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
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v6;
}
