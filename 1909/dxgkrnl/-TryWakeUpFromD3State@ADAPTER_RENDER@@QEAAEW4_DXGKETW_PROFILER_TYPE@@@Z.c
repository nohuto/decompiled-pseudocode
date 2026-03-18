/*
 * XREFs of ?TryWakeUpFromD3State@ADAPTER_RENDER@@QEAAEW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0023A00
 * Callers:
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0023BC0 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 * Callees:
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

char __fastcall ADAPTER_RENDER::TryWakeUpFromD3State(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 1;
  if ( *(_DWORD *)(v1 + 136) != 1 )
    return 0;
  DXGADAPTER::WakeUpAdapter(v1, 0xFFFFFFFFLL);
  return v2;
}
