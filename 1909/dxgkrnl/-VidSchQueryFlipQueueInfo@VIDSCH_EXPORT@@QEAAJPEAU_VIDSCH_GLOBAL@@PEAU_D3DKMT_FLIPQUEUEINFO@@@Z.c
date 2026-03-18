/*
 * XREFs of ?VidSchQueryFlipQueueInfo@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAU_D3DKMT_FLIPQUEUEINFO@@@Z @ 0x1C001CA2C
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EA0DC (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchQueryFlipQueueInfo(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct _D3DKMT_FLIPQUEUEINFO *a3)
{
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, struct _D3DKMT_FLIPQUEUEINFO *))(*((_QWORD *)this + 1)
                                                                                            + 504LL))(
           a2,
           a3);
}
