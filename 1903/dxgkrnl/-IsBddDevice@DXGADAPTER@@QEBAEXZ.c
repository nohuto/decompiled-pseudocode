/*
 * XREFs of ?IsBddDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0006300
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsBddDevice(DXGADAPTER *this)
{
  return (*((_DWORD *)this + 77) & 0x20) != 0;
}
