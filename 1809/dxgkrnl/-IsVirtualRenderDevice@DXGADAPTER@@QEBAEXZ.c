/*
 * XREFs of ?IsVirtualRenderDevice@DXGADAPTER@@QEBAEXZ @ 0x1C001EF2C
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsVirtualRenderDevice(DXGADAPTER *this)
{
  return (*((_DWORD *)this + 77) & 0x4000) != 0;
}
