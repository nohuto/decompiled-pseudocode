/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItem@@V1@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItem@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktop@@@Z @ 0x18036109C
 * Callers:
 *     ?VirtualDesktopItem_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@AEBU_GUID@@PEAPEAX@Z @ 0x18036161C (-VirtualDesktopItem_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktop@@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18000E500 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopItem@@QEAA@XZ @ 0x180361160 (--0VirtualDesktopItem@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ @ 0x18036150C (-InternalRelease@-$ComPtr@VVirtualDesktopItem@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItem,VirtualDesktopItem,IVirtualDesktopManagerInternal * &,IVirtualDesktop * &>(
        VirtualDesktopItem **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned int v5; // esi
  VirtualDesktopItem *v7; // rax
  VirtualDesktopItem *v8; // rax
  __int64 v9; // rdx
  VirtualDesktopItem *v10; // rdi
  __int64 v11; // rbx
  VirtualDesktopItem *v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
  *a1 = 0LL;
  v7 = (VirtualDesktopItem *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = VirtualDesktopItem::VirtualDesktopItem(v7);
    v9 = *a2;
    v10 = v8;
    v11 = *a3;
    v13 = v8;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v8 + 11, v9);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)v10 + 12, v11);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)v10 + 21);
    *a1 = v10;
    Microsoft::WRL::ComPtr<VirtualDesktopItem>::InternalRelease(&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
