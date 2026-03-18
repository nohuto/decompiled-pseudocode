/*
 * XREFs of ?VidMmProcessVerifierOption@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_PROCESS_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_PROCESS_VERIFIER_OPTION_DATA@@@Z @ 0x1C003B790
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmProcessVerifierOption(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGPROCESS *a3,
        unsigned int a4,
        enum _D3DKMT_PROCESS_VERIFIER_OPTION_TYPE a5,
        union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA *a6)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct DXGPROCESS *, _QWORD, _QWORD, union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA *))(*((_QWORD *)this + 1) + 1096LL))(
           a2,
           a3,
           a4,
           (unsigned int)a5,
           a6);
}
