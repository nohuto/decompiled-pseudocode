/*
 * XREFs of ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C001DFF4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205304 (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsComputeOnlyAdapter(DXGADAPTER *this)
{
  return *((int *)this + 613) >= 2600 && (*((_DWORD *)this + 606) & 8) != 0;
}
