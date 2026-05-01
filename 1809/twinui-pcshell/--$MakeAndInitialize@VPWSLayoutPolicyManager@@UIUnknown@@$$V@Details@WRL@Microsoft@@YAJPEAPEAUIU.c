/*
 * XREFs of ??$MakeAndInitialize@VPWSLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18019EFF0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18019F5C0 (-CreateInstance@-$SimpleClassFactory@VPWSLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0PWSLayoutPolicyManager@@QEAA@XZ @ 0x18019F174 (--0PWSLayoutPolicyManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1801A0094 (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PWSLayoutPolicyManager,IUnknown,>(_QWORD *a1)
{
  PWSLayoutPolicyManager *v2; // rax
  int v3; // edi
  PWSLayoutPolicyManager *v4; // rbx

  *a1 = 0LL;
  v2 = (PWSLayoutPolicyManager *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = PWSLayoutPolicyManager::PWSLayoutPolicyManager(v2);
    v3 = PWSLayoutPolicyManager::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
      v3 = (**(__int64 (__fastcall ***)(PWSLayoutPolicyManager *, GUID *, _QWORD *))v4)(
             v4,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v4 )
      (*(void (__fastcall **)(PWSLayoutPolicyManager *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
