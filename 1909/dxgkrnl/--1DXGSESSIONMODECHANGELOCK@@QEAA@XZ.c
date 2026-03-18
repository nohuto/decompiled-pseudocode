/*
 * XREFs of ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x1C000391C
 * Callers:
 *     ?HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ @ 0x1C00C30E0 (-HdrPowerPolicyChangeCallout@DXGGLOBAL@@QEAAXXZ.c)
 *     DxgkDisplayOnOff @ 0x1C00C6EF0 (DxgkDisplayOnOff.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00C806C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CBA38 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5FC0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F72E0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C0202B00 (DxgkGetSharedPrimaryHandle.c)
 * Callees:
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 */

void __fastcall DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK(DXGSESSIONMODECHANGELOCK *this)
{
  if ( *(_BYTE *)this )
  {
    *(_BYTE *)this = 0;
    DxgkReleaseSessionModeChangeLock();
  }
}
