/*
 * XREFs of ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1801092F8
 * Callers:
 *     _lambda_38fe7d99edb05f0a6ae9d60cf489452e_::operator() @ 0x18008CA3C (_lambda_38fe7d99edb05f0a6ae9d60cf489452e_--operator().c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1803C9010 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1803C9194 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1803C9484 (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x1803C9510 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18040FC60 (-QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CWRLObjectWithGITSite::SiteUnk(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  (*(void (__fastcall **)(__int64, GUID *, _QWORD *))(*(_QWORD *)a1 + 32LL))(
    a1,
    &GUID_00000000_0000_0000_c000_000000000046,
    a2);
  return a2;
}
