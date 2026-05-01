/*
 * XREFs of ?CVirtualDesktopManager_CreateInstance@@YAJPEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopNotification@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopPersistence@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180385954
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18037D5B0 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ @ 0x1801F7D84 (-InternalRelease@-$ComPtr@VTitleBarController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopManager@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopNotification@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18038510C (--$MakeAndInitialize@VCVirtualDesktopManager@@V1@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtu.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@U?$ChainInterfaces@UIVirtualDesktopManagerPrivate@@UIVirtualDesktopManagerInternal@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWeakReferenceSource@@UISuspendableVirtualDesktopManager@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180385AF0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspect_ea_180385AF0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager_CreateInstance(
        struct IVirtualDesktopCollection *a1,
        struct IVirtualDesktopVisibilityPolicy *a2,
        struct IVirtualDesktopNotification *a3,
        struct IVirtualDesktopForegroundPolicy *a4,
        struct IVirtualDesktopPersistence *a5,
        struct IVirtualDesktopGroupedViewsPolicy *a6,
        struct IVirtualDesktopLock *a7,
        const struct _GUID *a8,
        void **a9)
{
  void **v9; // rdi
  int v10; // eax
  int CanCastTo; // ebx
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  void **v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IVirtualDesktopCollection *v19; // [rsp+70h] [rbp+20h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v20; // [rsp+78h] [rbp+28h] BYREF
  struct IVirtualDesktopNotification *v21; // [rsp+80h] [rbp+30h] BYREF
  struct IVirtualDesktopForegroundPolicy *v22; // [rsp+88h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v9 = a9;
  *a9 = 0LL;
  a9 = 0LL;
  Microsoft::WRL::ComPtr<TitleBarController>::InternalRelease((__int64 *)&a9);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopManager,CVirtualDesktopManager,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopNotification * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopPersistence * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
          (volatile signed __int64 **)&a9,
          &v19,
          &v20,
          &v21,
          &v22,
          &a5,
          &a6,
          &a7);
  CanCastTo = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v13 = 681LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)v12);
    goto LABEL_11;
  }
  *v9 = 0LL;
  if ( InlineIsEqualGUID(&GUID_b0be15a1_5751_488a_9673_448b5ef2d919, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v14, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v16 = a9;
    *v9 = a9;
    (*((void (__fastcall **)(void **))*v16 + 1))(v16);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::ChainInterfaces<IVirtualDesktopManagerPrivate,IVirtualDesktopManagerInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWeakReferenceSource,ISuspendableVirtualDesktopManager,Microsoft::WRL::FtmBase>::CanCastTo(
                  a9,
                  v15,
                  v9);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v9 + 8LL))(*v9);
  }
  if ( CanCastTo < 0 )
  {
    v12 = (unsigned int)CanCastTo;
    v13 = 682LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<TitleBarController>::InternalRelease((__int64 *)&a9);
  return (unsigned int)CanCastTo;
}
