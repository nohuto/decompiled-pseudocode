/*
 * XREFs of ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x1800E72E8
 * Callers:
 *     _lambda_7dce459d489fa1384d40ebd6fa301128_::operator() @ 0x180089C4C (_lambda_7dce459d489fa1384d40ebd6fa301128_--operator().c)
 *     ?CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800973C8 (-CloseApplicationView@KioskPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x180363084 (-InitializeInstance@TabletModeCoverWindow@@AEAAJXZ.c)
 *     ?OnPointerUp@TabletModeCoverWindow@@AEAAXXZ @ 0x1803631E4 (-OnPointerUp@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ @ 0x18036347C (-ScaleFactorChanged@TabletModeCoverWindow@@AEAAXXZ.c)
 *     ?SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z @ 0x180363500 (-SetSite@TabletModeCoverWindow@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1803AD9D0 (-QueryService@CLaunchToMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CWRLObjectWithGITSite::SiteUnk(__int64 a1, __int64 *a2)
{
  *a2 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  (*(void (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)a1 + 32LL))(
    a1,
    &GUID_00000000_0000_0000_c000_000000000046,
    a2);
  return a2;
}
