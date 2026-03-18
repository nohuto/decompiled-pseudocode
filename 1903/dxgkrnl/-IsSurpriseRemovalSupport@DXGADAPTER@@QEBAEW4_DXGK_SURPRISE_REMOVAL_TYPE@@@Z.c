/*
 * XREFs of ?IsSurpriseRemovalSupport@DXGADAPTER@@QEBAEW4_DXGK_SURPRISE_REMOVAL_TYPE@@@Z @ 0x1C001F538
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsSurpriseRemovalSupport(DXGADAPTER *this, enum _DXGK_SURPRISE_REMOVAL_TYPE a2)
{
  return *((_BYTE *)this + 2390) != 0;
}
