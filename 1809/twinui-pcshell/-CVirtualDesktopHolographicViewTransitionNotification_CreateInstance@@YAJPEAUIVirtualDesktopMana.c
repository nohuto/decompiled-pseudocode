/*
 * XREFs of ?CVirtualDesktopHolographicViewTransitionNotification_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x180398E88
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18037E5A0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800392D0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801A3FB8 (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopHolographicViewTransitionNotification@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHolographicViewTransitionNotification@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180398D04 (--$MakeAndInitialize@VCVirtualDesktopHolographicViewTransitionNotification@@V1@AEAPEAUIVirtualDe.c)
 */

__int64 __fastcall CVirtualDesktopHolographicViewTransitionNotification_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopLock *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  int CanCastTo; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  _DWORD *v10; // r9
  const struct _GUID *v11; // rdx
  volatile int *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopManagerPrivate *v15; // [rsp+30h] [rbp+8h] BYREF
  struct IVirtualDesktopLock *v16; // [rsp+38h] [rbp+10h] BYREF
  volatile int *v17; // [rsp+40h] [rbp+18h] BYREF

  v16 = a2;
  v15 = a1;
  *a4 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v17);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHolographicViewTransitionNotification,CVirtualDesktopHolographicViewTransitionNotification,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
         (__int64 *)&v17,
         (__int64 *)&v15,
         (__int64 *)&v16);
  CanCastTo = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 59LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopholographicviewtransitionnotification.cpp",
      (const char *)v7);
    goto LABEL_14;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_76bb2cfb_c246_41ec_b9c3_671e5347cf51, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v12 = v17;
    *a4 = (void *)v17;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v12 + 8LL))(v12);
    CanCastTo = 0;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v9, v10) )
  {
    CanCastTo = 0;
    *a4 = (void *)v17;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v17 + 2), v11, a4);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
    if ( CanCastTo < 0 )
    {
      v7 = (unsigned int)CanCastTo;
      v8 = 60LL;
      goto LABEL_13;
    }
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
LABEL_14:
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(&v17);
  return (unsigned int)CanCastTo;
}
