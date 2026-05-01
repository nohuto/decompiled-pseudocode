/*
 * XREFs of ?VirtualDesktopsApi_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopVisibilityPolicy@@PEAUIVirtualDesktopWindowMoveManager@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x1803FC8DC
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1803E3550 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VVirtualDesktopsApi@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopsApi@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopCollection@@AEAPEAUIVirtualDesktopVisibilityPolicy@@AEAPEAUIVirtualDesktopWindowMoveManager@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x1803FC10C (--$MakeAndInitialize@VVirtualDesktopsApi@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtu.c)
 */

__int64 __fastcall VirtualDesktopsApi_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopCollection *a2,
        struct IVirtualDesktopVisibilityPolicy *a3,
        struct IVirtualDesktopWindowMoveManager *a4,
        struct IVirtualDesktopLock *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IVirtualDesktopManagerPrivate *v13; // [rsp+50h] [rbp+20h] BYREF
  struct IVirtualDesktopCollection *v14; // [rsp+58h] [rbp+28h] BYREF
  struct IVirtualDesktopVisibilityPolicy *v15; // [rsp+60h] [rbp+30h] BYREF
  struct IVirtualDesktopWindowMoveManager *v16; // [rsp+68h] [rbp+38h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v13 = a1;
  v7 = a7;
  a7 = 0LL;
  *v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopsApi,VirtualDesktopsApi,IVirtualDesktopManagerPrivate * &,IVirtualDesktopCollection * &,IVirtualDesktopVisibilityPolicy * &,IVirtualDesktopWindowMoveManager * &,IVirtualDesktopLock * &>(
         (VirtualDesktopsApi **)&a7,
         &v13,
         &v14,
         &v15,
         &v16,
         &a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 125LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapi.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_6;
  }
  v8 = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a7)(a7, &GUID_56b835c4_6024_4967_9907_c350814eca0e, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 126LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a7);
  return v9;
}
