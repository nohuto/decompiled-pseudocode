/*
 * XREFs of McTemplateK0z @ 0x14029EB1C
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14015D9C4 (PnpLogActionQueueEvent.c)
 *     PnpInsertEventInQueue @ 0x140669AA0 (PnpInsertEventInQueue.c)
 *     PnpProcessTargetDeviceEvent @ 0x1406FF3C4 (PnpProcessTargetDeviceEvent.c)
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     PiUEventSendDeviceInstallNotification @ 0x140862EE0 (PiUEventSendDeviceInstallNotification.c)
 *     PiCMQueryRemove @ 0x140873214 (PiCMQueryRemove.c)
 * Callees:
 *     McGenEventWrite @ 0x140144A30 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0z(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v8 = a4;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)&MS_KernelPnP_Provider_Context, a2, 0LL, 2u, &EventData);
}
