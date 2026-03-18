/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x18019F8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IEAAXXZ @ 0x1801A00B0 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IE.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
  CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::ReleaseResourcesNoAddRef(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 16LL))(*((_QWORD *)a1 + 1));
}
