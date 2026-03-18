/*
 * XREFs of ?GetGpuVersion@DXGADAPTER@@QEAAJPEAU_D3DKMT_GPUVERSION@@@Z @ 0x1C01ECE74
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02045C8 (DxgkQueryStatisticsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::GetGpuVersion(DXGADAPTER *this, struct _D3DKMT_GPUVERSION *a2, __int64 a3)
{
  __int64 PhysicalAdapterIndex; // rax
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rax

  if ( a2
    && (PhysicalAdapterIndex = a2->PhysicalAdapterIndex, (unsigned int)PhysicalAdapterIndex < *((_DWORD *)this + 64)) )
  {
    v5 = *((_QWORD *)this + 305) + 352 * PhysicalAdapterIndex;
    result = 0LL;
    *(_OWORD *)a2->BiosVersion = *(_OWORD *)(v5 + 220);
    *(_OWORD *)&a2->BiosVersion[8] = *(_OWORD *)(v5 + 236);
    *(_OWORD *)a2->GpuArchitecture = *(_OWORD *)(v5 + 284);
    *(_OWORD *)&a2->GpuArchitecture[8] = *(_OWORD *)(v5 + 300);
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
  return result;
}
