/*
 * XREFs of ?IsIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1C0004124
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01651A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::IsIoMmuSupported(DXGADAPTER *this)
{
  return (*((_DWORD *)this + 479) & 0x80) != 0;
}
