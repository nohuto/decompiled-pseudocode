/*
 * XREFs of XilEndpoint_AcquireBuffer @ 0x1C0016CEC
 * Callers:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C00191DC (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0019DF0 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001BE60 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 * Callees:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C000D2B4 (XilCommonBuffer_AcquireBufferEx.c)
 */

char *__fastcall XilEndpoint_AcquireBuffer(_BYTE *a1, unsigned int a2, __int64 a3, int a4)
{
  return XilCommonBuffer_AcquireBufferEx(
           *(void **)(*(_QWORD *)a1 + 120LL),
           a2,
           a3,
           a4,
           (unsigned int)(a1[1336] != 0) + 1);
}
