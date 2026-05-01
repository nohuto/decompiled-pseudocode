/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1803543D0
 * Callers:
 *     ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x180354C14 (-VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDes.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CB058 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x180354490 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180354904 (-RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUI.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemCollection,VirtualDesktopItemCollection,IVirtualDesktopItemFactory * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
        VirtualDesktopItemCollection **a1,
        struct IVirtualDesktopItemFactory **a2,
        struct IVirtualDesktopManagerInternal **a3,
        struct IVirtualDesktopNotificationService **a4)
{
  VirtualDesktopItemCollection *v8; // rax
  int v9; // edi
  VirtualDesktopItemCollection *v10; // rax
  struct IVirtualDesktopNotificationService *v11; // r9
  struct IVirtualDesktopManagerInternal *v12; // r8
  VirtualDesktopItemCollection *v13; // rbx
  struct IVirtualDesktopItemFactory *v14; // rdx
  VirtualDesktopItemCollection *v16; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (VirtualDesktopItemCollection *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = VirtualDesktopItemCollection::VirtualDesktopItemCollection(v8);
    v11 = *a4;
    v12 = *a3;
    v13 = v10;
    v14 = *a2;
    v16 = v10;
    v9 = VirtualDesktopItemCollection::RuntimeClassInitialize(v10, v14, v12, v11);
    if ( v9 >= 0 )
    {
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)v13 + 39);
      *a1 = v13;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease((__int64 *)&v16);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
