/*
 * XREFs of ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801D1770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionMipmapSurface::NotifyInvalidResource(
        unsigned __int64 this,
        const struct IDeviceResource *a2)
{
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(this + 88) + 24LL) + 32LL))(
    *(_QWORD *)(this + 88) + 24LL,
    this & ((unsigned __int128)-(__int128)(this - 72) >> 64));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(this + 88));
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)(this + 72));
}
