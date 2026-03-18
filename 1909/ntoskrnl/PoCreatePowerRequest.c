/*
 * XREFs of PoCreatePowerRequest @ 0x14073BE60
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1400D64DC (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14010535C (PoCaptureReasonContext.c)
 *     PopCreateKernelPowerRequest @ 0x14073BEE4 (PopCreateKernelPowerRequest.c)
 */

NTSTATUS __stdcall PoCreatePowerRequest(
        PVOID *PowerRequest,
        PDEVICE_OBJECT DeviceObject,
        PCOUNTED_REASON_CONTEXT Context)
{
  NTSTATUS v4; // ebx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  P = 0LL;
  *PowerRequest = 0LL;
  if ( !DeviceObject )
    return -1073741811;
  v4 = PoCaptureReasonContext((unsigned __int64)Context, 0, (__int64)DeviceObject, 1, 0LL, &P);
  if ( v4 < 0 || (v4 = PopCreateKernelPowerRequest(&v7, P), v4 < 0) )
  {
    if ( P )
      PoDestroyReasonContext(P);
  }
  else
  {
    *PowerRequest = v7;
  }
  return v4;
}
