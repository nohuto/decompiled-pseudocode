/*
 * XREFs of ?IsSoftwareAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0001208
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsSoftwareAdapter(DXGADAPTER *this)
{
  return (*((_DWORD *)this + 77) & 4) != 0;
}
