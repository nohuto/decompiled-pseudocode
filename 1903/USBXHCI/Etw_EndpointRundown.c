/*
 * XREFs of Etw_EndpointRundown @ 0x1C003F098
 * Callers:
 *     Etw_EndpointListRundown @ 0x1C003EEB0 (Etw_EndpointListRundown.c)
 * Callees:
 *     McTemplateK0pppnnn @ 0x1C003F2B0 (McTemplateK0pppnnn.c)
 */

__int64 __fastcall Etw_EndpointRundown(int a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 1) != 0 )
    return McTemplateK0pppnnn(
             a1,
             (unsigned int)&USBXHCI_ETW_EVENT_RUNDOWN_ENDPOINT_INFORMATION,
             a1,
             *(_QWORD *)(*a2 + 8LL),
             a2[1],
             a2[3]);
  return result;
}
