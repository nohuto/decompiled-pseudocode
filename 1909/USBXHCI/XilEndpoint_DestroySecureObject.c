/*
 * XREFs of XilEndpoint_DestroySecureObject @ 0x1C0017228
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C0018DB0 (Endpoint_EvtEndpointCleanupCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

void *__fastcall XilEndpoint_DestroySecureObject(__int64 a1)
{
  void *result; // rax
  __int64 v3; // rcx
  _QWORD v4[5]; // [rsp+30h] [rbp-38h] BYREF

  result = memset(v4, 0, sizeof(v4));
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(**(_QWORD **)(a1 + 32) + 112LL);
    v4[3] = *(_QWORD *)a1;
    *(_OWORD *)&v4[1] = 0LL;
    v4[4] = 34LL;
    result = (void *)SecureChannel_SendRequestSynchronously(v3, (unsigned int)v4, 40, 0, 0);
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}
