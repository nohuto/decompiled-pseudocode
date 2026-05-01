/*
 * XREFs of ?CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803C8564
 * Callers:
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x1803BACF0 (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0TabletModeCoverWindow@@QEAA@XZ @ 0x1803C81E4 (--0TabletModeCoverWindow@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803C84DC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_1803C84DC.c)
 *     ?InternalRelease@?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x1803C9170 (-InternalRelease@-$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x1803C9330 (-RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CoverWindow_CreateInstance(struct IUnknown *a1, const struct _GUID *a2, void **a3)
{
  TabletModeCoverWindow *v5; // rax
  int CanCastTo; // ebx
  TabletModeCoverWindow *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  TabletModeCoverWindow *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  TabletModeCoverWindow *v13; // [rsp+38h] [rbp+10h] BYREF
  TabletModeCoverWindow *v14; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(&v13);
  v13 = 0LL;
  v5 = (TabletModeCoverWindow *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
  {
    CanCastTo = -2147024882;
LABEL_8:
    v8 = 477LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)(unsigned int)CanCastTo);
    goto LABEL_16;
  }
  v14 = TabletModeCoverWindow::TabletModeCoverWindow(v5);
  v7 = v14;
  CanCastTo = TabletModeCoverWindow::RuntimeClassInitialize(v14, a1);
  if ( CanCastTo >= 0 )
  {
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)v7 + 23);
    v13 = v7;
    CanCastTo = 0;
  }
  Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(&v14);
  if ( CanCastTo < 0 )
    goto LABEL_8;
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_2c36ae3a_298c_4659_b51a_0859453e8d8f, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v10 = v13;
    *a3 = v13;
    (*(void (__fastcall **)(TabletModeCoverWindow *))(*(_QWORD *)v10 + 8LL))(v10);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::FtmBase,ITabletModeCoverWindow,ITabletModeChrome>::CanCastTo(
                  (__int64)v13,
                  v9,
                  a3);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  if ( CanCastTo < 0 )
  {
    v8 = 478LL;
    goto LABEL_15;
  }
LABEL_16:
  Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(&v13);
  return (unsigned int)CanCastTo;
}
