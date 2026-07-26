/*
 * XREFs of NdisFCancelDirectOidRequest @ 0x1C008D690
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

void __stdcall NdisFCancelDirectOidRequest(NDIS_HANDLE NdisFilterHandle, PVOID RequestId)
{
  _QWORD Parameter[9]; // [rsp+30h] [rbp-48h] BYREF

  memset(Parameter, 0, 0x38uLL);
  Parameter[1] = NdisFilterHandle;
  Parameter[3] = RequestId;
  KeExpandKernelStackAndCalloutEx(ndisFCancelDirectOidRequestInternal, Parameter, 0x4CCCuLL, 0, 0LL);
}
