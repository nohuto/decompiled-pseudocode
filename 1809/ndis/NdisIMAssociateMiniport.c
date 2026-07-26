/*
 * XREFs of NdisIMAssociateMiniport @ 0x1C00F1360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisIMAssociateMiniport(NDIS_HANDLE DriverHandle, NDIS_HANDLE ProtocolHandle)
{
  *((_QWORD *)DriverHandle + 9) = ProtocolHandle;
  *((_QWORD *)ProtocolHandle + 56) = DriverHandle;
}
