/*
 * XREFs of ?VirtualDesktopAddAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@HAEBU_GUID@@PEAPEAX@Z @ 0x180385914
 * Callers:
 *     ?ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x180381C80 (-ItemAdded@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x18037B85C (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopAddAnimationCoordinator@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x180385278 (--$MakeAndInitialize@VVirtualDesktopAddAnimationCoordinator@@V1@AEAHAEAPEAUISwitchThumbnailFacto.c)
 */

__int64 __fastcall VirtualDesktopAddAnimationCoordinator_CreateInstance(
        struct ISwitchThumbnailFactory *a1,
        int a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISwitchThumbnailFactory *v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h] BYREF
  void *v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = a2;
  v14 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v16);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAddAnimationCoordinator,VirtualDesktopAddAnimationCoordinator,int &,ISwitchThumbnailFactory * &>(
         (__int64 *)&v16,
         &v15,
         &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 149LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopaddanimationcoordinator.cpp",
      (const char *)v7);
    goto LABEL_15;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_ea7f7ba6_4c6a_4191_9c06_24520bc6be9e, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v16;
    *a4 = v16;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 8LL))(v11);
    v6 = 0;
    goto LABEL_15;
  }
  if ( InlineIsEqualGUID(v9, v9) )
  {
    v10 = v16;
    v6 = 0;
    *a4 = v16;
  }
  else
  {
    v6 = -2147467262;
    v10 = 0LL;
  }
  if ( v6 == -2147467262 )
    v6 = -2147467262;
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 150LL;
    goto LABEL_14;
  }
  (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 2147500034LL);
LABEL_15:
  Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v6;
}
