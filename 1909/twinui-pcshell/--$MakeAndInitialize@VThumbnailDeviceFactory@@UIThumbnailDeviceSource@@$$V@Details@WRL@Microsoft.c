/*
 * XREFs of ??$MakeAndInitialize@VThumbnailDeviceFactory@@UIThumbnailDeviceSource@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIThumbnailDeviceSource@@@Z @ 0x180355534
 * Callers:
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1803570D0 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EE60 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActivation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005C530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDelayedAppActiv.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0ThumbnailDeviceFactory@@QEAA@XZ @ 0x1803560D4 (--0ThumbnailDeviceFactory@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ThumbnailDeviceFactory,IThumbnailDeviceSource,>(
        void **a1)
{
  ThumbnailDeviceFactory *v2; // rax
  int CanCastTo; // edi
  ThumbnailDeviceFactory *v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  const struct _GUID *v8; // rdx
  volatile int *v9; // rdx

  *a1 = 0LL;
  v2 = (ThumbnailDeviceFactory *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v4 = ThumbnailDeviceFactory::ThumbnailDeviceFactory(v2);
  *a1 = 0LL;
  v5 = (__int64)v4;
  if ( InlineIsEqualGUID(&GUID_ebf4f734_c638_49eb_991f_652a0bc063f0, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = (void *)v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, v7) )
    {
      *a1 = (void *)v5;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 8), v8, a1);
      if ( CanCastTo == -2147467262 )
        CanCastTo = -2147467262;
      if ( CanCastTo < 0 )
        goto LABEL_11;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
LABEL_11:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDelayedAppActivation,Microsoft::WRL::FtmBase>::Release(
      v5,
      v9);
  return (unsigned int)CanCastTo;
}
