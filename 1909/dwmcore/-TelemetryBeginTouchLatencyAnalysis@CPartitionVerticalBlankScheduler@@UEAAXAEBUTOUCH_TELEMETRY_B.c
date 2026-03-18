/*
 * XREFs of ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x18001AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IU_LUID@@_N@Z @ 0x18001B128 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@.c)
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18001BAEC (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ?IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z @ 0x1800263FC (-IsWARPAdapterAtIndex@CDisplaySet@@QEBAJIPEA_N@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180027964 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryBeginTouchLatencyAnalysis(
        unsigned __int64 **this,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // edi
  struct _LUID v6; // rbx
  bool v7; // bp
  unsigned int v11; // edx
  CDisplaySet *v12; // rsi
  struct _LUID *PrimaryAdapterLuid; // rax
  CDisplaySet *v14; // [rsp+40h] [rbp-38h] BYREF
  bool v15; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  v14 = 0LL;
  v6 = 0LL;
  v15 = 0;
  v7 = 0;
  CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)this, &v14);
  v12 = v14;
  if ( v14 )
  {
    CDisplaySet::IsWARPAdapterAtIndex(v14, v11, &v15);
    PrimaryAdapterLuid = (struct _LUID *)CDisplaySet::GetPrimaryAdapterLuid(v12);
    v4 = *((_DWORD *)v12 + 18);
    v6 = *PrimaryAdapterLuid;
    CDisplaySet::Release(v12);
    v7 = v15;
  }
  CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
    (CTelemetryTouchLatencyAnalysis *)(this + 3352),
    a2,
    a3,
    a4,
    *this[3237],
    v4,
    v6,
    v7);
}
