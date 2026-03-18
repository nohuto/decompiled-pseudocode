/*
 * XREFs of ?IsPostAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C001ABBC
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0168F90 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::IsPostAdapter(DXGADAPTER *this)
{
  return *((_DWORD *)this + 77) & 1;
}
