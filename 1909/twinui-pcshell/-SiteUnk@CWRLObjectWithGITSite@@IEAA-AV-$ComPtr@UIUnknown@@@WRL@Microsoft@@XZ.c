/*
 * XREFs of ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180128408
 * Callers:
 *     _lambda_07e2480195fd463dd539f4feacdfa4d2_::operator() @ 0x18008F3C8 (_lambda_07e2480195fd463dd539f4feacdfa4d2_--operator().c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1803E8620 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1803E8780 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x1803E8A1C (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x1803E8AA0 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18042F2A0 (-QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
