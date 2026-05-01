/*
 * XREFs of ?CVirtualDesktopApplicationViewEventListener_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopForegroundPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18041DB4C
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180403B70 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EE60 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopApplicationViewEventListener@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopForegroundPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18041D9C8 (--$MakeAndInitialize@VCVirtualDesktopApplicationViewEventListener@@V1@AEAPEAUIVirtualDesktopMana.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ @ 0x18041DC74 (-InternalRelease@-$ComPtr@VCVirtualDesktopApplicationViewEventListener@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CVirtualDesktopApplicationViewEventListener_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopSwitchAnimator *a2,
        struct IVirtualDesktopForegroundPolicy *a3,
        struct IVirtualDesktopWindowMoveManager *a4,
        struct IVirtualDesktopPinnedAppsPrivate *a5,
        struct IVirtualDesktopLock *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // rdi
  int v9; // eax
  int CanCastTo; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  _DWORD *v14; // r9
  const struct _GUID *v15; // rdx
  void **v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v19; // [rsp+60h] [rbp+20h] BYREF
  struct IVirtualDesktopSwitchAnimator *v20; // [rsp+68h] [rbp+28h] BYREF
  struct IVirtualDesktopForegroundPolicy *v21; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktopWindowMoveManager *v22; // [rsp+78h] [rbp+38h] BYREF

  v22 = a4;
  v21 = a3;
  v20 = a2;
  v19 = a1;
  v8 = a8;
  a8 = 0LL;
  *v8 = 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopApplicationViewEventListener>::InternalRelease(&a8);
  v9 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopApplicationViewEventListener,CVirtualDesktopApplicationViewEventListener,IVirtualDesktopManagerPrivate * &,IVirtualDesktopSwitchAnimator * &,IVirtualDesktopForegroundPolicy * &,IVirtualDesktopWindowMoveManager * &,IVirtualDesktopPinnedAppsPrivate * &,IVirtualDesktopLock * &>(
         (CVirtualDesktopApplicationViewEventListener **)&a8,
         &v19,
         &v20,
         &v21,
         &v22,
         &a5,
         &a6);
  CanCastTo = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 135LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
      (const char *)v11);
    goto LABEL_14;
  }
  *v8 = 0LL;
  if ( InlineIsEqualGUID(&GUID_727f9e97_76ee_497b_a942_b6371328485c, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v16 = a8;
    *v8 = a8;
    (*((void (__fastcall **)(void **))*v16 + 1))(v16);
    CanCastTo = 0;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v13, v14) )
  {
    CanCastTo = 0;
    *v8 = a8;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(a8 + 1), v15, v8);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
    if ( CanCastTo < 0 )
    {
      v11 = (unsigned int)CanCastTo;
      v12 = 136LL;
      goto LABEL_13;
    }
  }
  (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
LABEL_14:
  Microsoft::WRL::ComPtr<CVirtualDesktopApplicationViewEventListener>::InternalRelease(&a8);
  return (unsigned int)CanCastTo;
}
