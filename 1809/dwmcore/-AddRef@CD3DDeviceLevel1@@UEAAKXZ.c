/*
 * XREFs of ?AddRef@CD3DDeviceLevel1@@UEAAKXZ @ 0x1800E75C0
 * Callers:
 *     ?AddRef@CD3DDeviceLevel1@@WBPA@EAAKXZ @ 0x1800F0C00 (-AddRef@CD3DDeviceLevel1@@WBPA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDeviceLevel1::AddRef(CD3DDeviceLevel1 *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 126);
}
