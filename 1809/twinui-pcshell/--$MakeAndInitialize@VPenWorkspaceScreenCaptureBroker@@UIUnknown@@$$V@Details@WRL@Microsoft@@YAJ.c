/*
 * XREFs of ??$MakeAndInitialize@VPenWorkspaceScreenCaptureBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180196AB0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPenWorkspaceScreenCaptureBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180197110 (-CreateInstance@-$SimpleClassFactory@VPenWorkspaceScreenCaptureBroker@@$0A@@WRL@Microsoft@@UEAAJ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0PenWorkspaceScreenCaptureBroker@@QEAA@XZ @ 0x180196C38 (--0PenWorkspaceScreenCaptureBroker@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@PenWorkspaceScreenCaptureBroker@@QEAAJXZ @ 0x1801976E4 (-RuntimeClassInitialize@PenWorkspaceScreenCaptureBroker@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PenWorkspaceScreenCaptureBroker,IUnknown,>(_QWORD *a1)
{
  PenWorkspaceScreenCaptureBroker *v2; // rax
  int v3; // edi
  PenWorkspaceScreenCaptureBroker *v4; // rbx
  PenWorkspaceScreenCaptureBroker *v5; // rcx

  *a1 = 0LL;
  v2 = (PenWorkspaceScreenCaptureBroker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = PenWorkspaceScreenCaptureBroker::PenWorkspaceScreenCaptureBroker(v2);
    v3 = PenWorkspaceScreenCaptureBroker::RuntimeClassInitialize(v5);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(PenWorkspaceScreenCaptureBroker *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(PenWorkspaceScreenCaptureBroker *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
