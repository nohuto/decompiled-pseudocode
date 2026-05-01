/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopAnimationSyncNotificationInstance@@QEAAJPEAUIVirtualDesktop@@0PEAUIObjectArray@@K@Z @ 0x18038B900
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@AEAPEAU3@PEAUIObjectArray@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIVirtualDesktopAnimationNotificationInstance@@AEAPEAUIVirtualDesktop@@1$$QEAPEAUIObjectArray@@AEAK@Z @ 0x18038B1A0 (--$MakeAndInitialize@VVirtualDesktopAnimationSyncNotificationInstance@@UIVirtualDesktopAnimation.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800E7DF8 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ??$CreateRefCountedObj@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@@WRL@Microsoft@@XZ @ 0x18038B118 (--$CreateRefCountedObj@UMarshalledData@VirtualDesktopAnimationSyncNotificationInstance@@@@YA-AV-.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c32596c6b85fe1861808fcf4903bc1b8__&___ptr64_ @ 0x18038B2A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_c32596c6b85fe1861808fcf4903bc1b8__-___ptr64_.c)
 */

__int64 __fastcall VirtualDesktopAnimationSyncNotificationInstance::RuntimeClassInitialize(
        VirtualDesktopAnimationSyncNotificationInstance *this,
        struct IVirtualDesktop *a2,
        struct IVirtualDesktop *a3,
        struct IObjectArray *a4,
        unsigned int a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // edi
  RTL_SRWLOCK *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  char v18; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  CreateRefCountedObj<VirtualDesktopAnimationSyncNotificationInstance::MarshalledData>(&v20);
  v9 = *((_QWORD *)this + 2);
  v10 = v20;
  if ( v9 != v20 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    v11 = *((_QWORD *)this + 2);
    v9 = v10;
    *((_QWORD *)this + 2) = v10;
    if ( v11 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v9 = *((_QWORD *)this + 2);
    }
  }
  if ( !v9 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_14;
  }
  v13 = (RTL_SRWLOCK *)(v10 + 32);
  AcquireSRWLockExclusive((PSRWLOCK)(v10 + 32));
  if ( (char *)this + 24 != &v18 )
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      (RTL_SRWLOCK **)this + 3,
      (RTL_SRWLOCK *)(v10 + 32));
    v13 = 0LL;
  }
  if ( v13 )
    ReleaseSRWLockExclusive(v13);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 8), (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 16), (__int64)a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v10 + 24), (__int64)a4);
  v20 = v10;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
  v16 = Windows::Internal::ComTaskPool::QueueTask__lambda_c32596c6b85fe1861808fcf4903bc1b8______ptr64_(
          v15,
          v14,
          a5,
          &v20);
  v12 = v16;
  if ( v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopanimationsyncnotifications.cpp",
      (const char *)(unsigned int)v16);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_14:
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v12;
}
