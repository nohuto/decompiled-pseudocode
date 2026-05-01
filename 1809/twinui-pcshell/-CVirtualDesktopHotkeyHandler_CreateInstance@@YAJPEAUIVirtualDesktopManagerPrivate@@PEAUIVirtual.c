/*
 * XREFs of ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18038C3A8
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18037D5B0 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1802C2EEC (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHotkeyHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopSwitchAnimator@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18038C220 (--$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopSwitchAnimator *a2,
        struct IVirtualDesktopLock *a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v6; // eax
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  volatile int *v11; // rcx
  volatile int *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v15; // [rsp+40h] [rbp+20h] BYREF
  struct IVirtualDesktopSwitchAnimator *v16; // [rsp+48h] [rbp+28h] BYREF
  struct IVirtualDesktopLock *v17; // [rsp+50h] [rbp+30h] BYREF
  volatile int *v18; // [rsp+58h] [rbp+38h] BYREF

  v17 = a3;
  v16 = a2;
  v15 = a1;
  v5 = a5;
  v18 = 0LL;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v18);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHotkeyHandler,CVirtualDesktopHotkeyHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopSwitchAnimator * &,IVirtualDesktopLock * &>(
         (__int64 *)&v18,
         (__int64 *)&v15,
         (__int64 *)&v16,
         (__int64 *)&v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 108LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)v8);
    goto LABEL_11;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_1a5fca39_f9fc_48e2_9a70_3cb48eb23175, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v12 = v18;
    *v5 = (void *)v18;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v12 + 8LL))(v12);
    v7 = 0;
  }
  else if ( InlineIsEqualGUID(v10, v10) )
  {
    v11 = v18;
    v7 = 0;
    *v5 = (void *)v18;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  else
  {
    v7 = -2147467262;
  }
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v9 = 109LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v18);
  return (unsigned int)v7;
}
