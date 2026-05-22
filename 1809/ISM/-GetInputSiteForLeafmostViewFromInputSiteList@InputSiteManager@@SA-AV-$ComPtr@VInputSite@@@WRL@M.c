/*
 * XREFs of ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001DF68
 * Callers:
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001DF04 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z @ 0x1800C996C (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@PEAUHMONITOR__@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180020C64 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ?GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ @ 0x180021358 (-GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
InputSite **__fastcall InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(InputSite **a1, InputSite ***a2)
{
  InputSite **v3; // rbx
  InputSite **v4; // rsi
  LegacyInputSinkData *LegacyInputSinkData; // rax
  InputSite *v6; // rbx
  InputSite *v7; // rcx

  *a1 = 0LL;
  v3 = *a2;
  v4 = a2[1];
  while ( v3 != v4 )
  {
    if ( *((_BYTE *)*v3 + 384) )
    {
      LegacyInputSinkData = InputSite::GetLegacyInputSinkData(*v3);
      if ( *LegacyInputSinkData::GetViewInstanceId(LegacyInputSinkData) )
      {
        v6 = *v3;
        if ( *a1 != v6 )
        {
          if ( v6 )
            (*(void (__fastcall **)(InputSite *))(*(_QWORD *)v6 + 8LL))(v6);
          v7 = *a1;
          *a1 = v6;
          if ( v7 )
            (*(void (__fastcall **)(InputSite *))(*(_QWORD *)v7 + 16LL))(v7);
        }
        return a1;
      }
    }
    ++v3;
  }
  return a1;
}
