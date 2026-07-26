/*
 * XREFs of NdisClModifyCallQoS @ 0x1C011B590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisClModifyCallQoS(NDIS_HANDLE NdisVcHandle, PCO_CALL_PARAMETERS CallParameters)
{
  return (*((__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS))NdisVcHandle + 23))(
           *((_QWORD *)NdisVcHandle + 18),
           CallParameters);
}
