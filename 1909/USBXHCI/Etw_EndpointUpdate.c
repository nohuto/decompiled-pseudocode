/*
 * XREFs of Etw_EndpointUpdate @ 0x1C003F0F4
 * Callers:
 *     Endpoint_EvaluateContextCompletion @ 0x1C0018BF0 (Endpoint_EvaluateContextCompletion.c)
 * Callees:
 *     McTemplateK0pppnnn @ 0x1C003F2B0 (McTemplateK0pppnnn.c)
 */

__int64 __fastcall Etw_EndpointUpdate(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return McTemplateK0pppnnn(
             (int)a2 + 103,
             (unsigned int)&USBXHCI_ETW_EVENT_ENDPOINT_UPDATE,
             0,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
