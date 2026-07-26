/*
 * XREFs of NdisFDirectOidRequestComplete @ 0x1C008D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009B60 (ndisOidFreeInternalCloneRequest.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00903E8 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __stdcall NdisFDirectOidRequestComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  bool v6; // zf
  KIRQL v7; // al
  KIRQL v8; // bl
  _QWORD Parameter[8]; // [rsp+30h] [rbp-48h] BYREF
  struct _NDIS_OID_REQUEST *v10; // [rsp+80h] [rbp+8h] BYREF

  memset(Parameter, 0, 0x38uLL);
  v6 = (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0;
  v10 = OidRequest;
  if ( !v6 )
  {
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)NdisFilterHandle, (__int64)OidRequest, 0, (KSPIN_LOCK *)&v10);
    OidRequest = v10;
  }
  *(_DWORD *)&OidRequest->NdisReserved[8] = Status;
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = OidRequest;
  if ( KeExpandKernelStackAndCalloutEx(ndisFDirectOidRequestCompleteInternal, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    v8 = v7;
    *(_QWORD *)OidRequest->NdisReserved = *((_QWORD *)NdisFilterHandle + 30);
    *((_QWORD *)NdisFilterHandle + 30) = v10;
    ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v8);
  }
}
