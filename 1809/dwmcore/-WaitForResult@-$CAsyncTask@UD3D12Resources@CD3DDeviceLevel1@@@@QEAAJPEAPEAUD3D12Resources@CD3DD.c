/*
 * XREFs of ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAJPEAPEAUD3D12Resources@CD3DDeviceLevel1@@@Z @ 0x1801FD8FC
 * Callers:
 *     ?GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801FC61C (-GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801FD3D0 (-TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022C684 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::WaitForResult(__int64 a1, _QWORD *a2)
{
  WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)a1, 0);
  *a2 = a1 + 72;
  return *(unsigned int *)(a1 + 88);
}
