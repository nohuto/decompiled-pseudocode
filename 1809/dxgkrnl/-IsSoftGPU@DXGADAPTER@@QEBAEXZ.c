/*
 * XREFs of ?IsSoftGPU@DXGADAPTER@@QEBAEXZ @ 0x1C00127F0
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsSoftGPU(DXGADAPTER *this)
{
  return (*((_DWORD *)this + 77) & 8) != 0;
}
