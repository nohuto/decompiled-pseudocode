/*
 * XREFs of Etw_EndpointDelete @ 0x1C00395DC
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C0015F30 (Endpoint_EvtEndpointCleanupCallback.c)
 * Callees:
 *     McTemplateK0pppnnn @ 0x1C0039A40 (McTemplateK0pppnnn.c)
 */

__int64 __fastcall Etw_EndpointDelete(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pppnnn(
             (int)a2 + 103,
             (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_DELETE,
             0,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
