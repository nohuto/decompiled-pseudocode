/*
 * XREFs of ?VidMmUseDirectFlip@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@@Z @ 0x1C0020654
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmUseDirectFlip(VIDMM_EXPORT *this, struct VIDMM_GLOBAL *a2)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *))(*((_QWORD *)this + 1) + 704LL))(a2);
}
