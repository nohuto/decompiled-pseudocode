/*
 * XREFs of ndisDeviceInternalIrpDispatch @ 0x1C00690B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceInternalDispatch @ 0x1C0068FC4 (ndisDeviceInternalDispatch.c)
 */

__int64 __fastcall ndisDeviceInternalIrpDispatch(__int64 a1, _IRP *a2)
{
  return ndisDeviceInternalDispatch(a1, *(char **)(a1 + 64), a2);
}
