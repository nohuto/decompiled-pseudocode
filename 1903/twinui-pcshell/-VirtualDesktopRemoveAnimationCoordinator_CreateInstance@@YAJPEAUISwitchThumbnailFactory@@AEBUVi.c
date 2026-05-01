/*
 * XREFs of ?VirtualDesktopRemoveAnimationCoordinator_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@AEBUVirtualDesktopMetrics@@HAEBU_GUID@@PEAPEAX@Z @ 0x180385F50
 * Callers:
 *     ?ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x180382070 (-ItemRemoved@CVirtualDesktopContainerElement@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableIt.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ @ 0x18037B85C (-InternalRelease@-$ComPtr@VSwitchItemCloseAnimationCoordinator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopRemoveAnimationCoordinator@@AEBUVirtualDesktopMetrics@@AEAHAEAPEAUISwitchThumbnailFactory@@@Z @ 0x180385A0C (--$MakeAndInitialize@VVirtualDesktopRemoveAnimationCoordinator@@V1@AEBUVirtualDesktopMetrics@@AE.c)
 */

__int64 __fastcall VirtualDesktopRemoveAnimationCoordinator_CreateInstance(
        struct ISwitchThumbnailFactory *a1,
        const struct VirtualDesktopMetrics *a2,
        int a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v5; // rdi
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  VirtualDesktopRemoveAnimationCoordinator *v12; // rcx
  VirtualDesktopRemoveAnimationCoordinator *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISwitchThumbnailFactory *v16; // [rsp+30h] [rbp+8h] BYREF
  int v17; // [rsp+40h] [rbp+18h] BYREF
  VirtualDesktopRemoveAnimationCoordinator *v18; // [rsp+48h] [rbp+20h] BYREF

  v17 = a3;
  v16 = a1;
  v5 = a5;
  v18 = 0LL;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v18);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopRemoveAnimationCoordinator,VirtualDesktopRemoveAnimationCoordinator,VirtualDesktopMetrics const &,int &,ISwitchThumbnailFactory * &>(
         &v18,
         a2,
         &v17,
         &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 123LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopremoveanimationcoordinator.cpp",
      (const char *)v9);
    goto LABEL_15;
  }
  *v5 = 0LL;
  if ( InlineIsEqualGUID(&GUID_ea7f7ba6_4c6a_4191_9c06_24520bc6be9e, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = v18;
    *v5 = v18;
    (*(void (__fastcall **)(VirtualDesktopRemoveAnimationCoordinator *))(*(_QWORD *)v13 + 8LL))(v13);
    v8 = 0;
    goto LABEL_15;
  }
  if ( InlineIsEqualGUID(v11, v11) )
  {
    v12 = v18;
    v8 = 0;
    *v5 = v18;
  }
  else
  {
    v8 = -2147467262;
    v12 = 0LL;
  }
  if ( v8 == -2147467262 )
    v8 = -2147467262;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 124LL;
    goto LABEL_14;
  }
  (*(void (__fastcall **)(VirtualDesktopRemoveAnimationCoordinator *, __int64))(*(_QWORD *)v12 + 8LL))(
    v12,
    2147500034LL);
LABEL_15:
  Microsoft::WRL::ComPtr<SwitchItemCloseAnimationCoordinator>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v8;
}
