/*
 * XREFs of ?VidMmAdapterVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA@@@Z @ 0x1C0041E44
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmAdapterVerifierOption(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned int a4,
        union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *a5)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, _QWORD, _QWORD, union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA *))(*((_QWORD *)this + 1) + 1104LL))(
           a2,
           a3,
           a4,
           a5);
}
