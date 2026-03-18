/*
 * XREFs of ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG@Z @ 0x180018D40
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1IU_LUID@@_N@Z @ 0x180018EA8 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED.c)
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x180019764 (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x18008154C (-IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryBeginTouchLatencyAnalysis(
        unsigned __int64 **this,
        const struct TOUCH_TELEMETRY_BEGIN_PACKED_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // edi
  bool v6; // bp
  struct _LUID v10; // rbx
  unsigned int v11; // edx
  CDisplaySet *v12; // rsi
  struct _LUID *PrimaryAdapterLuid; // rax
  CDisplaySet *v14; // [rsp+40h] [rbp-38h] BYREF
  bool v15; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  v14 = 0LL;
  v6 = 0;
  v15 = 0;
  v10 = 0LL;
  CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)this, &v14);
  v12 = v14;
  if ( v14 )
  {
    CDisplaySet::IsWARPAdapterAtIndex(v14, v11, &v15);
    PrimaryAdapterLuid = (struct _LUID *)CDisplaySet::GetPrimaryAdapterLuid(v12);
    v4 = *((_DWORD *)v12 + 18);
    v10 = *PrimaryAdapterLuid;
    CDisplaySet::Release(v12);
    v6 = v15;
  }
  CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
    (CTelemetryTouchLatencyAnalysis *)(this + 3347),
    a2,
    a3,
    a4,
    *this[3232],
    v4,
    v10,
    v6);
}
