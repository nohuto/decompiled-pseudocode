/*
 * XREFs of ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18002F6E0
 * Callers:
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x18000B0F0 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18002EF8C (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800661CC (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x1800C6230 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800FEFC4 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 */

const unsigned int *__fastcall LegacyInputSinkData::GetViewInstanceId(LegacyInputSinkData *this)
{
  const unsigned int *result; // rax
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 12) )
  {
    LODWORD(v5) = 0;
    NtQueryCompositionInputSinkViewId(*(_QWORD *)this, &v5);
    BYTE4(v5) = 1;
    *((_QWORD *)this + 1) = v5;
  }
  result = (const unsigned int *)((char *)this + 8);
  if ( !*((_BYTE *)this + 12) )
  {
    v4 = 0uLL;
    pExceptionObject = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  return result;
}
