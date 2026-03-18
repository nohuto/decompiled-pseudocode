/*
 * XREFs of ?VidSchSetCrossAdapterData@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_CROSS_ADAPTER_DATA@@@Z @ 0x1C002319C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDSCH_EXPORT::VidSchSetCrossAdapterData(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct _VIDSCH_CROSS_ADAPTER_DATA *a3)
{
  (*(void (__fastcall **)(struct _VIDSCH_GLOBAL *, struct _VIDSCH_CROSS_ADAPTER_DATA *))(*((_QWORD *)this + 1) + 912LL))(
    a2,
    a3);
}
