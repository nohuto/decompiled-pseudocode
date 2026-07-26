/*
 * XREFs of ndisVerifierNdisMOidRequestComplete @ 0x1C006A750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVerifierNdisMOidRequestComplete(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, void (__stdcall *)(NDIS_HANDLE, PNDIS_OID_REQUEST, NDIS_STATUS)))ndisVerifierNdisDispatch->NdisMOidRequestComplete)(
           a1,
           a2,
           a3,
           *(_QWORD *)(a1 + 5000),
           NdisMOidRequestComplete);
}
