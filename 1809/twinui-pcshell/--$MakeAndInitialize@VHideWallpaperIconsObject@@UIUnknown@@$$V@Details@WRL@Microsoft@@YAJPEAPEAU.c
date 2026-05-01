/*
 * XREFs of ??$MakeAndInitialize@VHideWallpaperIconsObject@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803B1E18
 * Callers:
 *     ?CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z @ 0x1803B1F24 (-CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180019624 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ @ 0x1803B1FC8 (-RuntimeClassInitialize@HideWallpaperIconsObject@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HideWallpaperIconsObject,IUnknown,>(_QWORD *a1)
{
  HideWallpaperIconsObject *v2; // rax
  HideWallpaperIconsObject *v3; // rbx
  int v4; // edi

  *a1 = 0LL;
  v2 = (HideWallpaperIconsObject *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v2);
    *((_BYTE *)v3 + 16) = 0;
    *(_QWORD *)v3 = &HideWallpaperIconsObject::`vftable';
    v4 = HideWallpaperIconsObject::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(HideWallpaperIconsObject *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(HideWallpaperIconsObject *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
