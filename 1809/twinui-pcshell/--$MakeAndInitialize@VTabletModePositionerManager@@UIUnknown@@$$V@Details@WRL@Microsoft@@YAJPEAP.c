/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180342474
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180342960 (-CreateInstance@-$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x180342608 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabletModePositionerManager@@QEAAJXZ @ 0x180342FD0 (-RuntimeClassInitialize@TabletModePositionerManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerManager,IUnknown,>(_QWORD *a1)
{
  TabletModePositionerManager *v2; // rax
  int v3; // edi
  TabletModePositionerManager *v4; // rbx

  *a1 = 0LL;
  v2 = (TabletModePositionerManager *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = TabletModePositionerManager::TabletModePositionerManager(v2);
    v3 = TabletModePositionerManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(TabletModePositionerManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(TabletModePositionerManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
