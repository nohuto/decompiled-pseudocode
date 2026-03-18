/*
 * XREFs of ?IsSurpriseRemovalSupport@DXGADAPTER@@QEBAEW4_DXGK_SURPRISE_REMOVAL_TYPE@@@Z @ 0x1C001EF40
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsSurpriseRemovalSupport(DXGADAPTER *this, enum _DXGK_SURPRISE_REMOVAL_TYPE a2)
{
  return *((_BYTE *)this + 2366) != 0;
}
