/*
 * XREFs of ??$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Z @ 0x180128C2C
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18011ECC4 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CClassicWindowManager@@QEAA@XZ @ 0x180128F40 (--0CClassicWindowManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x18012A3D8 (-RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CClassicWindowManager,IClassicWindowManagerPrivate,IImmersiveSystemModeInternal * &>(
        _QWORD *a1,
        struct IImmersiveSystemModeInternal **a2)
{
  CClassicWindowManager *v4; // rax
  int v5; // edi
  CClassicWindowManager *v6; // rbx

  *a1 = 0LL;
  v4 = (CClassicWindowManager *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CClassicWindowManager::CClassicWindowManager(v4);
    v5 = CClassicWindowManager::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(CClassicWindowManager *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_226276c7_ca53_498c_b0be_ad1ea9c0ffee,
             a1);
    if ( v6 )
      (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
