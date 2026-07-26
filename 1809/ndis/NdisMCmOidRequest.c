/*
 * XREFs of NdisMCmOidRequest @ 0x1C011DFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     NdisCoOidRequestComplete @ 0x1C011D4C0 (NdisCoOidRequestComplete.c)
 *     ndisCoOidRequestToRequest @ 0x1C011E6F0 (ndisCoOidRequestToRequest.c)
 *     ndisReferenceAf @ 0x1C011EB34 (ndisReferenceAf.c)
 */

NDIS_STATUS __stdcall NdisMCmOidRequest(
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        PNDIS_OID_REQUEST NdisOidRequest)
{
  char v8; // al
  __int64 v9; // r8
  NDIS_STATUS result; // eax
  __int64 v11; // rdx

  v8 = ndisReferenceAf(NdisAfHandle);
  v9 = 0LL;
  if ( !v8 )
    return -1073741823;
  v11 = 0LL;
  *(_QWORD *)&NdisOidRequest->NdisReserved[64] = *((_QWORD *)NdisAfHandle + 6);
  *(_QWORD *)&NdisOidRequest->NdisReserved[32] = *((_QWORD *)NdisAfHandle + 5);
  if ( NdisVcHandle )
  {
    *(_QWORD *)&NdisOidRequest->NdisReserved[56] = *((_QWORD *)NdisAfHandle + 6);
    v11 = *((_QWORD *)NdisVcHandle + 3);
  }
  if ( NdisPartyHandle )
  {
    *(_QWORD *)&NdisOidRequest->NdisReserved[40] = *((_QWORD *)NdisPartyHandle + 1);
    v9 = *((_QWORD *)NdisPartyHandle + 2);
  }
  if ( *((_DWORD *)NdisAfHandle + 99) < 6u )
    result = ndisCoOidRequestToRequest(
               (int)NdisAfHandle + 80,
               *((_QWORD *)NdisAfHandle + 47),
               v11,
               v9,
               (__int64)NdisOidRequest);
  else
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, PNDIS_OID_REQUEST))(*((_QWORD *)NdisAfHandle + 46)
                                                                                    + 1152LL))(
               *((_QWORD *)NdisAfHandle + 47),
               v11,
               v9,
               NdisOidRequest);
  if ( result != 259 )
  {
    NdisCoOidRequestComplete(NdisAfHandle, NdisVcHandle, NdisPartyHandle, NdisOidRequest, result);
    return 259;
  }
  return result;
}
