/*
 * XREFs of ??$MakeAndInitialize@VViewHierarchy@@UIViewHierarchy@@W4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIViewHierarchy@@$$QEAW4TestMode@ViewHierarchy@@@Z @ 0x180028498
 * Callers:
 *     ?Create@ViewHierarchy@@SA?AV?$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@XZ @ 0x18002844C (-Create@ViewHierarchy@@SA-AV-$ComPtr@UIViewHierarchy@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??0ViewHierarchy@@AEAA@XZ @ 0x18002854C (--0ViewHierarchy@@AEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHierarchy,IViewHierarchy,enum ViewHierarchy::TestMode>(
        _QWORD *a1,
        unsigned int *a2)
{
  ViewHierarchy *v4; // rax
  ViewHierarchy *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = (ViewHierarchy *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = ViewHierarchy::ViewHierarchy(v4);
    v6 = (*(__int64 (__fastcall **)(ViewHierarchy *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, *a2);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(ViewHierarchy *, GUID *, _QWORD *))v5)(
             v5,
             &GUID_60285f40_b2da_4b48_b9fd_7550a7fff1b4,
             a1);
    (*(void (__fastcall **)(ViewHierarchy *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
