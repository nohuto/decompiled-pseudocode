/*
 * XREFs of ndisDeviceInternalIrpDispatch @ 0x1C00A4F70
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceInternalDispatch @ 0x1C00A4E58 (ndisDeviceInternalDispatch.c)
 */

__int64 __fastcall ndisDeviceInternalIrpDispatch(__int64 a1, _IRP *a2)
{
  return ndisDeviceInternalDispatch(a1, *(_QWORD *)(a1 + 64), a2);
}
