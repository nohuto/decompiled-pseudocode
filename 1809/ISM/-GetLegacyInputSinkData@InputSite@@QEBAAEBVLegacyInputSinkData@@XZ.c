/*
 * XREFs of ?GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ @ 0x180021358
 * Callers:
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001DF04 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001DF68 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?GetPositionRelativeToSite@DragNDropProcessor@@QEAA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1800254EC (-GetPositionRelativeToSite@DragNDropProcessor@@QEAA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18008A33C (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18008FE40 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x180090100 (-IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800901A0 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 *     ?GetInputSink@DWMInputTarget@@UEBAPEAXXZ @ 0x180090240 (-GetInputSink@DWMInputTarget@@UEBAPEAXXZ.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800902AC (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800C996C (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x180020F40 (--0bad_optional_access@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

const struct LegacyInputSinkData *__fastcall InputSite::GetLegacyInputSinkData(InputSite *this)
{
  const struct LegacyInputSinkData *result; // rax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  result = (InputSite *)((char *)this + 32);
  if ( !*((_BYTE *)this + 384) )
  {
    memset(pExceptionObject, 0, 24);
    std::bad_optional_access::bad_optional_access((std::bad_optional_access *)pExceptionObject);
    throw (std::bad_optional_access *)pExceptionObject;
  }
  return result;
}
