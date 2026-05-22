/*
 * XREFs of ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18002F2AC
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000C7C0 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18006642C (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800FF1F4 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18002FA00 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(__int64 *a1, __int64 **a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rsi

  *a1 = 0LL;
  v3 = *a2;
  v4 = a2[1];
  while ( v3 != v4 )
  {
    if ( *(_BYTE *)(*v3 + 384) && *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(*v3 + 32)) )
    {
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=(a1, v3);
      return a1;
    }
    ++v3;
  }
  return a1;
}
