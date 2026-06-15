/*
 * XREFs of ??$Make@VCPolicyConfig@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPolicyConfig@@@12@XZ @ 0x18005EE98
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005D4C8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??0CPolicyConfig@@QEAA@XZ @ 0x18005EF2C (--0CPolicyConfig@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800652C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
CPolicyConfig **__fastcall Microsoft::WRL::Details::Make<CPolicyConfig,>(CPolicyConfig **a1)
{
  CPolicyConfig *v2; // rax
  CPolicyConfig *v3; // rbx
  CPolicyConfig *v4; // rbx

  *a1 = 0LL;
  v2 = (CPolicyConfig *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x70uLL);
    v4 = CPolicyConfig::CPolicyConfig(v3);
    if ( *a1 )
      (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
    v3 = 0LL;
  }
  if ( v3 )
    operator delete(v3, (const struct std::nothrow_t *)1);
  return a1;
}
