/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803C8254
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803CB0A0 (-CreateInstance@-$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0TabletModePositioner@@QEAA@XZ @ 0x1803C87D0 (--0TabletModePositioner@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1803CF380 (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositioner,IUnknown,>(_QWORD *a1)
{
  TabletModePositioner *v2; // rax
  int v3; // edi
  IUnknown *v4; // rbx

  *a1 = 0LL;
  v2 = (TabletModePositioner *)operator new(0x200uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = (IUnknown *)TabletModePositioner::TabletModePositioner(v2);
    v3 = TabletModePositioner::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = ((__int64 (__fastcall *)(IUnknown *, GUID *, _QWORD *))v4->lpVtbl->QueryInterface)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      ((void (__fastcall *)(IUnknown *))v4->lpVtbl->Release)(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
