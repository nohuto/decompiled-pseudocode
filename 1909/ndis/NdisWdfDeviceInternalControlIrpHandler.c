/*
 * XREFs of NdisWdfDeviceInternalControlIrpHandler @ 0x1C009ED20
 * Callers:
 *     <none>
 * Callees:
 *     ndisDeviceInternalDispatch @ 0x1C00A4E58 (ndisDeviceInternalDispatch.c)
 */

__int64 __fastcall NdisWdfDeviceInternalControlIrpHandler(__int64 a1)
{
  return ndisDeviceInternalDispatch(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 48LL) + 24LL));
}
