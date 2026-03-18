/*
 * XREFs of ?IsWarpAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00102CC
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsWarpAdapter(DXGADAPTER *this)
{
  return (*((_DWORD *)this + 77) & 0x10) != 0;
}
