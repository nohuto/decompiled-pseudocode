/*
 * XREFs of ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C0006614
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  (*(void (__fastcall **)(struct VIDMM_GLOBAL *, _QWORD, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(*((_QWORD *)this + 1) + 72LL))(
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
}
