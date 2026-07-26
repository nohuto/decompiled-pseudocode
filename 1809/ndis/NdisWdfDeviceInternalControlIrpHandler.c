/*
 * XREFs of NdisWdfDeviceInternalControlIrpHandler @ 0x1C0065250
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceInternalDispatch @ 0x1C0068FC4 (ndisDeviceInternalDispatch.c)
 */

__int64 __fastcall NdisWdfDeviceInternalControlIrpHandler(__int64 a1, __int64 a2)
{
  return ndisDeviceInternalDispatch(*(_QWORD *)(a1 + 3856), a1, a2);
}
