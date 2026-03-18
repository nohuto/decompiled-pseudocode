/*
 * XREFs of ?GetAdapterPerfDataCaps@DXGADAPTER@@QEAAJPEAU_D3DKMT_ADAPTER_PERFDATACAPS@@@Z @ 0x1C01BD7F4
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C01D6738 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetAdapterPerfDataCaps(
        DXGADAPTER *this,
        struct _D3DKMT_ADAPTER_PERFDATACAPS *a2,
        __int64 a3)
{
  __int64 PhysicalAdapterIndex; // rax
  __int64 v5; // r8
  __int64 v7; // rax

  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 64)) )
  {
    v5 = *((_QWORD *)this + 302) + 352 * PhysicalAdapterIndex;
    a2->MaxMemoryBandwidth = *(_QWORD *)(v5 + 192);
    a2->MaxPCIEBandwidth = *(_QWORD *)(v5 + 200);
    a2->MaxFanRPM = *(_DWORD *)(v5 + 208);
    a2->TemperatureMax = *(_DWORD *)(v5 + 212);
    a2->TemperatureWarning = *(_DWORD *)(v5 + 216);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
}
