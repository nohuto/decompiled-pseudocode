/*
 * XREFs of NdisFDirectOidRequestComplete @ 0x1C005A960
 * Callers:
 *     <none>
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C000F400 (ndisOidFreeInternalCloneRequest.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C005C6F4 (ndisQueueStackExpansionFallbackWorkItem.c)
 */

void __stdcall NdisFDirectOidRequestComplete(
        NDIS_HANDLE NdisFilterHandle,
        PNDIS_OID_REQUEST OidRequest,
        NDIS_STATUS Status)
{
  bool v3; // zf
  PNDIS_OID_REQUEST v5; // rsi
  KIRQL v7; // al
  KIRQL v8; // bl
  __int64 v9; // rdx
  _BYTE Parameter[8]; // [rsp+30h] [rbp-48h] BYREF
  NDIS_HANDLE v11; // [rsp+38h] [rbp-40h]
  PNDIS_OID_REQUEST v12; // [rsp+48h] [rbp-30h]
  PNDIS_OID_REQUEST v13; // [rsp+80h] [rbp+8h] BYREF

  v3 = (*(_DWORD *)&OidRequest->NdisReserved[16] & 0x8000000) == 0;
  v5 = OidRequest;
  v13 = OidRequest;
  if ( !v3 )
  {
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)NdisFilterHandle, (__int64)OidRequest, 0, (KSPIN_LOCK *)&v13);
    v5 = v13;
  }
  *(_DWORD *)&v5->NdisReserved[8] = Status;
  v11 = NdisFilterHandle;
  v12 = v5;
  if ( KeExpandKernelStackAndCalloutEx(ndisFDirectOidRequestCompleteInternal, Parameter, 0x4CCCuLL, 0, 0LL) < 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisFilterHandle + 18);
    *((_QWORD *)NdisFilterHandle + 19) = KeGetCurrentThread();
    v8 = v7;
    v9 = *((_QWORD *)NdisFilterHandle + 31);
    *((_DWORD *)NdisFilterHandle + 40) = 2101320;
    *(_QWORD *)v5->NdisReserved = v9;
    *((_QWORD *)NdisFilterHandle + 31) = v13;
    ndisQueueStackExpansionFallbackWorkItem(NdisFilterHandle);
    *((_QWORD *)NdisFilterHandle + 19) = 0LL;
    *((_DWORD *)NdisFilterHandle + 40) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)NdisFilterHandle + 18, v8);
  }
}
