/*
 * XREFs of ??$MakeAndInitialize@VTabletModeViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180350744
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModeViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180350DB0 (-CreateInstance@-$SimpleClassFactory@VTabletModeViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0TabletModeViewManager@@QEAA@XZ @ 0x18035081C (--0TabletModeViewManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabletModeViewManager@@QEAAJXZ @ 0x18035179C (-RuntimeClassInitialize@TabletModeViewManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeViewManager,IUnknown,>(_QWORD *a1)
{
  TabletModeViewManager *v2; // rax
  int v3; // edi
  TabletModeViewManager *v4; // rbx

  *a1 = 0LL;
  v2 = (TabletModeViewManager *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = TabletModeViewManager::TabletModeViewManager(v2);
    v3 = TabletModeViewManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(TabletModeViewManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(TabletModeViewManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
