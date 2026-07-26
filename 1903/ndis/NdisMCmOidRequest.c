/*
 * XREFs of NdisMCmOidRequest @ 0x1C0086160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00822F4 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCoOidRequestComplete @ 0x1C00855A0 (NdisCoOidRequestComplete.c)
 *     ndisCoOidRequestToRequest @ 0x1C0086FA4 (ndisCoOidRequestToRequest.c)
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

  v8 = ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)NdisAfHandle);
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
                                                                                    + 1096LL))(
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
