/*
 * XREFs of ?terminate@details@gsl@@YAXXZ @ 0x18001EB60
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x18001DB0C (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800653E0 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800659C0 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 *     ?AveragePoint@@YA?AUtagPOINT@@PEBUInputInfo@@@Z @ 0x1800CFDE4 (-AveragePoint@@YA-AUtagPOINT@@PEBUInputInfo@@@Z.c)
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800CFEC0 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn gsl::details::terminate(gsl::details *this)
{
  _o_terminate(this);
  JUMPOUT(0x18001EB6ALL);
}
