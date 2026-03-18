/*
 * XREFs of ?IsSoftGPU@DXGADAPTER@@QEBAEXZ @ 0x1C000B750
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsSoftGPU(DXGADAPTER *this)
{
  return (*((_DWORD *)this + 77) & 8) != 0;
}
