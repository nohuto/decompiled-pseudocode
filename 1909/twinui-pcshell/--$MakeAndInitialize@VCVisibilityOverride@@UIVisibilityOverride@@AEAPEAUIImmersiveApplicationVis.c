/*
 * XREFs of ??$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x180141C28
 * Callers:
 *     ?s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID@@PEAPEAX@Z @ 0x180142258 (-s_CreateInstance@CVisibilityOverride@@SAJPEAUIImmersiveApplicationVisibilityOverride@@AEBU_GUID.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CVisibilityOverride@@QEAA@XZ @ 0x180141CC4 (--0CVisibilityOverride@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x180142068 (-RuntimeClassInitialize@CVisibilityOverride@@QEAAJPEAUIImmersiveApplicationVisibilityOverride@@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVisibilityOverride,IVisibilityOverride,IImmersiveApplicationVisibilityOverride * &>(
        _QWORD *a1,
        struct IImmersiveApplicationVisibilityOverride **a2)
{
  CVisibilityOverride *v4; // rax
  int v5; // edi
  CVisibilityOverride *v6; // rbx

  *a1 = 0LL;
  v4 = (CVisibilityOverride *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CVisibilityOverride::CVisibilityOverride(v4);
    v5 = CVisibilityOverride::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(CVisibilityOverride *, GUID *, _QWORD *))v6)(
             v6,
             &GUID_328dedb7_8f68_4e6c_a210_a6c2c37504e8,
             a1);
    if ( v6 )
      (*(void (__fastcall **)(CVisibilityOverride *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
